#include "tree_sitter/parser.h"
#include <stdbool.h>

enum TokenType {
  JSON_BLOCK,
};

void *tree_sitter_log_external_scanner_create() { return NULL; }
void tree_sitter_log_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_log_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_log_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

static bool scan_json_value(TSLexer *lexer) {
  // Skip leading whitespace (advance with skip=true so they don't become part of the token)
  while (
    lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
    lexer->lookahead == '\n' || lexer->lookahead == '\r'
  ) {
    lexer->advance(lexer, true);
  }

  if (lexer->lookahead != '{' && lexer->lookahead != '[') return false;

  char open = lexer->lookahead;
  lexer->advance(lexer, false);

  // Skip whitespace
  while (
    lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
    lexer->lookahead == '\n' || lexer->lookahead == '\r'
  ) {
    lexer->advance(lexer, false);
  }

  char next = lexer->lookahead;

  if (open == '{') {
    // JSON object: must start with a string key (") or be empty ({})
    if (next != '"' && next != '}') return false;
  } else {
    // JSON array: restrict to [{, [[, [" and [] to avoid false positives
    // (avoids matching [2023-01-01], [INFO], etc.)
    if (next != '{' && next != '[' && next != '"' && next != ']') return false;
  }

  // Bracket-counting scan with string tracking
  int depth = 1;
  bool in_string = false;
  bool escaped = false;

  while (depth > 0 && !lexer->eof(lexer)) {
    char c = lexer->lookahead;
    lexer->advance(lexer, false);

    if (escaped) {
      escaped = false;
      continue;
    }

    if (in_string) {
      if (c == '\\') {
        escaped = true;
      } else if (c == '"') {
        in_string = false;
      }
    } else {
      if (c == '"') {
        in_string = true;
      } else if (c == '{' || c == '[') {
        depth++;
      } else if (c == '}' || c == ']') {
        depth--;
        if (depth == 0) {
          lexer->mark_end(lexer);
          return true;
        }
      }
    }
  }

  return false;
}

bool tree_sitter_log_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (valid_symbols[JSON_BLOCK]) {
    return scan_json_value(lexer);
  }
  return false;
}
