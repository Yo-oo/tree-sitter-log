#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_trace_COLON = 1,
  anon_sym_Trace = 2,
  anon_sym_TRACE = 3,
  anon_sym_LBRACKtrace_RBRACK = 4,
  anon_sym_Verbose = 5,
  anon_sym_VERBOSE = 6,
  anon_sym_LBRACKverbose_RBRACK = 7,
  anon_sym_V_SLASH = 8,
  anon_sym_LBRACKverb_RBRACK = 9,
  anon_sym_LBRACKvrb_RBRACK = 10,
  anon_sym_LBRACKvb_RBRACK = 11,
  anon_sym_LBRACKv_RBRACK = 12,
  anon_sym_debug_COLON = 13,
  anon_sym_Debug = 14,
  anon_sym_DEBUG = 15,
  anon_sym_D_SLASH = 16,
  anon_sym_LBRACKdebug_RBRACK = 17,
  anon_sym_LBRACKdbug_RBRACK = 18,
  anon_sym_LBRACKdbg_RBRACK = 19,
  anon_sym_LBRACKde_RBRACK = 20,
  anon_sym_LBRACKd_RBRACK = 21,
  anon_sym_information_COLON = 22,
  anon_sym_info_COLON = 23,
  anon_sym_INFO = 24,
  anon_sym_INFORMATION = 25,
  anon_sym_NOTICE = 26,
  anon_sym_I_SLASH = 27,
  anon_sym_LBRACKinfo_RBRACK = 28,
  anon_sym_LBRACKinf_RBRACK = 29,
  anon_sym_LBRACKin_RBRACK = 30,
  anon_sym_LBRACKi_RBRACK = 31,
  anon_sym_warning_COLON = 32,
  anon_sym_warning = 33,
  anon_sym_Warn = 34,
  anon_sym_WARN = 35,
  anon_sym_WARNING = 36,
  anon_sym_W_SLASH = 37,
  anon_sym_Warning = 38,
  anon_sym_LBRACKwarning_RBRACK = 39,
  anon_sym_LBRACKwarn_RBRACK = 40,
  anon_sym_LBRACKwrn_RBRACK = 41,
  anon_sym_LBRACKwn_RBRACK = 42,
  anon_sym_LBRACKw_RBRACK = 43,
  anon_sym_error_COLON = 44,
  anon_sym_error = 45,
  anon_sym_Error = 46,
  anon_sym_ERROR = 47,
  anon_sym_ALERT = 48,
  anon_sym_CRITICAL = 49,
  anon_sym_EMERGENCY = 50,
  anon_sym_FAILURE = 51,
  anon_sym_FAIL = 52,
  anon_sym_Fatal = 53,
  anon_sym_FATAL = 54,
  anon_sym_E_SLASH = 55,
  anon_sym_LBRACKcritical_RBRACK = 56,
  anon_sym_LBRACKerror_RBRACK = 57,
  anon_sym_LBRACKerr_RBRACK = 58,
  anon_sym_LBRACKer_RBRACK = 59,
  anon_sym_LBRACKe_RBRACK = 60,
  sym_year_month_day = 61,
  sym_time = 62,
  anon_sym_true = 63,
  anon_sym_True = 64,
  anon_sym_TRUE = 65,
  anon_sym_false = 66,
  anon_sym_False = 67,
  anon_sym_FALSE = 68,
  anon_sym_null = 69,
  anon_sym_Null = 70,
  anon_sym_NULL = 71,
  sym__raw_string_literal = 72,
  sym__interpreted_double_string = 73,
  sym__interpreted_single_string = 74,
  aux_sym_number_token1 = 75,
  aux_sym_number_token2 = 76,
  aux_sym_number_token3 = 77,
  aux_sym_number_token4 = 78,
  aux_sym_number_token5 = 79,
  aux_sym_number_token6 = 80,
  aux_sym_number_token7 = 81,
  aux_sym_number_token8 = 82,
  aux_sym_number_token9 = 83,
  anon_sym_LPAREN = 84,
  anon_sym_RPAREN = 85,
  anon_sym_LBRACK = 86,
  anon_sym_RBRACK = 87,
  anon_sym_LBRACE = 88,
  anon_sym_RBRACE = 89,
  anon_sym_EQ = 90,
  anon_sym_DQUOTE = 91,
  anon_sym_COMMA = 92,
  anon_sym_COLON = 93,
  anon_sym_SLASH = 94,
  anon_sym_DASH = 95,
  sym_word = 96,
  sym_url = 97,
  sym_file_path = 98,
  sym_ipv4 = 99,
  sym_ipv6 = 100,
  sym_mac = 101,
  sym_uuid = 102,
  sym_md5 = 103,
  sym_sha1 = 104,
  sym_sha224 = 105,
  sym_sha256 = 106,
  sym_sha384 = 107,
  sym_sha512 = 108,
  sym_log_file = 109,
  sym_log_level = 110,
  sym_trace = 111,
  sym_debug = 112,
  sym_info = 113,
  sym_warn = 114,
  sym_error = 115,
  sym_date = 116,
  sym_constant = 117,
  sym_string_literal = 118,
  sym_number = 119,
  sym__word_separator = 120,
  sym_objects = 121,
  aux_sym_log_file_repeat1 = 122,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_trace_COLON] = "trace:",
  [anon_sym_Trace] = "Trace",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_LBRACKtrace_RBRACK] = "[trace]",
  [anon_sym_Verbose] = "Verbose",
  [anon_sym_VERBOSE] = "VERBOSE",
  [anon_sym_LBRACKverbose_RBRACK] = "[verbose]",
  [anon_sym_V_SLASH] = "V/",
  [anon_sym_LBRACKverb_RBRACK] = "[verb]",
  [anon_sym_LBRACKvrb_RBRACK] = "[vrb]",
  [anon_sym_LBRACKvb_RBRACK] = "[vb]",
  [anon_sym_LBRACKv_RBRACK] = "[v]",
  [anon_sym_debug_COLON] = "debug:",
  [anon_sym_Debug] = "Debug",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_D_SLASH] = "D/",
  [anon_sym_LBRACKdebug_RBRACK] = "[debug]",
  [anon_sym_LBRACKdbug_RBRACK] = "[dbug]",
  [anon_sym_LBRACKdbg_RBRACK] = "[dbg]",
  [anon_sym_LBRACKde_RBRACK] = "[de]",
  [anon_sym_LBRACKd_RBRACK] = "[d]",
  [anon_sym_information_COLON] = "information:",
  [anon_sym_info_COLON] = "info:",
  [anon_sym_INFO] = "INFO",
  [anon_sym_INFORMATION] = "INFORMATION",
  [anon_sym_NOTICE] = "NOTICE",
  [anon_sym_I_SLASH] = "I/",
  [anon_sym_LBRACKinfo_RBRACK] = "[info]",
  [anon_sym_LBRACKinf_RBRACK] = "[inf]",
  [anon_sym_LBRACKin_RBRACK] = "[in]",
  [anon_sym_LBRACKi_RBRACK] = "[i]",
  [anon_sym_warning_COLON] = "warning:",
  [anon_sym_warning] = "warning ",
  [anon_sym_Warn] = "Warn",
  [anon_sym_WARN] = "WARN",
  [anon_sym_WARNING] = "WARNING",
  [anon_sym_W_SLASH] = "W/",
  [anon_sym_Warning] = "Warning",
  [anon_sym_LBRACKwarning_RBRACK] = "[warning]",
  [anon_sym_LBRACKwarn_RBRACK] = "[warn]",
  [anon_sym_LBRACKwrn_RBRACK] = "[wrn]",
  [anon_sym_LBRACKwn_RBRACK] = "[wn]",
  [anon_sym_LBRACKw_RBRACK] = "[w]",
  [anon_sym_error_COLON] = "error:",
  [anon_sym_error] = "error ",
  [anon_sym_Error] = "Error",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_ALERT] = "ALERT",
  [anon_sym_CRITICAL] = "CRITICAL",
  [anon_sym_EMERGENCY] = "EMERGENCY",
  [anon_sym_FAILURE] = "FAILURE",
  [anon_sym_FAIL] = "FAIL",
  [anon_sym_Fatal] = "Fatal",
  [anon_sym_FATAL] = "FATAL",
  [anon_sym_E_SLASH] = "E/",
  [anon_sym_LBRACKcritical_RBRACK] = "[critical]",
  [anon_sym_LBRACKerror_RBRACK] = "[error]",
  [anon_sym_LBRACKerr_RBRACK] = "[err]",
  [anon_sym_LBRACKer_RBRACK] = "[er]",
  [anon_sym_LBRACKe_RBRACK] = "[e]",
  [sym_year_month_day] = "year_month_day",
  [sym_time] = "time",
  [anon_sym_true] = "true",
  [anon_sym_True] = "True",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_false] = "false",
  [anon_sym_False] = "False",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_null] = "null",
  [anon_sym_Null] = "Null",
  [anon_sym_NULL] = "NULL",
  [sym__raw_string_literal] = "_raw_string_literal",
  [sym__interpreted_double_string] = "_interpreted_double_string",
  [sym__interpreted_single_string] = "_interpreted_single_string",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [aux_sym_number_token5] = "number_token5",
  [aux_sym_number_token6] = "number_token6",
  [aux_sym_number_token7] = "number_token7",
  [aux_sym_number_token8] = "number_token8",
  [aux_sym_number_token9] = "number_token9",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [sym_word] = "word",
  [sym_url] = "url",
  [sym_file_path] = "file_path",
  [sym_ipv4] = "ipv4",
  [sym_ipv6] = "ipv6",
  [sym_mac] = "mac",
  [sym_uuid] = "uuid",
  [sym_md5] = "md5",
  [sym_sha1] = "sha1",
  [sym_sha224] = "sha224",
  [sym_sha256] = "sha256",
  [sym_sha384] = "sha384",
  [sym_sha512] = "sha512",
  [sym_log_file] = "log_file",
  [sym_log_level] = "log_level",
  [sym_trace] = "trace",
  [sym_debug] = "debug",
  [sym_info] = "info",
  [sym_warn] = "warn",
  [sym_error] = "error",
  [sym_date] = "date",
  [sym_constant] = "constant",
  [sym_string_literal] = "string_literal",
  [sym_number] = "number",
  [sym__word_separator] = "_word_separator",
  [sym_objects] = "objects",
  [aux_sym_log_file_repeat1] = "log_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_trace_COLON] = anon_sym_trace_COLON,
  [anon_sym_Trace] = anon_sym_Trace,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_LBRACKtrace_RBRACK] = anon_sym_LBRACKtrace_RBRACK,
  [anon_sym_Verbose] = anon_sym_Verbose,
  [anon_sym_VERBOSE] = anon_sym_VERBOSE,
  [anon_sym_LBRACKverbose_RBRACK] = anon_sym_LBRACKverbose_RBRACK,
  [anon_sym_V_SLASH] = anon_sym_V_SLASH,
  [anon_sym_LBRACKverb_RBRACK] = anon_sym_LBRACKverb_RBRACK,
  [anon_sym_LBRACKvrb_RBRACK] = anon_sym_LBRACKvrb_RBRACK,
  [anon_sym_LBRACKvb_RBRACK] = anon_sym_LBRACKvb_RBRACK,
  [anon_sym_LBRACKv_RBRACK] = anon_sym_LBRACKv_RBRACK,
  [anon_sym_debug_COLON] = anon_sym_debug_COLON,
  [anon_sym_Debug] = anon_sym_Debug,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_D_SLASH] = anon_sym_D_SLASH,
  [anon_sym_LBRACKdebug_RBRACK] = anon_sym_LBRACKdebug_RBRACK,
  [anon_sym_LBRACKdbug_RBRACK] = anon_sym_LBRACKdbug_RBRACK,
  [anon_sym_LBRACKdbg_RBRACK] = anon_sym_LBRACKdbg_RBRACK,
  [anon_sym_LBRACKde_RBRACK] = anon_sym_LBRACKde_RBRACK,
  [anon_sym_LBRACKd_RBRACK] = anon_sym_LBRACKd_RBRACK,
  [anon_sym_information_COLON] = anon_sym_information_COLON,
  [anon_sym_info_COLON] = anon_sym_info_COLON,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_INFORMATION] = anon_sym_INFORMATION,
  [anon_sym_NOTICE] = anon_sym_NOTICE,
  [anon_sym_I_SLASH] = anon_sym_I_SLASH,
  [anon_sym_LBRACKinfo_RBRACK] = anon_sym_LBRACKinfo_RBRACK,
  [anon_sym_LBRACKinf_RBRACK] = anon_sym_LBRACKinf_RBRACK,
  [anon_sym_LBRACKin_RBRACK] = anon_sym_LBRACKin_RBRACK,
  [anon_sym_LBRACKi_RBRACK] = anon_sym_LBRACKi_RBRACK,
  [anon_sym_warning_COLON] = anon_sym_warning_COLON,
  [anon_sym_warning] = anon_sym_warning,
  [anon_sym_Warn] = anon_sym_Warn,
  [anon_sym_WARN] = anon_sym_WARN,
  [anon_sym_WARNING] = anon_sym_WARNING,
  [anon_sym_W_SLASH] = anon_sym_W_SLASH,
  [anon_sym_Warning] = anon_sym_Warning,
  [anon_sym_LBRACKwarning_RBRACK] = anon_sym_LBRACKwarning_RBRACK,
  [anon_sym_LBRACKwarn_RBRACK] = anon_sym_LBRACKwarn_RBRACK,
  [anon_sym_LBRACKwrn_RBRACK] = anon_sym_LBRACKwrn_RBRACK,
  [anon_sym_LBRACKwn_RBRACK] = anon_sym_LBRACKwn_RBRACK,
  [anon_sym_LBRACKw_RBRACK] = anon_sym_LBRACKw_RBRACK,
  [anon_sym_error_COLON] = anon_sym_error_COLON,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_Error] = anon_sym_Error,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_ALERT] = anon_sym_ALERT,
  [anon_sym_CRITICAL] = anon_sym_CRITICAL,
  [anon_sym_EMERGENCY] = anon_sym_EMERGENCY,
  [anon_sym_FAILURE] = anon_sym_FAILURE,
  [anon_sym_FAIL] = anon_sym_FAIL,
  [anon_sym_Fatal] = anon_sym_Fatal,
  [anon_sym_FATAL] = anon_sym_FATAL,
  [anon_sym_E_SLASH] = anon_sym_E_SLASH,
  [anon_sym_LBRACKcritical_RBRACK] = anon_sym_LBRACKcritical_RBRACK,
  [anon_sym_LBRACKerror_RBRACK] = anon_sym_LBRACKerror_RBRACK,
  [anon_sym_LBRACKerr_RBRACK] = anon_sym_LBRACKerr_RBRACK,
  [anon_sym_LBRACKer_RBRACK] = anon_sym_LBRACKer_RBRACK,
  [anon_sym_LBRACKe_RBRACK] = anon_sym_LBRACKe_RBRACK,
  [sym_year_month_day] = sym_year_month_day,
  [sym_time] = sym_time,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_Null] = anon_sym_Null,
  [anon_sym_NULL] = anon_sym_NULL,
  [sym__raw_string_literal] = sym__raw_string_literal,
  [sym__interpreted_double_string] = sym__interpreted_double_string,
  [sym__interpreted_single_string] = sym__interpreted_single_string,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [aux_sym_number_token5] = aux_sym_number_token5,
  [aux_sym_number_token6] = aux_sym_number_token6,
  [aux_sym_number_token7] = aux_sym_number_token7,
  [aux_sym_number_token8] = aux_sym_number_token8,
  [aux_sym_number_token9] = aux_sym_number_token9,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_word] = sym_word,
  [sym_url] = sym_url,
  [sym_file_path] = sym_file_path,
  [sym_ipv4] = sym_ipv4,
  [sym_ipv6] = sym_ipv6,
  [sym_mac] = sym_mac,
  [sym_uuid] = sym_uuid,
  [sym_md5] = sym_md5,
  [sym_sha1] = sym_sha1,
  [sym_sha224] = sym_sha224,
  [sym_sha256] = sym_sha256,
  [sym_sha384] = sym_sha384,
  [sym_sha512] = sym_sha512,
  [sym_log_file] = sym_log_file,
  [sym_log_level] = sym_log_level,
  [sym_trace] = sym_trace,
  [sym_debug] = sym_debug,
  [sym_info] = sym_info,
  [sym_warn] = sym_warn,
  [sym_error] = sym_error,
  [sym_date] = sym_date,
  [sym_constant] = sym_constant,
  [sym_string_literal] = sym_string_literal,
  [sym_number] = sym_number,
  [sym__word_separator] = sym__word_separator,
  [sym_objects] = sym_objects,
  [aux_sym_log_file_repeat1] = aux_sym_log_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_trace_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKtrace_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Verbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERBOSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKverbose_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKverb_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKvrb_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKvb_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKv_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEBUG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKdebug_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKdbug_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKdbg_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKde_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKd_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_information_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFORMATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTICE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKinfo_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKinf_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKin_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKi_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warning_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Warn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARNING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_W_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Warning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKwarning_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKwarn_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKwrn_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKwn_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKw_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CRITICAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EMERGENCY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FAILURE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FAIL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fatal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FATAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKcritical_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKerror_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKerr_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKer_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKe_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_year_month_day] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [sym__raw_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__interpreted_double_string] = {
    .visible = false,
    .named = true,
  },
  [sym__interpreted_single_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv4] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv6] = {
    .visible = true,
    .named = true,
  },
  [sym_mac] = {
    .visible = true,
    .named = true,
  },
  [sym_uuid] = {
    .visible = true,
    .named = true,
  },
  [sym_md5] = {
    .visible = true,
    .named = true,
  },
  [sym_sha1] = {
    .visible = true,
    .named = true,
  },
  [sym_sha224] = {
    .visible = true,
    .named = true,
  },
  [sym_sha256] = {
    .visible = true,
    .named = true,
  },
  [sym_sha384] = {
    .visible = true,
    .named = true,
  },
  [sym_sha512] = {
    .visible = true,
    .named = true,
  },
  [sym_log_file] = {
    .visible = true,
    .named = true,
  },
  [sym_log_level] = {
    .visible = true,
    .named = true,
  },
  [sym_trace] = {
    .visible = true,
    .named = true,
  },
  [sym_debug] = {
    .visible = true,
    .named = true,
  },
  [sym_info] = {
    .visible = true,
    .named = true,
  },
  [sym_warn] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__word_separator] = {
    .visible = false,
    .named = true,
  },
  [sym_objects] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_log_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
};

static inline bool sym__raw_string_literal_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= '/' || (c < ']'
      ? (c < '='
        ? c == ':'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__interpreted_single_string_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= '/' || (c < '['
      ? (c < '='
        ? c == ':'
        : c <= '=')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__interpreted_single_string_character_set_2(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '-' || (c < '['
      ? (c < '='
        ? (c >= '/' && c <= ':')
        : c <= '=')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__interpreted_single_string_character_set_3(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= '/' || (c < ']'
      ? (c < '='
        ? c == ':'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : (c <= ')' || (c >= ',' && c <= '-')))))
    : (c <= '/' || (c < ']'
      ? (c < '='
        ? c == ':'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_2(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '='
        ? (c >= '/' && c <= ':')
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_3(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '-' || (c < ']'
      ? (c < '='
        ? c == '/'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_4(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '-' || (c < ']'
      ? (c < '='
        ? (c >= '/' && c <= ':')
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_5(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ':' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_6(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '/' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_7(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_8(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= '/' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_9(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '='
        ? c == '/'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_10(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '-' || (c < ']'
      ? (c < '='
        ? c == ':'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_11(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '='
        ? c == ':'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_12(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '/' || (c < ']'
      ? (c < '='
        ? c == ':'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_13(int32_t c) {
  return (c < ':'
    ? (c < '('
      ? (c < '"'
        ? c == 0
        : c <= '"')
      : (c <= ')' || (c < '/'
        ? (c >= ',' && c <= '-')
        : c <= '/')))
    : (c <= ':' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(225);
      if (lookahead == '"') ADVANCE(721);
      if (lookahead == '\'') ADVANCE(728);
      if (lookahead == '(') ADVANCE(714);
      if (lookahead == ')') ADVANCE(715);
      if (lookahead == ',') ADVANCE(722);
      if (lookahead == '-') ADVANCE(725);
      if (lookahead == '.') ADVANCE(858);
      if (lookahead == '/') ADVANCE(724);
      if (lookahead == '0') ADVANCE(456);
      if (lookahead == '1') ADVANCE(459);
      if (lookahead == '2') ADVANCE(457);
      if (lookahead == '3') ADVANCE(458);
      if (lookahead == ':') ADVANCE(723);
      if (lookahead == '=') ADVANCE(720);
      if (lookahead == 'A') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(962);
      if (lookahead == 'D') ADVANCE(887);
      if (lookahead == 'E') ADVANCE(888);
      if (lookahead == 'F') ADVANCE(917);
      if (lookahead == 'I') ADVANCE(889);
      if (lookahead == 'J') ADVANCE(984);
      if (lookahead == 'M') ADVANCE(980);
      if (lookahead == 'N') ADVANCE(957);
      if (lookahead == 'O') ADVANCE(994);
      if (lookahead == 'S') ADVANCE(998);
      if (lookahead == 'T') ADVANCE(963);
      if (lookahead == 'V') ADVANCE(890);
      if (lookahead == 'W') ADVANCE(891);
      if (lookahead == '[') ADVANCE(716);
      if (lookahead == ']') ADVANCE(717);
      if (lookahead == '`') ADVANCE(979);
      if (lookahead == 'd') ADVANCE(901);
      if (lookahead == 'e') ADVANCE(902);
      if (lookahead == 'f') ADVANCE(900);
      if (lookahead == 'h') ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(1025);
      if (lookahead == 'n') ADVANCE(1062);
      if (lookahead == 't') ADVANCE(1052);
      if (lookahead == 'w') ADVANCE(987);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '}') ADVANCE(719);
      if (lookahead == '~') ADVANCE(886);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(460);
      if (lookahead != 0) ADVANCE(1205);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(215);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(160);
      if (lookahead == '1') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(161);
      if (lookahead == '3') ADVANCE(134);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(166);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(162);
      if (lookahead == '3') ADVANCE(135);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(170);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == '1') ADVANCE(174);
      if (lookahead == '2') ADVANCE(153);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == '1') ADVANCE(151);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'J') ADVANCE(88);
      if (lookahead == 'M') ADVANCE(89);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(99);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(156);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(182);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(185);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1222);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(189);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(191);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(195);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(197);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(296);
      END_STATE();
    case 56:
      if (lookahead == 'M') ADVANCE(291);
      END_STATE();
    case 57:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(291);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(296);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(246);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(255);
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(236);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(267);
      END_STATE();
    case 71:
      if (lookahead == ']') ADVANCE(244);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 73:
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == ']') ADVANCE(235);
      END_STATE();
    case 75:
      if (lookahead == ']') ADVANCE(266);
      END_STATE();
    case 76:
      if (lookahead == ']') ADVANCE(243);
      END_STATE();
    case 77:
      if (lookahead == ']') ADVANCE(253);
      END_STATE();
    case 78:
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 79:
      if (lookahead == ']') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == ']') ADVANCE(242);
      END_STATE();
    case 81:
      if (lookahead == ']') ADVANCE(282);
      END_STATE();
    case 82:
      if (lookahead == ']') ADVANCE(229);
      END_STATE();
    case 83:
      if (lookahead == ']') ADVANCE(232);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(264);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(281);
      END_STATE();
    case 86:
      if (lookahead == '`') ADVANCE(306);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 129:
      if (lookahead == 'v') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'S') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(291);
      END_STATE();
    case 132:
      if (lookahead == 'l' ||
          lookahead == 'n') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 133:
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 134:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(287);
      END_STATE();
    case 135:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(289);
      END_STATE();
    case 136:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      END_STATE();
    case 137:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 138:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 139:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 140:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 141:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 142:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 143:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      END_STATE();
    case 144:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 145:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 149:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(136);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(143);
      END_STATE();
    case 152:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(13);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(47);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(39);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(167);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(40);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(48);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 159:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 160:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 161:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 162:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 163:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1221);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1219);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1223);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 216:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 217:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 218:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 219:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '.' &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(224);
      END_STATE();
    case 221:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ';') ADVANCE(1207);
      END_STATE();
    case 222:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 223:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 224:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1206);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_trace_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_Trace);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LBRACKtrace_RBRACK);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Verbose);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_VERBOSE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LBRACKverbose_RBRACK);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_V_SLASH);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LBRACKverb_RBRACK);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACKvrb_RBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACKvb_RBRACK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACKv_RBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_debug_COLON);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Debug);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_D_SLASH);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LBRACKdebug_RBRACK);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACKdbug_RBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LBRACKdbg_RBRACK);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LBRACKde_RBRACK);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LBRACKd_RBRACK);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_information_COLON);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_info_COLON);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (lookahead == 'R') ADVANCE(952);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_INFORMATION);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_NOTICE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_I_SLASH);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LBRACKinfo_RBRACK);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACKinf_RBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LBRACKin_RBRACK);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACKi_RBRACK);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_warning_COLON);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_warning);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Warn);
      if (lookahead == 'i') ADVANCE(1030);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_WARN);
      if (lookahead == 'I') ADVANCE(956);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_WARNING);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_W_SLASH);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Warning);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACKwarning_RBRACK);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LBRACKwarn_RBRACK);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACKwrn_RBRACK);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACKwn_RBRACK);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LBRACKw_RBRACK);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_error_COLON);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_Error);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_ERROR);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_ALERT);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_CRITICAL);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_EMERGENCY);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_FAILURE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_FAIL);
      if (lookahead == 'U') ADVANCE(970);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Fatal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_FATAL);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_E_SLASH);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACKcritical_RBRACK);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACKerror_RBRACK);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACKerr_RBRACK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACKer_RBRACK);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LBRACKe_RBRACK);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_year_month_day);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == 'T') ADVANCE(290);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == 'T') ADVANCE(286);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_year_month_day);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(130);
      if (lookahead == 'G') ADVANCE(57);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(130);
      if (lookahead == 'G') ADVANCE(57);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(130);
      if (lookahead == 'G') ADVANCE(57);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(291);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(130);
      if (lookahead == 'G') ADVANCE(57);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(176);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_True);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_False);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_null);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_Null);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__raw_string_literal);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__interpreted_double_string);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(413);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1181);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(322);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1097);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(904);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(311);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1225);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1227);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1229);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1231);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1233);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1235);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1237);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1239);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1241);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1243);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1244);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1244);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(323);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1090);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1083);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(325);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1091);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(316);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1084);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1092);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(317);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1085);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(329);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1093);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(318);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1086);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(331);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1094);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(319);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1087);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(333);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1095);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(320);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1088);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(335);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1096);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(321);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1089);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(326);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1099);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1100);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1101);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(332);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1102);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(334);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1103);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(336);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1104);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(337);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1105);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(338);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1107);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(340);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1108);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(341);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1110);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(343);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(344);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1112);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(345);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1113);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(346);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1114);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(347);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1115);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(348);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1116);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(349);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1117);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(350);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1118);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(351);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1119);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(352);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1120);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(353);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1121);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(354);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1122);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(356);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1124);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(358);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1126);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(359);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1127);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(360);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1128);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(361);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1129);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(362);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1130);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(363);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1131);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(364);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1132);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1133);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(366);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1134);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(367);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1135);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(368);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(369);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1138);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(371);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1139);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(372);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1140);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1141);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(374);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1142);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(375);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1143);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(376);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1144);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(377);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1145);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(378);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1146);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(379);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1147);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(380);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1148);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(381);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1149);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(382);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1150);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(383);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1151);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1152);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(385);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1153);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1154);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1155);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(388);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1156);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1158);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(391);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1159);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(392);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1160);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(393);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1161);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(394);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1162);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(395);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(396);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1164);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(397);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1165);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(398);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1166);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(399);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(400);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1168);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(401);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1169);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(402);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1170);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(403);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1171);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(404);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1172);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(405);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1173);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(406);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1174);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(407);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1175);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(408);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1176);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(409);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1177);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(410);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1178);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(411);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1179);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(412);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1180);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(414);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1182);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(415);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1183);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(416);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1184);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(417);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1185);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(418);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1186);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(419);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1187);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(420);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1188);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(421);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1189);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(422);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1190);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(423);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1191);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(424);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1192);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(425);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1193);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(426);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1194);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(427);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1195);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(428);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1196);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(429);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1197);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1082);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(432);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(433);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(434);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == '0') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == '5') ADVANCE(440);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(441);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(444);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(442);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(898);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '0') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '0') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(436);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(445);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(436);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(835);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '-') ADVANCE(192);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '-') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '0') ADVANCE(464);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'B') ADVANCE(1069);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'b') ADVANCE(915);
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1072);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1200);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1205);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '4') ADVANCE(586);
      if (lookahead == '5') ADVANCE(584);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(583);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1205);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(585);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1205);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(736);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1205);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(736);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1205);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(734);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1205);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(735);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1205);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(734);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1205);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(735);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1205);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(1226);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1224);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(1230);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1228);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(1234);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1232);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(1238);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1236);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(1242);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1240);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(1244);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1244);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(744);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(737);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(855);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(745);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(738);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(746);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(739);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(747);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(740);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(748);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(741);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(749);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(742);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(750);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(743);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(752);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(753);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(754);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(755);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(756);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(757);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(758);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(759);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(760);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(761);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(762);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(763);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(764);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(765);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(766);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(767);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(768);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(769);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(770);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(771);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(772);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(773);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(774);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(775);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(776);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(778);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(780);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(781);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(782);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(783);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(784);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(785);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(786);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(787);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(515);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(788);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(789);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(790);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(791);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(792);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(793);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(794);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(795);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(796);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(797);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(525);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(798);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(799);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(800);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(801);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(802);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(803);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(804);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(805);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(533);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(806);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(807);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(808);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(809);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(810);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(812);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(813);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(814);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(815);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(816);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(817);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(818);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(819);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(820);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(821);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(822);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(824);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(825);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(826);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(827);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(828);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(829);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(830);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(831);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(832);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(560);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(833);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(834);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(836);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(837);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(838);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(839);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(840);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(841);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(842);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(843);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(844);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(845);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(846);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(847);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(848);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(849);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(850);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1075);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(851);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(893);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(735);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1205);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(894);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(735);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1205);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(894);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(735);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(8);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(461);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1205);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(894);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(735);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1205);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(894);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(735);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1205);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(899);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(751);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1205);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == ':') ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == ':') ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1226);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1230);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1234);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1238);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1242);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1244);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(604);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(605);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(609);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(610);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(611);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(630);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(638);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(639);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(644);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(647);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(649);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(652);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(654);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(655);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(657);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(658);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(659);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(665);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(666);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(679);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(680);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(682);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(695);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(698);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(699);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(707);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(712);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1082);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'v') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ';') ADVANCE(1207);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == ':') ADVANCE(269);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(1205);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == ':') ADVANCE(257);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(1205);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1082);
      if (lookahead == 'b') ADVANCE(729);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'h') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(730);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1082);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(432);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(434);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1082);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1082);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == ':') ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(1205);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == ':') ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(1205);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == ':') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(1205);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1226);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1230);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1234);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1238);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1242);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1244);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(604);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(605);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(609);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(610);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(611);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(630);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(638);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(639);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(644);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(647);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(649);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(652);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(654);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(655);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(657);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(658);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(659);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(665);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(666);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(679);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(680);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(682);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(695);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(698);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(699);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(707);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead == '-') ADVANCE(159);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1076);
      if (lookahead == '-') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1181);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1205);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '/') ADVANCE(221);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1205);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(860);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(862);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(863);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(10);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (lookahead == '5') ADVANCE(869);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(870);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (lookahead == '5') ADVANCE(868);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(873);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(871);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(878);
      if (!sym_word_character_set_12(lookahead)) ADVANCE(1205);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(870);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(871);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1078);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1079);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(873);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1205);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(896);
      if (!sym_word_character_set_12(lookahead)) ADVANCE(1205);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(880);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(881);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(179);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1205);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(221);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1205);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == 'E') ADVANCE(922);
      if (lookahead == 'e') ADVANCE(990);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1205);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == 'M') ADVANCE(936);
      if (lookahead == 'R') ADVANCE(964);
      if (lookahead == 'r') ADVANCE(1044);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1205);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'N') ADVANCE(937);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1205);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == 'E') ADVANCE(967);
      if (lookahead == 'e') ADVANCE(1047);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1205);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == 'A') ADVANCE(965);
      if (lookahead == 'a') ADVANCE(1049);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1205);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(442);
      if (lookahead == '1') ADVANCE(443);
      if (lookahead == '2') ADVANCE(438);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(446);
      if (lookahead == '1') ADVANCE(448);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1202);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(437);
      if (lookahead == '1') ADVANCE(439);
      if (lookahead == '2') ADVANCE(438);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1202);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(878);
      if (lookahead == '1') ADVANCE(872);
      if (lookahead == '2') ADVANCE(866);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(870);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(1209);
      if (lookahead == '1') ADVANCE(1213);
      if (lookahead == '2') ADVANCE(1210);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1212);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(1073);
      if (lookahead == '3') ADVANCE(1070);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1077);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(876);
      if (lookahead == '1') ADVANCE(877);
      if (lookahead == '2') ADVANCE(867);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(875);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(447);
      if (lookahead == '1') ADVANCE(449);
      if (lookahead == 'A') ADVANCE(1041);
      if (lookahead == 'D') ADVANCE(1007);
      if (lookahead == 'F') ADVANCE(1004);
      if (lookahead == 'J') ADVANCE(981);
      if (lookahead == 'M') ADVANCE(982);
      if (lookahead == 'N') ADVANCE(1034);
      if (lookahead == 'O') ADVANCE(993);
      if (lookahead == 'S') ADVANCE(1005);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1204);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(904);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1097);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(904);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 's') ADVANCE(908);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(7);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(1024);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(238);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(226);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(247);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'b') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(313);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(905);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1205);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(941);
      if (lookahead == 'a') ADVANCE(1018);
      if (lookahead == 'e') ADVANCE(989);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(925);
      if (lookahead == 'U') ADVANCE(928);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(949);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(950);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(976);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(977);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(961);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(978);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(930);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(931);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(920);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(299);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(302);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(228);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(251);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(276);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(231);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(955);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(968);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(969);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(958);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(240);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(261);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(934);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(947);
      if (lookahead == 'L') ADVANCE(971);
      if (lookahead == 'T') ADVANCE(919);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(927);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(959);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(975);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(926);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(935);
      if (lookahead == 'p') ADVANCE(1043);
      if (lookahead == 'u') ADVANCE(1010);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(277);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(305);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(279);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(274);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(948);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(921);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(260);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(250);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(924);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(939);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(974);
      if (lookahead == 'U') ADVANCE(951);
      if (lookahead == 'o') ADVANCE(1063);
      if (lookahead == 'u') ADVANCE(1022);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(249);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(954);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(966);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(972);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(944);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(983);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(960);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(953);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(272);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(923);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(973);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(940);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(932);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(929);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(933);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(273);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(945);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(942);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(943);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(938);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(275);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(307);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(86);
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1067);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'u') ADVANCE(1066);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(996);
      if (lookahead == 'u') ADVANCE(999);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1026);
      if (lookahead == 'u') ADVANCE(1065);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1058);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1021);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1050);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(997);
      if (lookahead == 'u') ADVANCE(1000);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(1071);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(1061);
      if (lookahead == 'c') ADVANCE(1071);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(1038);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1059);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1056);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1002);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1008);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1039);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(298);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(297);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(301);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(227);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(300);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(991);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1042);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(230);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(995);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(911);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(1033);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(1071);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(910);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(263);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(727);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1035);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1032);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1053);
      if (lookahead == 't') ADVANCE(986);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(304);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(303);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(278);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1019);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1020);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(985);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1009);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1071);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(259);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1017);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1013);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(912);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1014);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(909);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1064);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1031);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1045);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1046);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1055);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1071);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(907);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1048);
      if (lookahead == 'u') ADVANCE(1015);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1071);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1036);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(271);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(726);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(992);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1027);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1028);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1037);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(988);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1001);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1003);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1006);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1071);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1040);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1016);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1057);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1011);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1023);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(1071);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l' ||
          lookahead == 'n') ADVANCE(1071);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l' ||
          lookahead == 'n') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(1071);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(288);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(433);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_word);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1078);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1079);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_word);
      if (sym__interpreted_single_string_character_set_3(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1227);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1231);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1235);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1239);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1243);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1244);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1083);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1084);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1085);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1086);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1087);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1088);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1089);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1090);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1091);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1092);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1093);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1094);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1095);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1096);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1099);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1100);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1101);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1102);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1103);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1104);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1105);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1107);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1108);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1110);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1112);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1113);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1114);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1115);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1116);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1117);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1118);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1119);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1120);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1121);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1122);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1124);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1126);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1127);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1128);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1129);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1130);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1131);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1132);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1133);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1134);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1135);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1138);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1139);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1140);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1141);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1142);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1143);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1144);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1145);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1146);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1147);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1148);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1149);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1150);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1151);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1152);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1153);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1154);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1155);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1156);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1158);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1159);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1160);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1161);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1162);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1164);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1165);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1166);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1168);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1169);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1170);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1171);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1172);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1173);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1174);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1175);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1176);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1177);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1178);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1179);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1180);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1182);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1183);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1184);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1185);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1186);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1187);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1188);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1189);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1190);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1191);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1192);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1193);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1194);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1195);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1196);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1197);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(712);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1201);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1205);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1206);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ';') ADVANCE(1207);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_ipv4);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(168);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '5') ADVANCE(1211);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1212);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1209);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1209);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1212);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1208);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_ipv6);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_ipv6);
      if (lookahead == '/') ADVANCE(173);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_ipv6);
      if (lookahead == '/') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1216);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_ipv6);
      if (lookahead == '/') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1217);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_ipv6);
      if (lookahead == '/') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1218);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_ipv6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1215);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_ipv6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1220);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == ':') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_uuid);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_md5);
      if (lookahead == 'e') ADVANCE(777);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_md5);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(355);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1123);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_md5);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_md5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1123);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_sha1);
      if (lookahead == 'e') ADVANCE(811);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_sha1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(389);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1157);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1157);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_sha224);
      if (lookahead == 'e') ADVANCE(779);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_sha224);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(357);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1125);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_sha224);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_sha224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1125);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_sha256);
      if (lookahead == 'e') ADVANCE(852);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_sha256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(430);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1198);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_sha256);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_sha256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1198);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_sha384);
      if (lookahead == 'e') ADVANCE(853);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_sha384);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(431);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1199);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_sha384);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_sha384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1199);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_sha512);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_trace_COLON] = ACTIONS(1),
    [anon_sym_Trace] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(1),
    [anon_sym_Verbose] = ACTIONS(1),
    [anon_sym_VERBOSE] = ACTIONS(1),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(1),
    [anon_sym_V_SLASH] = ACTIONS(1),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(1),
    [anon_sym_debug_COLON] = ACTIONS(1),
    [anon_sym_Debug] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_D_SLASH] = ACTIONS(1),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(1),
    [anon_sym_information_COLON] = ACTIONS(1),
    [anon_sym_info_COLON] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_INFORMATION] = ACTIONS(1),
    [anon_sym_NOTICE] = ACTIONS(1),
    [anon_sym_I_SLASH] = ACTIONS(1),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(1),
    [anon_sym_warning_COLON] = ACTIONS(1),
    [anon_sym_warning] = ACTIONS(1),
    [anon_sym_Warn] = ACTIONS(1),
    [anon_sym_WARN] = ACTIONS(1),
    [anon_sym_WARNING] = ACTIONS(1),
    [anon_sym_W_SLASH] = ACTIONS(1),
    [anon_sym_Warning] = ACTIONS(1),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(1),
    [anon_sym_error_COLON] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_Error] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_ALERT] = ACTIONS(1),
    [anon_sym_CRITICAL] = ACTIONS(1),
    [anon_sym_EMERGENCY] = ACTIONS(1),
    [anon_sym_FAILURE] = ACTIONS(1),
    [anon_sym_FAIL] = ACTIONS(1),
    [anon_sym_Fatal] = ACTIONS(1),
    [anon_sym_FATAL] = ACTIONS(1),
    [anon_sym_E_SLASH] = ACTIONS(1),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(1),
    [sym_year_month_day] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_Null] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [sym__raw_string_literal] = ACTIONS(1),
    [sym__interpreted_double_string] = ACTIONS(1),
    [sym__interpreted_single_string] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [aux_sym_number_token4] = ACTIONS(1),
    [aux_sym_number_token5] = ACTIONS(1),
    [aux_sym_number_token6] = ACTIONS(1),
    [aux_sym_number_token7] = ACTIONS(1),
    [aux_sym_number_token8] = ACTIONS(1),
    [aux_sym_number_token9] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [sym_file_path] = ACTIONS(1),
    [sym_ipv4] = ACTIONS(1),
    [sym_ipv6] = ACTIONS(1),
    [sym_mac] = ACTIONS(1),
    [sym_uuid] = ACTIONS(1),
    [sym_md5] = ACTIONS(1),
    [sym_sha1] = ACTIONS(1),
    [sym_sha224] = ACTIONS(1),
    [sym_sha256] = ACTIONS(1),
    [sym_sha384] = ACTIONS(1),
    [sym_sha512] = ACTIONS(1),
  },
  [1] = {
    [sym_log_file] = STATE(15),
    [sym_log_level] = STATE(2),
    [sym_trace] = STATE(14),
    [sym_debug] = STATE(14),
    [sym_info] = STATE(14),
    [sym_warn] = STATE(14),
    [sym_error] = STATE(14),
    [sym_date] = STATE(2),
    [sym_constant] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym_number] = STATE(2),
    [sym__word_separator] = STATE(2),
    [sym_objects] = STATE(2),
    [aux_sym_log_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_trace_COLON] = ACTIONS(5),
    [anon_sym_Trace] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(5),
    [anon_sym_Verbose] = ACTIONS(7),
    [anon_sym_VERBOSE] = ACTIONS(7),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(5),
    [anon_sym_V_SLASH] = ACTIONS(5),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(5),
    [anon_sym_debug_COLON] = ACTIONS(9),
    [anon_sym_Debug] = ACTIONS(11),
    [anon_sym_DEBUG] = ACTIONS(11),
    [anon_sym_D_SLASH] = ACTIONS(9),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(9),
    [anon_sym_information_COLON] = ACTIONS(13),
    [anon_sym_info_COLON] = ACTIONS(13),
    [anon_sym_INFO] = ACTIONS(15),
    [anon_sym_INFORMATION] = ACTIONS(15),
    [anon_sym_NOTICE] = ACTIONS(15),
    [anon_sym_I_SLASH] = ACTIONS(13),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(13),
    [anon_sym_warning_COLON] = ACTIONS(17),
    [anon_sym_warning] = ACTIONS(17),
    [anon_sym_Warn] = ACTIONS(19),
    [anon_sym_WARN] = ACTIONS(19),
    [anon_sym_WARNING] = ACTIONS(19),
    [anon_sym_W_SLASH] = ACTIONS(17),
    [anon_sym_Warning] = ACTIONS(19),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(17),
    [anon_sym_error_COLON] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_Error] = ACTIONS(23),
    [anon_sym_ERROR] = ACTIONS(23),
    [anon_sym_ALERT] = ACTIONS(23),
    [anon_sym_CRITICAL] = ACTIONS(23),
    [anon_sym_EMERGENCY] = ACTIONS(23),
    [anon_sym_FAILURE] = ACTIONS(23),
    [anon_sym_FAIL] = ACTIONS(23),
    [anon_sym_Fatal] = ACTIONS(23),
    [anon_sym_FATAL] = ACTIONS(23),
    [anon_sym_E_SLASH] = ACTIONS(21),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(21),
    [sym_year_month_day] = ACTIONS(25),
    [sym_time] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_Null] = ACTIONS(27),
    [anon_sym_NULL] = ACTIONS(27),
    [sym__raw_string_literal] = ACTIONS(29),
    [sym__interpreted_double_string] = ACTIONS(31),
    [sym__interpreted_single_string] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(33),
    [aux_sym_number_token3] = ACTIONS(33),
    [aux_sym_number_token4] = ACTIONS(33),
    [aux_sym_number_token5] = ACTIONS(33),
    [aux_sym_number_token6] = ACTIONS(33),
    [aux_sym_number_token7] = ACTIONS(33),
    [aux_sym_number_token8] = ACTIONS(33),
    [aux_sym_number_token9] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_word] = ACTIONS(37),
    [sym_url] = ACTIONS(39),
    [sym_file_path] = ACTIONS(39),
    [sym_ipv4] = ACTIONS(39),
    [sym_ipv6] = ACTIONS(39),
    [sym_mac] = ACTIONS(41),
    [sym_uuid] = ACTIONS(39),
    [sym_md5] = ACTIONS(41),
    [sym_sha1] = ACTIONS(41),
    [sym_sha224] = ACTIONS(41),
    [sym_sha256] = ACTIONS(41),
    [sym_sha384] = ACTIONS(41),
    [sym_sha512] = ACTIONS(39),
  },
  [2] = {
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(14),
    [sym_debug] = STATE(14),
    [sym_info] = STATE(14),
    [sym_warn] = STATE(14),
    [sym_error] = STATE(14),
    [sym_date] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [sym_objects] = STATE(3),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_trace_COLON] = ACTIONS(5),
    [anon_sym_Trace] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(5),
    [anon_sym_Verbose] = ACTIONS(7),
    [anon_sym_VERBOSE] = ACTIONS(7),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(5),
    [anon_sym_V_SLASH] = ACTIONS(5),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(5),
    [anon_sym_debug_COLON] = ACTIONS(9),
    [anon_sym_Debug] = ACTIONS(11),
    [anon_sym_DEBUG] = ACTIONS(11),
    [anon_sym_D_SLASH] = ACTIONS(9),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(9),
    [anon_sym_information_COLON] = ACTIONS(13),
    [anon_sym_info_COLON] = ACTIONS(13),
    [anon_sym_INFO] = ACTIONS(15),
    [anon_sym_INFORMATION] = ACTIONS(15),
    [anon_sym_NOTICE] = ACTIONS(15),
    [anon_sym_I_SLASH] = ACTIONS(13),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(13),
    [anon_sym_warning_COLON] = ACTIONS(17),
    [anon_sym_warning] = ACTIONS(17),
    [anon_sym_Warn] = ACTIONS(19),
    [anon_sym_WARN] = ACTIONS(19),
    [anon_sym_WARNING] = ACTIONS(19),
    [anon_sym_W_SLASH] = ACTIONS(17),
    [anon_sym_Warning] = ACTIONS(19),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(17),
    [anon_sym_error_COLON] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_Error] = ACTIONS(23),
    [anon_sym_ERROR] = ACTIONS(23),
    [anon_sym_ALERT] = ACTIONS(23),
    [anon_sym_CRITICAL] = ACTIONS(23),
    [anon_sym_EMERGENCY] = ACTIONS(23),
    [anon_sym_FAILURE] = ACTIONS(23),
    [anon_sym_FAIL] = ACTIONS(23),
    [anon_sym_Fatal] = ACTIONS(23),
    [anon_sym_FATAL] = ACTIONS(23),
    [anon_sym_E_SLASH] = ACTIONS(21),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(21),
    [sym_year_month_day] = ACTIONS(25),
    [sym_time] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_Null] = ACTIONS(27),
    [anon_sym_NULL] = ACTIONS(27),
    [sym__raw_string_literal] = ACTIONS(29),
    [sym__interpreted_double_string] = ACTIONS(31),
    [sym__interpreted_single_string] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(33),
    [aux_sym_number_token3] = ACTIONS(33),
    [aux_sym_number_token4] = ACTIONS(33),
    [aux_sym_number_token5] = ACTIONS(33),
    [aux_sym_number_token6] = ACTIONS(33),
    [aux_sym_number_token7] = ACTIONS(33),
    [aux_sym_number_token8] = ACTIONS(33),
    [aux_sym_number_token9] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_word] = ACTIONS(47),
    [sym_url] = ACTIONS(39),
    [sym_file_path] = ACTIONS(39),
    [sym_ipv4] = ACTIONS(39),
    [sym_ipv6] = ACTIONS(39),
    [sym_mac] = ACTIONS(41),
    [sym_uuid] = ACTIONS(39),
    [sym_md5] = ACTIONS(41),
    [sym_sha1] = ACTIONS(41),
    [sym_sha224] = ACTIONS(41),
    [sym_sha256] = ACTIONS(41),
    [sym_sha384] = ACTIONS(41),
    [sym_sha512] = ACTIONS(39),
  },
  [3] = {
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(14),
    [sym_debug] = STATE(14),
    [sym_info] = STATE(14),
    [sym_warn] = STATE(14),
    [sym_error] = STATE(14),
    [sym_date] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [sym_objects] = STATE(3),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_trace_COLON] = ACTIONS(51),
    [anon_sym_Trace] = ACTIONS(54),
    [anon_sym_TRACE] = ACTIONS(54),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(51),
    [anon_sym_Verbose] = ACTIONS(54),
    [anon_sym_VERBOSE] = ACTIONS(54),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(51),
    [anon_sym_V_SLASH] = ACTIONS(51),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(51),
    [anon_sym_debug_COLON] = ACTIONS(57),
    [anon_sym_Debug] = ACTIONS(60),
    [anon_sym_DEBUG] = ACTIONS(60),
    [anon_sym_D_SLASH] = ACTIONS(57),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(57),
    [anon_sym_information_COLON] = ACTIONS(63),
    [anon_sym_info_COLON] = ACTIONS(63),
    [anon_sym_INFO] = ACTIONS(66),
    [anon_sym_INFORMATION] = ACTIONS(66),
    [anon_sym_NOTICE] = ACTIONS(66),
    [anon_sym_I_SLASH] = ACTIONS(63),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(63),
    [anon_sym_warning_COLON] = ACTIONS(69),
    [anon_sym_warning] = ACTIONS(69),
    [anon_sym_Warn] = ACTIONS(72),
    [anon_sym_WARN] = ACTIONS(72),
    [anon_sym_WARNING] = ACTIONS(72),
    [anon_sym_W_SLASH] = ACTIONS(69),
    [anon_sym_Warning] = ACTIONS(72),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(69),
    [anon_sym_error_COLON] = ACTIONS(75),
    [anon_sym_error] = ACTIONS(75),
    [anon_sym_Error] = ACTIONS(78),
    [anon_sym_ERROR] = ACTIONS(78),
    [anon_sym_ALERT] = ACTIONS(78),
    [anon_sym_CRITICAL] = ACTIONS(78),
    [anon_sym_EMERGENCY] = ACTIONS(78),
    [anon_sym_FAILURE] = ACTIONS(78),
    [anon_sym_FAIL] = ACTIONS(78),
    [anon_sym_Fatal] = ACTIONS(78),
    [anon_sym_FATAL] = ACTIONS(78),
    [anon_sym_E_SLASH] = ACTIONS(75),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(75),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(75),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(75),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(75),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(75),
    [sym_year_month_day] = ACTIONS(81),
    [sym_time] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_TRUE] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [anon_sym_FALSE] = ACTIONS(84),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_Null] = ACTIONS(84),
    [anon_sym_NULL] = ACTIONS(84),
    [sym__raw_string_literal] = ACTIONS(87),
    [sym__interpreted_double_string] = ACTIONS(90),
    [sym__interpreted_single_string] = ACTIONS(87),
    [aux_sym_number_token1] = ACTIONS(93),
    [aux_sym_number_token2] = ACTIONS(93),
    [aux_sym_number_token3] = ACTIONS(93),
    [aux_sym_number_token4] = ACTIONS(93),
    [aux_sym_number_token5] = ACTIONS(93),
    [aux_sym_number_token6] = ACTIONS(93),
    [aux_sym_number_token7] = ACTIONS(93),
    [aux_sym_number_token8] = ACTIONS(93),
    [aux_sym_number_token9] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_word] = ACTIONS(99),
    [sym_url] = ACTIONS(102),
    [sym_file_path] = ACTIONS(102),
    [sym_ipv4] = ACTIONS(102),
    [sym_ipv6] = ACTIONS(102),
    [sym_mac] = ACTIONS(105),
    [sym_uuid] = ACTIONS(102),
    [sym_md5] = ACTIONS(105),
    [sym_sha1] = ACTIONS(105),
    [sym_sha224] = ACTIONS(105),
    [sym_sha256] = ACTIONS(105),
    [sym_sha384] = ACTIONS(105),
    [sym_sha512] = ACTIONS(102),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_trace_COLON] = ACTIONS(108),
    [anon_sym_Trace] = ACTIONS(110),
    [anon_sym_TRACE] = ACTIONS(110),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(108),
    [anon_sym_Verbose] = ACTIONS(110),
    [anon_sym_VERBOSE] = ACTIONS(110),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(108),
    [anon_sym_V_SLASH] = ACTIONS(108),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(108),
    [anon_sym_debug_COLON] = ACTIONS(108),
    [anon_sym_Debug] = ACTIONS(110),
    [anon_sym_DEBUG] = ACTIONS(110),
    [anon_sym_D_SLASH] = ACTIONS(108),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(108),
    [anon_sym_information_COLON] = ACTIONS(108),
    [anon_sym_info_COLON] = ACTIONS(108),
    [anon_sym_INFO] = ACTIONS(110),
    [anon_sym_INFORMATION] = ACTIONS(110),
    [anon_sym_NOTICE] = ACTIONS(110),
    [anon_sym_I_SLASH] = ACTIONS(108),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(108),
    [anon_sym_warning_COLON] = ACTIONS(108),
    [anon_sym_warning] = ACTIONS(108),
    [anon_sym_Warn] = ACTIONS(110),
    [anon_sym_WARN] = ACTIONS(110),
    [anon_sym_WARNING] = ACTIONS(110),
    [anon_sym_W_SLASH] = ACTIONS(108),
    [anon_sym_Warning] = ACTIONS(110),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(108),
    [anon_sym_error_COLON] = ACTIONS(108),
    [anon_sym_error] = ACTIONS(108),
    [anon_sym_Error] = ACTIONS(110),
    [anon_sym_ERROR] = ACTIONS(110),
    [anon_sym_ALERT] = ACTIONS(110),
    [anon_sym_CRITICAL] = ACTIONS(110),
    [anon_sym_EMERGENCY] = ACTIONS(110),
    [anon_sym_FAILURE] = ACTIONS(110),
    [anon_sym_FAIL] = ACTIONS(110),
    [anon_sym_Fatal] = ACTIONS(110),
    [anon_sym_FATAL] = ACTIONS(110),
    [anon_sym_E_SLASH] = ACTIONS(108),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(108),
    [sym_year_month_day] = ACTIONS(110),
    [sym_time] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(110),
    [anon_sym_True] = ACTIONS(110),
    [anon_sym_TRUE] = ACTIONS(110),
    [anon_sym_false] = ACTIONS(110),
    [anon_sym_False] = ACTIONS(110),
    [anon_sym_FALSE] = ACTIONS(110),
    [anon_sym_null] = ACTIONS(110),
    [anon_sym_Null] = ACTIONS(110),
    [anon_sym_NULL] = ACTIONS(110),
    [sym__raw_string_literal] = ACTIONS(110),
    [sym__interpreted_double_string] = ACTIONS(108),
    [sym__interpreted_single_string] = ACTIONS(110),
    [aux_sym_number_token1] = ACTIONS(110),
    [aux_sym_number_token2] = ACTIONS(110),
    [aux_sym_number_token3] = ACTIONS(110),
    [aux_sym_number_token4] = ACTIONS(110),
    [aux_sym_number_token5] = ACTIONS(110),
    [aux_sym_number_token6] = ACTIONS(110),
    [aux_sym_number_token7] = ACTIONS(110),
    [aux_sym_number_token8] = ACTIONS(110),
    [aux_sym_number_token9] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(108),
    [sym_word] = ACTIONS(110),
    [sym_url] = ACTIONS(108),
    [sym_file_path] = ACTIONS(108),
    [sym_ipv4] = ACTIONS(108),
    [sym_ipv6] = ACTIONS(108),
    [sym_mac] = ACTIONS(110),
    [sym_uuid] = ACTIONS(108),
    [sym_md5] = ACTIONS(110),
    [sym_sha1] = ACTIONS(110),
    [sym_sha224] = ACTIONS(110),
    [sym_sha256] = ACTIONS(110),
    [sym_sha384] = ACTIONS(110),
    [sym_sha512] = ACTIONS(108),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_trace_COLON] = ACTIONS(112),
    [anon_sym_Trace] = ACTIONS(114),
    [anon_sym_TRACE] = ACTIONS(114),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(112),
    [anon_sym_Verbose] = ACTIONS(114),
    [anon_sym_VERBOSE] = ACTIONS(114),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(112),
    [anon_sym_V_SLASH] = ACTIONS(112),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(112),
    [anon_sym_debug_COLON] = ACTIONS(112),
    [anon_sym_Debug] = ACTIONS(114),
    [anon_sym_DEBUG] = ACTIONS(114),
    [anon_sym_D_SLASH] = ACTIONS(112),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(112),
    [anon_sym_information_COLON] = ACTIONS(112),
    [anon_sym_info_COLON] = ACTIONS(112),
    [anon_sym_INFO] = ACTIONS(114),
    [anon_sym_INFORMATION] = ACTIONS(114),
    [anon_sym_NOTICE] = ACTIONS(114),
    [anon_sym_I_SLASH] = ACTIONS(112),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(112),
    [anon_sym_warning_COLON] = ACTIONS(112),
    [anon_sym_warning] = ACTIONS(112),
    [anon_sym_Warn] = ACTIONS(114),
    [anon_sym_WARN] = ACTIONS(114),
    [anon_sym_WARNING] = ACTIONS(114),
    [anon_sym_W_SLASH] = ACTIONS(112),
    [anon_sym_Warning] = ACTIONS(114),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(112),
    [anon_sym_error_COLON] = ACTIONS(112),
    [anon_sym_error] = ACTIONS(112),
    [anon_sym_Error] = ACTIONS(114),
    [anon_sym_ERROR] = ACTIONS(114),
    [anon_sym_ALERT] = ACTIONS(114),
    [anon_sym_CRITICAL] = ACTIONS(114),
    [anon_sym_EMERGENCY] = ACTIONS(114),
    [anon_sym_FAILURE] = ACTIONS(114),
    [anon_sym_FAIL] = ACTIONS(114),
    [anon_sym_Fatal] = ACTIONS(114),
    [anon_sym_FATAL] = ACTIONS(114),
    [anon_sym_E_SLASH] = ACTIONS(112),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(112),
    [sym_year_month_day] = ACTIONS(114),
    [sym_time] = ACTIONS(114),
    [anon_sym_true] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(114),
    [anon_sym_TRUE] = ACTIONS(114),
    [anon_sym_false] = ACTIONS(114),
    [anon_sym_False] = ACTIONS(114),
    [anon_sym_FALSE] = ACTIONS(114),
    [anon_sym_null] = ACTIONS(114),
    [anon_sym_Null] = ACTIONS(114),
    [anon_sym_NULL] = ACTIONS(114),
    [sym__raw_string_literal] = ACTIONS(114),
    [sym__interpreted_double_string] = ACTIONS(112),
    [sym__interpreted_single_string] = ACTIONS(114),
    [aux_sym_number_token1] = ACTIONS(114),
    [aux_sym_number_token2] = ACTIONS(114),
    [aux_sym_number_token3] = ACTIONS(114),
    [aux_sym_number_token4] = ACTIONS(114),
    [aux_sym_number_token5] = ACTIONS(114),
    [aux_sym_number_token6] = ACTIONS(114),
    [aux_sym_number_token7] = ACTIONS(114),
    [aux_sym_number_token8] = ACTIONS(114),
    [aux_sym_number_token9] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_word] = ACTIONS(114),
    [sym_url] = ACTIONS(112),
    [sym_file_path] = ACTIONS(112),
    [sym_ipv4] = ACTIONS(112),
    [sym_ipv6] = ACTIONS(112),
    [sym_mac] = ACTIONS(114),
    [sym_uuid] = ACTIONS(112),
    [sym_md5] = ACTIONS(114),
    [sym_sha1] = ACTIONS(114),
    [sym_sha224] = ACTIONS(114),
    [sym_sha256] = ACTIONS(114),
    [sym_sha384] = ACTIONS(114),
    [sym_sha512] = ACTIONS(112),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_trace_COLON] = ACTIONS(116),
    [anon_sym_Trace] = ACTIONS(118),
    [anon_sym_TRACE] = ACTIONS(118),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(116),
    [anon_sym_Verbose] = ACTIONS(118),
    [anon_sym_VERBOSE] = ACTIONS(118),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(116),
    [anon_sym_V_SLASH] = ACTIONS(116),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(116),
    [anon_sym_debug_COLON] = ACTIONS(116),
    [anon_sym_Debug] = ACTIONS(118),
    [anon_sym_DEBUG] = ACTIONS(118),
    [anon_sym_D_SLASH] = ACTIONS(116),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(116),
    [anon_sym_information_COLON] = ACTIONS(116),
    [anon_sym_info_COLON] = ACTIONS(116),
    [anon_sym_INFO] = ACTIONS(118),
    [anon_sym_INFORMATION] = ACTIONS(118),
    [anon_sym_NOTICE] = ACTIONS(118),
    [anon_sym_I_SLASH] = ACTIONS(116),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(116),
    [anon_sym_warning_COLON] = ACTIONS(116),
    [anon_sym_warning] = ACTIONS(116),
    [anon_sym_Warn] = ACTIONS(118),
    [anon_sym_WARN] = ACTIONS(118),
    [anon_sym_WARNING] = ACTIONS(118),
    [anon_sym_W_SLASH] = ACTIONS(116),
    [anon_sym_Warning] = ACTIONS(118),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(116),
    [anon_sym_error_COLON] = ACTIONS(116),
    [anon_sym_error] = ACTIONS(116),
    [anon_sym_Error] = ACTIONS(118),
    [anon_sym_ERROR] = ACTIONS(118),
    [anon_sym_ALERT] = ACTIONS(118),
    [anon_sym_CRITICAL] = ACTIONS(118),
    [anon_sym_EMERGENCY] = ACTIONS(118),
    [anon_sym_FAILURE] = ACTIONS(118),
    [anon_sym_FAIL] = ACTIONS(118),
    [anon_sym_Fatal] = ACTIONS(118),
    [anon_sym_FATAL] = ACTIONS(118),
    [anon_sym_E_SLASH] = ACTIONS(116),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(116),
    [sym_year_month_day] = ACTIONS(118),
    [sym_time] = ACTIONS(118),
    [anon_sym_true] = ACTIONS(118),
    [anon_sym_True] = ACTIONS(118),
    [anon_sym_TRUE] = ACTIONS(118),
    [anon_sym_false] = ACTIONS(118),
    [anon_sym_False] = ACTIONS(118),
    [anon_sym_FALSE] = ACTIONS(118),
    [anon_sym_null] = ACTIONS(118),
    [anon_sym_Null] = ACTIONS(118),
    [anon_sym_NULL] = ACTIONS(118),
    [sym__raw_string_literal] = ACTIONS(118),
    [sym__interpreted_double_string] = ACTIONS(116),
    [sym__interpreted_single_string] = ACTIONS(118),
    [aux_sym_number_token1] = ACTIONS(118),
    [aux_sym_number_token2] = ACTIONS(118),
    [aux_sym_number_token3] = ACTIONS(118),
    [aux_sym_number_token4] = ACTIONS(118),
    [aux_sym_number_token5] = ACTIONS(118),
    [aux_sym_number_token6] = ACTIONS(118),
    [aux_sym_number_token7] = ACTIONS(118),
    [aux_sym_number_token8] = ACTIONS(118),
    [aux_sym_number_token9] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_word] = ACTIONS(118),
    [sym_url] = ACTIONS(116),
    [sym_file_path] = ACTIONS(116),
    [sym_ipv4] = ACTIONS(116),
    [sym_ipv6] = ACTIONS(116),
    [sym_mac] = ACTIONS(118),
    [sym_uuid] = ACTIONS(116),
    [sym_md5] = ACTIONS(118),
    [sym_sha1] = ACTIONS(118),
    [sym_sha224] = ACTIONS(118),
    [sym_sha256] = ACTIONS(118),
    [sym_sha384] = ACTIONS(118),
    [sym_sha512] = ACTIONS(116),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_trace_COLON] = ACTIONS(120),
    [anon_sym_Trace] = ACTIONS(122),
    [anon_sym_TRACE] = ACTIONS(122),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(120),
    [anon_sym_Verbose] = ACTIONS(122),
    [anon_sym_VERBOSE] = ACTIONS(122),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(120),
    [anon_sym_V_SLASH] = ACTIONS(120),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(120),
    [anon_sym_debug_COLON] = ACTIONS(120),
    [anon_sym_Debug] = ACTIONS(122),
    [anon_sym_DEBUG] = ACTIONS(122),
    [anon_sym_D_SLASH] = ACTIONS(120),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(120),
    [anon_sym_information_COLON] = ACTIONS(120),
    [anon_sym_info_COLON] = ACTIONS(120),
    [anon_sym_INFO] = ACTIONS(122),
    [anon_sym_INFORMATION] = ACTIONS(122),
    [anon_sym_NOTICE] = ACTIONS(122),
    [anon_sym_I_SLASH] = ACTIONS(120),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(120),
    [anon_sym_warning_COLON] = ACTIONS(120),
    [anon_sym_warning] = ACTIONS(120),
    [anon_sym_Warn] = ACTIONS(122),
    [anon_sym_WARN] = ACTIONS(122),
    [anon_sym_WARNING] = ACTIONS(122),
    [anon_sym_W_SLASH] = ACTIONS(120),
    [anon_sym_Warning] = ACTIONS(122),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(120),
    [anon_sym_error_COLON] = ACTIONS(120),
    [anon_sym_error] = ACTIONS(120),
    [anon_sym_Error] = ACTIONS(122),
    [anon_sym_ERROR] = ACTIONS(122),
    [anon_sym_ALERT] = ACTIONS(122),
    [anon_sym_CRITICAL] = ACTIONS(122),
    [anon_sym_EMERGENCY] = ACTIONS(122),
    [anon_sym_FAILURE] = ACTIONS(122),
    [anon_sym_FAIL] = ACTIONS(122),
    [anon_sym_Fatal] = ACTIONS(122),
    [anon_sym_FATAL] = ACTIONS(122),
    [anon_sym_E_SLASH] = ACTIONS(120),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(120),
    [sym_year_month_day] = ACTIONS(122),
    [sym_time] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(122),
    [anon_sym_True] = ACTIONS(122),
    [anon_sym_TRUE] = ACTIONS(122),
    [anon_sym_false] = ACTIONS(122),
    [anon_sym_False] = ACTIONS(122),
    [anon_sym_FALSE] = ACTIONS(122),
    [anon_sym_null] = ACTIONS(122),
    [anon_sym_Null] = ACTIONS(122),
    [anon_sym_NULL] = ACTIONS(122),
    [sym__raw_string_literal] = ACTIONS(122),
    [sym__interpreted_double_string] = ACTIONS(120),
    [sym__interpreted_single_string] = ACTIONS(122),
    [aux_sym_number_token1] = ACTIONS(122),
    [aux_sym_number_token2] = ACTIONS(122),
    [aux_sym_number_token3] = ACTIONS(122),
    [aux_sym_number_token4] = ACTIONS(122),
    [aux_sym_number_token5] = ACTIONS(122),
    [aux_sym_number_token6] = ACTIONS(122),
    [aux_sym_number_token7] = ACTIONS(122),
    [aux_sym_number_token8] = ACTIONS(122),
    [aux_sym_number_token9] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_word] = ACTIONS(122),
    [sym_url] = ACTIONS(120),
    [sym_file_path] = ACTIONS(120),
    [sym_ipv4] = ACTIONS(120),
    [sym_ipv6] = ACTIONS(120),
    [sym_mac] = ACTIONS(122),
    [sym_uuid] = ACTIONS(120),
    [sym_md5] = ACTIONS(122),
    [sym_sha1] = ACTIONS(122),
    [sym_sha224] = ACTIONS(122),
    [sym_sha256] = ACTIONS(122),
    [sym_sha384] = ACTIONS(122),
    [sym_sha512] = ACTIONS(120),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_trace_COLON] = ACTIONS(124),
    [anon_sym_Trace] = ACTIONS(126),
    [anon_sym_TRACE] = ACTIONS(126),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(124),
    [anon_sym_Verbose] = ACTIONS(126),
    [anon_sym_VERBOSE] = ACTIONS(126),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(124),
    [anon_sym_V_SLASH] = ACTIONS(124),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(124),
    [anon_sym_debug_COLON] = ACTIONS(124),
    [anon_sym_Debug] = ACTIONS(126),
    [anon_sym_DEBUG] = ACTIONS(126),
    [anon_sym_D_SLASH] = ACTIONS(124),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(124),
    [anon_sym_information_COLON] = ACTIONS(124),
    [anon_sym_info_COLON] = ACTIONS(124),
    [anon_sym_INFO] = ACTIONS(126),
    [anon_sym_INFORMATION] = ACTIONS(126),
    [anon_sym_NOTICE] = ACTIONS(126),
    [anon_sym_I_SLASH] = ACTIONS(124),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(124),
    [anon_sym_warning_COLON] = ACTIONS(124),
    [anon_sym_warning] = ACTIONS(124),
    [anon_sym_Warn] = ACTIONS(126),
    [anon_sym_WARN] = ACTIONS(126),
    [anon_sym_WARNING] = ACTIONS(126),
    [anon_sym_W_SLASH] = ACTIONS(124),
    [anon_sym_Warning] = ACTIONS(126),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(124),
    [anon_sym_error_COLON] = ACTIONS(124),
    [anon_sym_error] = ACTIONS(124),
    [anon_sym_Error] = ACTIONS(126),
    [anon_sym_ERROR] = ACTIONS(126),
    [anon_sym_ALERT] = ACTIONS(126),
    [anon_sym_CRITICAL] = ACTIONS(126),
    [anon_sym_EMERGENCY] = ACTIONS(126),
    [anon_sym_FAILURE] = ACTIONS(126),
    [anon_sym_FAIL] = ACTIONS(126),
    [anon_sym_Fatal] = ACTIONS(126),
    [anon_sym_FATAL] = ACTIONS(126),
    [anon_sym_E_SLASH] = ACTIONS(124),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(124),
    [sym_year_month_day] = ACTIONS(126),
    [sym_time] = ACTIONS(126),
    [anon_sym_true] = ACTIONS(126),
    [anon_sym_True] = ACTIONS(126),
    [anon_sym_TRUE] = ACTIONS(126),
    [anon_sym_false] = ACTIONS(126),
    [anon_sym_False] = ACTIONS(126),
    [anon_sym_FALSE] = ACTIONS(126),
    [anon_sym_null] = ACTIONS(126),
    [anon_sym_Null] = ACTIONS(126),
    [anon_sym_NULL] = ACTIONS(126),
    [sym__raw_string_literal] = ACTIONS(126),
    [sym__interpreted_double_string] = ACTIONS(124),
    [sym__interpreted_single_string] = ACTIONS(126),
    [aux_sym_number_token1] = ACTIONS(126),
    [aux_sym_number_token2] = ACTIONS(126),
    [aux_sym_number_token3] = ACTIONS(126),
    [aux_sym_number_token4] = ACTIONS(126),
    [aux_sym_number_token5] = ACTIONS(126),
    [aux_sym_number_token6] = ACTIONS(126),
    [aux_sym_number_token7] = ACTIONS(126),
    [aux_sym_number_token8] = ACTIONS(126),
    [aux_sym_number_token9] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(124),
    [sym_word] = ACTIONS(126),
    [sym_url] = ACTIONS(124),
    [sym_file_path] = ACTIONS(124),
    [sym_ipv4] = ACTIONS(124),
    [sym_ipv6] = ACTIONS(124),
    [sym_mac] = ACTIONS(126),
    [sym_uuid] = ACTIONS(124),
    [sym_md5] = ACTIONS(126),
    [sym_sha1] = ACTIONS(126),
    [sym_sha224] = ACTIONS(126),
    [sym_sha256] = ACTIONS(126),
    [sym_sha384] = ACTIONS(126),
    [sym_sha512] = ACTIONS(124),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_trace_COLON] = ACTIONS(128),
    [anon_sym_Trace] = ACTIONS(130),
    [anon_sym_TRACE] = ACTIONS(130),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(128),
    [anon_sym_Verbose] = ACTIONS(130),
    [anon_sym_VERBOSE] = ACTIONS(130),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(128),
    [anon_sym_V_SLASH] = ACTIONS(128),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(128),
    [anon_sym_debug_COLON] = ACTIONS(128),
    [anon_sym_Debug] = ACTIONS(130),
    [anon_sym_DEBUG] = ACTIONS(130),
    [anon_sym_D_SLASH] = ACTIONS(128),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(128),
    [anon_sym_information_COLON] = ACTIONS(128),
    [anon_sym_info_COLON] = ACTIONS(128),
    [anon_sym_INFO] = ACTIONS(130),
    [anon_sym_INFORMATION] = ACTIONS(130),
    [anon_sym_NOTICE] = ACTIONS(130),
    [anon_sym_I_SLASH] = ACTIONS(128),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(128),
    [anon_sym_warning_COLON] = ACTIONS(128),
    [anon_sym_warning] = ACTIONS(128),
    [anon_sym_Warn] = ACTIONS(130),
    [anon_sym_WARN] = ACTIONS(130),
    [anon_sym_WARNING] = ACTIONS(130),
    [anon_sym_W_SLASH] = ACTIONS(128),
    [anon_sym_Warning] = ACTIONS(130),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(128),
    [anon_sym_error_COLON] = ACTIONS(128),
    [anon_sym_error] = ACTIONS(128),
    [anon_sym_Error] = ACTIONS(130),
    [anon_sym_ERROR] = ACTIONS(130),
    [anon_sym_ALERT] = ACTIONS(130),
    [anon_sym_CRITICAL] = ACTIONS(130),
    [anon_sym_EMERGENCY] = ACTIONS(130),
    [anon_sym_FAILURE] = ACTIONS(130),
    [anon_sym_FAIL] = ACTIONS(130),
    [anon_sym_Fatal] = ACTIONS(130),
    [anon_sym_FATAL] = ACTIONS(130),
    [anon_sym_E_SLASH] = ACTIONS(128),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(128),
    [sym_year_month_day] = ACTIONS(130),
    [sym_time] = ACTIONS(130),
    [anon_sym_true] = ACTIONS(130),
    [anon_sym_True] = ACTIONS(130),
    [anon_sym_TRUE] = ACTIONS(130),
    [anon_sym_false] = ACTIONS(130),
    [anon_sym_False] = ACTIONS(130),
    [anon_sym_FALSE] = ACTIONS(130),
    [anon_sym_null] = ACTIONS(130),
    [anon_sym_Null] = ACTIONS(130),
    [anon_sym_NULL] = ACTIONS(130),
    [sym__raw_string_literal] = ACTIONS(130),
    [sym__interpreted_double_string] = ACTIONS(128),
    [sym__interpreted_single_string] = ACTIONS(130),
    [aux_sym_number_token1] = ACTIONS(130),
    [aux_sym_number_token2] = ACTIONS(130),
    [aux_sym_number_token3] = ACTIONS(130),
    [aux_sym_number_token4] = ACTIONS(130),
    [aux_sym_number_token5] = ACTIONS(130),
    [aux_sym_number_token6] = ACTIONS(130),
    [aux_sym_number_token7] = ACTIONS(130),
    [aux_sym_number_token8] = ACTIONS(130),
    [aux_sym_number_token9] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_COLON] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(128),
    [sym_word] = ACTIONS(130),
    [sym_url] = ACTIONS(128),
    [sym_file_path] = ACTIONS(128),
    [sym_ipv4] = ACTIONS(128),
    [sym_ipv6] = ACTIONS(128),
    [sym_mac] = ACTIONS(130),
    [sym_uuid] = ACTIONS(128),
    [sym_md5] = ACTIONS(130),
    [sym_sha1] = ACTIONS(130),
    [sym_sha224] = ACTIONS(130),
    [sym_sha256] = ACTIONS(130),
    [sym_sha384] = ACTIONS(130),
    [sym_sha512] = ACTIONS(128),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_trace_COLON] = ACTIONS(132),
    [anon_sym_Trace] = ACTIONS(134),
    [anon_sym_TRACE] = ACTIONS(134),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(132),
    [anon_sym_Verbose] = ACTIONS(134),
    [anon_sym_VERBOSE] = ACTIONS(134),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(132),
    [anon_sym_V_SLASH] = ACTIONS(132),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(132),
    [anon_sym_debug_COLON] = ACTIONS(132),
    [anon_sym_Debug] = ACTIONS(134),
    [anon_sym_DEBUG] = ACTIONS(134),
    [anon_sym_D_SLASH] = ACTIONS(132),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(132),
    [anon_sym_information_COLON] = ACTIONS(132),
    [anon_sym_info_COLON] = ACTIONS(132),
    [anon_sym_INFO] = ACTIONS(134),
    [anon_sym_INFORMATION] = ACTIONS(134),
    [anon_sym_NOTICE] = ACTIONS(134),
    [anon_sym_I_SLASH] = ACTIONS(132),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(132),
    [anon_sym_warning_COLON] = ACTIONS(132),
    [anon_sym_warning] = ACTIONS(132),
    [anon_sym_Warn] = ACTIONS(134),
    [anon_sym_WARN] = ACTIONS(134),
    [anon_sym_WARNING] = ACTIONS(134),
    [anon_sym_W_SLASH] = ACTIONS(132),
    [anon_sym_Warning] = ACTIONS(134),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(132),
    [anon_sym_error_COLON] = ACTIONS(132),
    [anon_sym_error] = ACTIONS(132),
    [anon_sym_Error] = ACTIONS(134),
    [anon_sym_ERROR] = ACTIONS(134),
    [anon_sym_ALERT] = ACTIONS(134),
    [anon_sym_CRITICAL] = ACTIONS(134),
    [anon_sym_EMERGENCY] = ACTIONS(134),
    [anon_sym_FAILURE] = ACTIONS(134),
    [anon_sym_FAIL] = ACTIONS(134),
    [anon_sym_Fatal] = ACTIONS(134),
    [anon_sym_FATAL] = ACTIONS(134),
    [anon_sym_E_SLASH] = ACTIONS(132),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(132),
    [sym_year_month_day] = ACTIONS(134),
    [sym_time] = ACTIONS(134),
    [anon_sym_true] = ACTIONS(134),
    [anon_sym_True] = ACTIONS(134),
    [anon_sym_TRUE] = ACTIONS(134),
    [anon_sym_false] = ACTIONS(134),
    [anon_sym_False] = ACTIONS(134),
    [anon_sym_FALSE] = ACTIONS(134),
    [anon_sym_null] = ACTIONS(134),
    [anon_sym_Null] = ACTIONS(134),
    [anon_sym_NULL] = ACTIONS(134),
    [sym__raw_string_literal] = ACTIONS(134),
    [sym__interpreted_double_string] = ACTIONS(132),
    [sym__interpreted_single_string] = ACTIONS(134),
    [aux_sym_number_token1] = ACTIONS(134),
    [aux_sym_number_token2] = ACTIONS(134),
    [aux_sym_number_token3] = ACTIONS(134),
    [aux_sym_number_token4] = ACTIONS(134),
    [aux_sym_number_token5] = ACTIONS(134),
    [aux_sym_number_token6] = ACTIONS(134),
    [aux_sym_number_token7] = ACTIONS(134),
    [aux_sym_number_token8] = ACTIONS(134),
    [aux_sym_number_token9] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(134),
    [anon_sym_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(132),
    [sym_word] = ACTIONS(134),
    [sym_url] = ACTIONS(132),
    [sym_file_path] = ACTIONS(132),
    [sym_ipv4] = ACTIONS(132),
    [sym_ipv6] = ACTIONS(132),
    [sym_mac] = ACTIONS(134),
    [sym_uuid] = ACTIONS(132),
    [sym_md5] = ACTIONS(134),
    [sym_sha1] = ACTIONS(134),
    [sym_sha224] = ACTIONS(134),
    [sym_sha256] = ACTIONS(134),
    [sym_sha384] = ACTIONS(134),
    [sym_sha512] = ACTIONS(132),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_trace_COLON] = ACTIONS(136),
    [anon_sym_Trace] = ACTIONS(138),
    [anon_sym_TRACE] = ACTIONS(138),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(136),
    [anon_sym_Verbose] = ACTIONS(138),
    [anon_sym_VERBOSE] = ACTIONS(138),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(136),
    [anon_sym_V_SLASH] = ACTIONS(136),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(136),
    [anon_sym_debug_COLON] = ACTIONS(136),
    [anon_sym_Debug] = ACTIONS(138),
    [anon_sym_DEBUG] = ACTIONS(138),
    [anon_sym_D_SLASH] = ACTIONS(136),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(136),
    [anon_sym_information_COLON] = ACTIONS(136),
    [anon_sym_info_COLON] = ACTIONS(136),
    [anon_sym_INFO] = ACTIONS(138),
    [anon_sym_INFORMATION] = ACTIONS(138),
    [anon_sym_NOTICE] = ACTIONS(138),
    [anon_sym_I_SLASH] = ACTIONS(136),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(136),
    [anon_sym_warning_COLON] = ACTIONS(136),
    [anon_sym_warning] = ACTIONS(136),
    [anon_sym_Warn] = ACTIONS(138),
    [anon_sym_WARN] = ACTIONS(138),
    [anon_sym_WARNING] = ACTIONS(138),
    [anon_sym_W_SLASH] = ACTIONS(136),
    [anon_sym_Warning] = ACTIONS(138),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(136),
    [anon_sym_error_COLON] = ACTIONS(136),
    [anon_sym_error] = ACTIONS(136),
    [anon_sym_Error] = ACTIONS(138),
    [anon_sym_ERROR] = ACTIONS(138),
    [anon_sym_ALERT] = ACTIONS(138),
    [anon_sym_CRITICAL] = ACTIONS(138),
    [anon_sym_EMERGENCY] = ACTIONS(138),
    [anon_sym_FAILURE] = ACTIONS(138),
    [anon_sym_FAIL] = ACTIONS(138),
    [anon_sym_Fatal] = ACTIONS(138),
    [anon_sym_FATAL] = ACTIONS(138),
    [anon_sym_E_SLASH] = ACTIONS(136),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(136),
    [sym_year_month_day] = ACTIONS(138),
    [sym_time] = ACTIONS(138),
    [anon_sym_true] = ACTIONS(138),
    [anon_sym_True] = ACTIONS(138),
    [anon_sym_TRUE] = ACTIONS(138),
    [anon_sym_false] = ACTIONS(138),
    [anon_sym_False] = ACTIONS(138),
    [anon_sym_FALSE] = ACTIONS(138),
    [anon_sym_null] = ACTIONS(138),
    [anon_sym_Null] = ACTIONS(138),
    [anon_sym_NULL] = ACTIONS(138),
    [sym__raw_string_literal] = ACTIONS(138),
    [sym__interpreted_double_string] = ACTIONS(136),
    [sym__interpreted_single_string] = ACTIONS(138),
    [aux_sym_number_token1] = ACTIONS(138),
    [aux_sym_number_token2] = ACTIONS(138),
    [aux_sym_number_token3] = ACTIONS(138),
    [aux_sym_number_token4] = ACTIONS(138),
    [aux_sym_number_token5] = ACTIONS(138),
    [aux_sym_number_token6] = ACTIONS(138),
    [aux_sym_number_token7] = ACTIONS(138),
    [aux_sym_number_token8] = ACTIONS(138),
    [aux_sym_number_token9] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(138),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_word] = ACTIONS(138),
    [sym_url] = ACTIONS(136),
    [sym_file_path] = ACTIONS(136),
    [sym_ipv4] = ACTIONS(136),
    [sym_ipv6] = ACTIONS(136),
    [sym_mac] = ACTIONS(138),
    [sym_uuid] = ACTIONS(136),
    [sym_md5] = ACTIONS(138),
    [sym_sha1] = ACTIONS(138),
    [sym_sha224] = ACTIONS(138),
    [sym_sha256] = ACTIONS(138),
    [sym_sha384] = ACTIONS(138),
    [sym_sha512] = ACTIONS(136),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_trace_COLON] = ACTIONS(140),
    [anon_sym_Trace] = ACTIONS(142),
    [anon_sym_TRACE] = ACTIONS(142),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(140),
    [anon_sym_Verbose] = ACTIONS(142),
    [anon_sym_VERBOSE] = ACTIONS(142),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(140),
    [anon_sym_V_SLASH] = ACTIONS(140),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(140),
    [anon_sym_debug_COLON] = ACTIONS(140),
    [anon_sym_Debug] = ACTIONS(142),
    [anon_sym_DEBUG] = ACTIONS(142),
    [anon_sym_D_SLASH] = ACTIONS(140),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(140),
    [anon_sym_information_COLON] = ACTIONS(140),
    [anon_sym_info_COLON] = ACTIONS(140),
    [anon_sym_INFO] = ACTIONS(142),
    [anon_sym_INFORMATION] = ACTIONS(142),
    [anon_sym_NOTICE] = ACTIONS(142),
    [anon_sym_I_SLASH] = ACTIONS(140),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(140),
    [anon_sym_warning_COLON] = ACTIONS(140),
    [anon_sym_warning] = ACTIONS(140),
    [anon_sym_Warn] = ACTIONS(142),
    [anon_sym_WARN] = ACTIONS(142),
    [anon_sym_WARNING] = ACTIONS(142),
    [anon_sym_W_SLASH] = ACTIONS(140),
    [anon_sym_Warning] = ACTIONS(142),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(140),
    [anon_sym_error_COLON] = ACTIONS(140),
    [anon_sym_error] = ACTIONS(140),
    [anon_sym_Error] = ACTIONS(142),
    [anon_sym_ERROR] = ACTIONS(142),
    [anon_sym_ALERT] = ACTIONS(142),
    [anon_sym_CRITICAL] = ACTIONS(142),
    [anon_sym_EMERGENCY] = ACTIONS(142),
    [anon_sym_FAILURE] = ACTIONS(142),
    [anon_sym_FAIL] = ACTIONS(142),
    [anon_sym_Fatal] = ACTIONS(142),
    [anon_sym_FATAL] = ACTIONS(142),
    [anon_sym_E_SLASH] = ACTIONS(140),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(140),
    [sym_year_month_day] = ACTIONS(142),
    [sym_time] = ACTIONS(142),
    [anon_sym_true] = ACTIONS(142),
    [anon_sym_True] = ACTIONS(142),
    [anon_sym_TRUE] = ACTIONS(142),
    [anon_sym_false] = ACTIONS(142),
    [anon_sym_False] = ACTIONS(142),
    [anon_sym_FALSE] = ACTIONS(142),
    [anon_sym_null] = ACTIONS(142),
    [anon_sym_Null] = ACTIONS(142),
    [anon_sym_NULL] = ACTIONS(142),
    [sym__raw_string_literal] = ACTIONS(142),
    [sym__interpreted_double_string] = ACTIONS(140),
    [sym__interpreted_single_string] = ACTIONS(142),
    [aux_sym_number_token1] = ACTIONS(142),
    [aux_sym_number_token2] = ACTIONS(142),
    [aux_sym_number_token3] = ACTIONS(142),
    [aux_sym_number_token4] = ACTIONS(142),
    [aux_sym_number_token5] = ACTIONS(142),
    [aux_sym_number_token6] = ACTIONS(142),
    [aux_sym_number_token7] = ACTIONS(142),
    [aux_sym_number_token8] = ACTIONS(142),
    [aux_sym_number_token9] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(140),
    [sym_word] = ACTIONS(142),
    [sym_url] = ACTIONS(140),
    [sym_file_path] = ACTIONS(140),
    [sym_ipv4] = ACTIONS(140),
    [sym_ipv6] = ACTIONS(140),
    [sym_mac] = ACTIONS(142),
    [sym_uuid] = ACTIONS(140),
    [sym_md5] = ACTIONS(142),
    [sym_sha1] = ACTIONS(142),
    [sym_sha224] = ACTIONS(142),
    [sym_sha256] = ACTIONS(142),
    [sym_sha384] = ACTIONS(142),
    [sym_sha512] = ACTIONS(140),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_trace_COLON] = ACTIONS(144),
    [anon_sym_Trace] = ACTIONS(146),
    [anon_sym_TRACE] = ACTIONS(146),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(144),
    [anon_sym_Verbose] = ACTIONS(146),
    [anon_sym_VERBOSE] = ACTIONS(146),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(144),
    [anon_sym_V_SLASH] = ACTIONS(144),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(144),
    [anon_sym_debug_COLON] = ACTIONS(144),
    [anon_sym_Debug] = ACTIONS(146),
    [anon_sym_DEBUG] = ACTIONS(146),
    [anon_sym_D_SLASH] = ACTIONS(144),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(144),
    [anon_sym_information_COLON] = ACTIONS(144),
    [anon_sym_info_COLON] = ACTIONS(144),
    [anon_sym_INFO] = ACTIONS(146),
    [anon_sym_INFORMATION] = ACTIONS(146),
    [anon_sym_NOTICE] = ACTIONS(146),
    [anon_sym_I_SLASH] = ACTIONS(144),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(144),
    [anon_sym_warning_COLON] = ACTIONS(144),
    [anon_sym_warning] = ACTIONS(144),
    [anon_sym_Warn] = ACTIONS(146),
    [anon_sym_WARN] = ACTIONS(146),
    [anon_sym_WARNING] = ACTIONS(146),
    [anon_sym_W_SLASH] = ACTIONS(144),
    [anon_sym_Warning] = ACTIONS(146),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(144),
    [anon_sym_error_COLON] = ACTIONS(144),
    [anon_sym_error] = ACTIONS(144),
    [anon_sym_Error] = ACTIONS(146),
    [anon_sym_ERROR] = ACTIONS(146),
    [anon_sym_ALERT] = ACTIONS(146),
    [anon_sym_CRITICAL] = ACTIONS(146),
    [anon_sym_EMERGENCY] = ACTIONS(146),
    [anon_sym_FAILURE] = ACTIONS(146),
    [anon_sym_FAIL] = ACTIONS(146),
    [anon_sym_Fatal] = ACTIONS(146),
    [anon_sym_FATAL] = ACTIONS(146),
    [anon_sym_E_SLASH] = ACTIONS(144),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(144),
    [sym_year_month_day] = ACTIONS(146),
    [sym_time] = ACTIONS(146),
    [anon_sym_true] = ACTIONS(146),
    [anon_sym_True] = ACTIONS(146),
    [anon_sym_TRUE] = ACTIONS(146),
    [anon_sym_false] = ACTIONS(146),
    [anon_sym_False] = ACTIONS(146),
    [anon_sym_FALSE] = ACTIONS(146),
    [anon_sym_null] = ACTIONS(146),
    [anon_sym_Null] = ACTIONS(146),
    [anon_sym_NULL] = ACTIONS(146),
    [sym__raw_string_literal] = ACTIONS(146),
    [sym__interpreted_double_string] = ACTIONS(144),
    [sym__interpreted_single_string] = ACTIONS(146),
    [aux_sym_number_token1] = ACTIONS(146),
    [aux_sym_number_token2] = ACTIONS(146),
    [aux_sym_number_token3] = ACTIONS(146),
    [aux_sym_number_token4] = ACTIONS(146),
    [aux_sym_number_token5] = ACTIONS(146),
    [aux_sym_number_token6] = ACTIONS(146),
    [aux_sym_number_token7] = ACTIONS(146),
    [aux_sym_number_token8] = ACTIONS(146),
    [aux_sym_number_token9] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_DASH] = ACTIONS(144),
    [sym_word] = ACTIONS(146),
    [sym_url] = ACTIONS(144),
    [sym_file_path] = ACTIONS(144),
    [sym_ipv4] = ACTIONS(144),
    [sym_ipv6] = ACTIONS(144),
    [sym_mac] = ACTIONS(146),
    [sym_uuid] = ACTIONS(144),
    [sym_md5] = ACTIONS(146),
    [sym_sha1] = ACTIONS(146),
    [sym_sha224] = ACTIONS(146),
    [sym_sha256] = ACTIONS(146),
    [sym_sha384] = ACTIONS(146),
    [sym_sha512] = ACTIONS(144),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_trace_COLON] = ACTIONS(148),
    [anon_sym_Trace] = ACTIONS(150),
    [anon_sym_TRACE] = ACTIONS(150),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(148),
    [anon_sym_Verbose] = ACTIONS(150),
    [anon_sym_VERBOSE] = ACTIONS(150),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(148),
    [anon_sym_V_SLASH] = ACTIONS(148),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(148),
    [anon_sym_debug_COLON] = ACTIONS(148),
    [anon_sym_Debug] = ACTIONS(150),
    [anon_sym_DEBUG] = ACTIONS(150),
    [anon_sym_D_SLASH] = ACTIONS(148),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(148),
    [anon_sym_information_COLON] = ACTIONS(148),
    [anon_sym_info_COLON] = ACTIONS(148),
    [anon_sym_INFO] = ACTIONS(150),
    [anon_sym_INFORMATION] = ACTIONS(150),
    [anon_sym_NOTICE] = ACTIONS(150),
    [anon_sym_I_SLASH] = ACTIONS(148),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(148),
    [anon_sym_warning_COLON] = ACTIONS(148),
    [anon_sym_warning] = ACTIONS(148),
    [anon_sym_Warn] = ACTIONS(150),
    [anon_sym_WARN] = ACTIONS(150),
    [anon_sym_WARNING] = ACTIONS(150),
    [anon_sym_W_SLASH] = ACTIONS(148),
    [anon_sym_Warning] = ACTIONS(150),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(148),
    [anon_sym_error_COLON] = ACTIONS(148),
    [anon_sym_error] = ACTIONS(148),
    [anon_sym_Error] = ACTIONS(150),
    [anon_sym_ERROR] = ACTIONS(150),
    [anon_sym_ALERT] = ACTIONS(150),
    [anon_sym_CRITICAL] = ACTIONS(150),
    [anon_sym_EMERGENCY] = ACTIONS(150),
    [anon_sym_FAILURE] = ACTIONS(150),
    [anon_sym_FAIL] = ACTIONS(150),
    [anon_sym_Fatal] = ACTIONS(150),
    [anon_sym_FATAL] = ACTIONS(150),
    [anon_sym_E_SLASH] = ACTIONS(148),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(148),
    [sym_year_month_day] = ACTIONS(150),
    [sym_time] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(150),
    [anon_sym_True] = ACTIONS(150),
    [anon_sym_TRUE] = ACTIONS(150),
    [anon_sym_false] = ACTIONS(150),
    [anon_sym_False] = ACTIONS(150),
    [anon_sym_FALSE] = ACTIONS(150),
    [anon_sym_null] = ACTIONS(150),
    [anon_sym_Null] = ACTIONS(150),
    [anon_sym_NULL] = ACTIONS(150),
    [sym__raw_string_literal] = ACTIONS(150),
    [sym__interpreted_double_string] = ACTIONS(148),
    [sym__interpreted_single_string] = ACTIONS(150),
    [aux_sym_number_token1] = ACTIONS(150),
    [aux_sym_number_token2] = ACTIONS(150),
    [aux_sym_number_token3] = ACTIONS(150),
    [aux_sym_number_token4] = ACTIONS(150),
    [aux_sym_number_token5] = ACTIONS(150),
    [aux_sym_number_token6] = ACTIONS(150),
    [aux_sym_number_token7] = ACTIONS(150),
    [aux_sym_number_token8] = ACTIONS(150),
    [aux_sym_number_token9] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_EQ] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_word] = ACTIONS(150),
    [sym_url] = ACTIONS(148),
    [sym_file_path] = ACTIONS(148),
    [sym_ipv4] = ACTIONS(148),
    [sym_ipv6] = ACTIONS(148),
    [sym_mac] = ACTIONS(150),
    [sym_uuid] = ACTIONS(148),
    [sym_md5] = ACTIONS(150),
    [sym_sha1] = ACTIONS(150),
    [sym_sha224] = ACTIONS(150),
    [sym_sha256] = ACTIONS(150),
    [sym_sha384] = ACTIONS(150),
    [sym_sha512] = ACTIONS(148),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(10),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(12),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(13),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trace, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_info, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objects, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objects, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_log(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
