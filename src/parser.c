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
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 110
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
  aux_sym_file_path_token1 = 98,
  aux_sym_file_path_token2 = 99,
  sym_ipv4 = 100,
  sym_ipv6 = 101,
  sym_mac = 102,
  sym_uuid = 103,
  sym_md5 = 104,
  sym_sha1 = 105,
  sym_sha224 = 106,
  sym_sha256 = 107,
  sym_sha384 = 108,
  sym_sha512 = 109,
  sym_log_file = 110,
  sym_log_level = 111,
  sym_trace = 112,
  sym_debug = 113,
  sym_info = 114,
  sym_warn = 115,
  sym_error = 116,
  sym_date = 117,
  sym_constant = 118,
  sym_string_literal = 119,
  sym_number = 120,
  sym__word_separator = 121,
  sym_objects = 122,
  sym_file_path = 123,
  aux_sym_log_file_repeat1 = 124,
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
  [aux_sym_file_path_token1] = "file_path_token1",
  [aux_sym_file_path_token2] = "file_path_token2",
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
  [sym_file_path] = "file_path",
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
  [aux_sym_file_path_token1] = aux_sym_file_path_token1,
  [aux_sym_file_path_token2] = aux_sym_file_path_token2,
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
  [sym_file_path] = sym_file_path,
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
  [aux_sym_file_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_path_token2] = {
    .visible = false,
    .named = false,
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
  [sym_file_path] = {
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
  [16] = 16,
};

static inline bool sym__raw_string_literal_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= ':' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__raw_string_literal_character_set_2(int32_t c) {
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
        ? c == ':'
        : c <= '=')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__interpreted_single_string_character_set_2(int32_t c) {
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

static inline bool sym__interpreted_single_string_character_set_3(int32_t c) {
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

static inline bool sym__interpreted_single_string_character_set_4(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= ':' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__interpreted_single_string_character_set_5(int32_t c) {
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

static inline bool sym_word_character_set_2(int32_t c) {
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

static inline bool sym_word_character_set_3(int32_t c) {
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
      ? (c < '['
        ? c == '='
        : c <= '[')
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
    : (c <= '-' || (c < ']'
      ? (c < '='
        ? (c >= '/' && c <= ':')
        : (c <= '=' || c == '['))
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
    : (c <= ':' || (c < ']'
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

static inline bool sym_word_character_set_9(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '-' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
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
    : (c <= ',' || (c < ']'
      ? (c < '='
        ? (c >= '/' && c <= ':')
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
        ? c == '/'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_12(int32_t c) {
  return (c < '='
    ? (c < '('
      ? (c < '"'
        ? c == 0
        : c <= '"')
      : (c <= ')' || (c < ':'
        ? (c >= ',' && c <= '-')
        : c <= ':')))
    : (c <= '=' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_word_character_set_13(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(233);
      if (lookahead == '"') ADVANCE(976);
      if (lookahead == '\'') ADVANCE(983);
      if (lookahead == '(') ADVANCE(969);
      if (lookahead == ')') ADVANCE(970);
      if (lookahead == ',') ADVANCE(977);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead == '.') ADVANCE(1182);
      if (lookahead == '/') ADVANCE(979);
      if (lookahead == '0') ADVANCE(658);
      if (lookahead == '1') ADVANCE(661);
      if (lookahead == '2') ADVANCE(659);
      if (lookahead == '3') ADVANCE(660);
      if (lookahead == ':') ADVANCE(978);
      if (lookahead == '=') ADVANCE(975);
      if (lookahead == 'A') ADVANCE(1547);
      if (lookahead == 'C') ADVANCE(1549);
      if (lookahead == 'D') ADVANCE(1221);
      if (lookahead == 'E') ADVANCE(1222);
      if (lookahead == 'F') ADVANCE(1546);
      if (lookahead == 'I') ADVANCE(1223);
      if (lookahead == 'J') ADVANCE(1551);
      if (lookahead == 'M') ADVANCE(1552);
      if (lookahead == 'N') ADVANCE(1548);
      if (lookahead == 'O') ADVANCE(1554);
      if (lookahead == 'S') ADVANCE(1555);
      if (lookahead == 'T') ADVANCE(1550);
      if (lookahead == 'V') ADVANCE(1224);
      if (lookahead == 'W') ADVANCE(1225);
      if (lookahead == '[') ADVANCE(971);
      if (lookahead == ']') ADVANCE(972);
      if (lookahead == '`') ADVANCE(1581);
      if (lookahead == 'd') ADVANCE(1562);
      if (lookahead == 'e') ADVANCE(1563);
      if (lookahead == 'f') ADVANCE(1561);
      if (lookahead == 'h') ADVANCE(1558);
      if (lookahead == 'i') ADVANCE(1556);
      if (lookahead == 'n') ADVANCE(1559);
      if (lookahead == 't') ADVANCE(1557);
      if (lookahead == 'w') ADVANCE(1553);
      if (lookahead == '{') ADVANCE(973);
      if (lookahead == '}') ADVANCE(974);
      if (lookahead == '~') ADVANCE(1219);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(1564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(662);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1560);
      if (lookahead != 0) ADVANCE(1716);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(1751);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1721);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(222);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(217);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(227);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == '1') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(1752);
      if (lookahead == '1') ADVANCE(1750);
      if (lookahead == 'A') ADVANCE(1735);
      if (lookahead == 'D') ADVANCE(1731);
      if (lookahead == 'F') ADVANCE(1729);
      if (lookahead == 'J') ADVANCE(1724);
      if (lookahead == 'M') ADVANCE(1725);
      if (lookahead == 'N') ADVANCE(1734);
      if (lookahead == 'O') ADVANCE(1727);
      if (lookahead == 'S') ADVANCE(1730);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == '3') ADVANCE(140);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(172);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(1753);
      if (lookahead == '3') ADVANCE(1742);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '3') ADVANCE(141);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(177);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(181);
      if (lookahead == '1') ADVANCE(181);
      if (lookahead == '2') ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(169);
      if (lookahead == '1') ADVANCE(157);
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(104);
      if (lookahead == 'J') ADVANCE(94);
      if (lookahead == 'M') ADVANCE(95);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(101);
      if (lookahead == 'S') ADVANCE(105);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(162);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(189);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(196);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1775);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(197);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(201);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(210);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(210);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(210);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(213);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(213);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(213);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 58:
      if (lookahead == 'C') ADVANCE(321);
      END_STATE();
    case 59:
      if (lookahead == 'M') ADVANCE(316);
      END_STATE();
    case 60:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(316);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(321);
      END_STATE();
    case 64:
      if (lookahead == '\\') ADVANCE(228);
      END_STATE();
    case 65:
      if (lookahead == '\\') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 71:
      if (lookahead == ']') ADVANCE(253);
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == ']') ADVANCE(244);
      END_STATE();
    case 75:
      if (lookahead == ']') ADVANCE(275);
      END_STATE();
    case 76:
      if (lookahead == ']') ADVANCE(252);
      END_STATE();
    case 77:
      if (lookahead == ']') ADVANCE(291);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 78:
      if (lookahead == ']') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == ']') ADVANCE(243);
      END_STATE();
    case 80:
      if (lookahead == ']') ADVANCE(274);
      END_STATE();
    case 81:
      if (lookahead == ']') ADVANCE(251);
      END_STATE();
    case 82:
      if (lookahead == ']') ADVANCE(261);
      END_STATE();
    case 83:
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(250);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(290);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(237);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(240);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(272);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(331);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(91);
      if (lookahead != 0) ADVANCE(1723);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'S') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(316);
      END_STATE();
    case 138:
      if (lookahead == 'l' ||
          lookahead == 'n') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(295);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(313);
      END_STATE();
    case 142:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(186);
      END_STATE();
    case 143:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 144:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 145:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 149:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(13);
      END_STATE();
    case 150:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 151:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 152:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 154:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(142);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(149);
      END_STATE();
    case 158:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(16);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(52);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(46);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(174);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(45);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(53);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 165:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(839);
      END_STATE();
    case 166:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 167:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 168:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 169:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(929);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(652);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1757);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1774);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1772);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1776);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 223:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 224:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 225:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 226:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 227:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '.' &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(232);
      END_STATE();
    case 228:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1720);
      END_STATE();
    case 229:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 230:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 231:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 232:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1719);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_trace_COLON);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Trace);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACKtrace_RBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Verbose);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_VERBOSE);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACKverbose_RBRACK);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_V_SLASH);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LBRACKverb_RBRACK);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACKvrb_RBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LBRACKvb_RBRACK);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LBRACKv_RBRACK);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_debug_COLON);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Debug);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_D_SLASH);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LBRACKdebug_RBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LBRACKdbug_RBRACK);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACKdbg_RBRACK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LBRACKde_RBRACK);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACKd_RBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_information_COLON);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_info_COLON);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'R') ADVANCE(1322);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_INFORMATION);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_NOTICE);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_I_SLASH);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LBRACKinfo_RBRACK);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACKinf_RBRACK);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACKin_RBRACK);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACKi_RBRACK);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_warning_COLON);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_warning);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Warn);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(1376);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_WARN);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(1326);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_WARNING);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_W_SLASH);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_Warning);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACKwarning_RBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACKwarn_RBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACKwrn_RBRACK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACKwn_RBRACK);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LBRACKw_RBRACK);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_error_COLON);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Error);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_ERROR);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_ALERT);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_CRITICAL);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_EMERGENCY);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_FAILURE);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_FAIL);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'U') ADVANCE(1334);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_Fatal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_FATAL);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_E_SLASH);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACKcritical_RBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACKerror_RBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACKerr_RBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACKer_RBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACKe_RBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_year_month_day);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(304);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(305);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(306);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(307);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(308);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(309);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(310);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(311);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == 'T') ADVANCE(294);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == 'T') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(60);
      if (lookahead == 'P') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(60);
      if (lookahead == 'P') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(60);
      if (lookahead == 'P') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(316);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(60);
      if (lookahead == 'P') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_Null);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__raw_string_literal);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1718);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__interpreted_double_string);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1718);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(404);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1522);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1538);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(383);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1513);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1542);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(377);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1295);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1543);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(376);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(412);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(467);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1667);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(385);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1510);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(380);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(379);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1508);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1511);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(388);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1512);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(381);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1509);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(382);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1514);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(389);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(390);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1516);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(391);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(392);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1515);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(393);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(394);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1517);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(395);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(396);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1518);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(397);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(398);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1519);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(399);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(400);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1520);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(401);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(402);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1521);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(403);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(405);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(406);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(407);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(408);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(409);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(410);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(412);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1718);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1778);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1780);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1782);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1786);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1788);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1790);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1792);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1794);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1796);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1797);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1797);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(420);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1619);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(413);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1613);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(422);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1620);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(414);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1614);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(424);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1621);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(415);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1615);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(426);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1622);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(416);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1616);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(428);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1623);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(417);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1617);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(430);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1624);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(418);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1618);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(419);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1625);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(421);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1626);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(423);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1627);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(425);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1628);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(427);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1629);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(429);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1630);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(431);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1631);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(432);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1632);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(433);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1633);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(434);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1634);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(435);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1635);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(436);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1636);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(437);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1637);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(438);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1638);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(439);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1639);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(440);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1640);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(441);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(442);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1642);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(443);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1643);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(444);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(445);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1645);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(446);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1646);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(447);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1647);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(448);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1648);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(449);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1649);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(451);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1651);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(453);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1653);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(454);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1654);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(455);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1655);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(456);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1656);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(457);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1657);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(458);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1658);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(459);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1659);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(460);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1660);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(461);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1661);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(462);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1662);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(463);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1663);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(464);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1664);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(465);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1665);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(466);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1666);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(468);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1668);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(469);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1669);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(470);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1670);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(471);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1671);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(472);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1672);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(473);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1673);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(474);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1674);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(475);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1675);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(476);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1676);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(477);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1677);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1678);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(479);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1679);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(481);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1681);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(482);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1682);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(483);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1683);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(484);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1684);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(485);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1685);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(486);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1686);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(487);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1687);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(488);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1688);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(489);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1689);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(490);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1690);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(491);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1691);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1692);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(493);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1693);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(494);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1694);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(495);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1695);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(496);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1696);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(497);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1697);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(498);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1698);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(499);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1699);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(500);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1700);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(501);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1701);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(502);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1702);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(503);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1703);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(504);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1704);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(505);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1705);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(506);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1706);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(507);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1707);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(508);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1708);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(509);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1709);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(510);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1710);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1711);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(512);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1712);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1612);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(516);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(1612);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(516);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1227);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(518);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(992);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(515);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(989);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(517);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1228);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(519);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1231);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(520);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(994);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(360);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1230);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(521);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(995);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1233);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(522);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(996);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1232);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(523);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(997);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1235);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(524);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(998);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1234);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(525);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(999);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1237);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(526);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1000);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1236);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(527);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1001);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1239);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(528);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1002);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1238);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(529);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1003);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1241);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(530);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(531);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1005);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1243);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(532);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1006);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(552);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(536);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(534);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(535);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(537);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(538);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(539);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(540);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(541);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(542);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(543);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(544);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(545);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(546);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(547);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(548);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(549);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(550);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(552);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1718);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1612);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(554);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(1612);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(554);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(556);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(992);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(553);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(989);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(555);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(557);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(558);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(994);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(360);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(559);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(995);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(560);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(996);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(561);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(997);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(562);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(998);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(563);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(999);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(564);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1000);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(565);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1001);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(566);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1002);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(567);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1003);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(568);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(569);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1005);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(570);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1006);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(1612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (sym__interpreted_single_string_character_set_3(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(992);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(989);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(994);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(360);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(995);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(996);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(997);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(998);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(999);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1000);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1001);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1002);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1003);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1005);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1006);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(1440);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(1273);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(1271);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1539);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1272);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '5') ADVANCE(610);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1117);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(612);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1543);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1272);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1543);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1272);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1543);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1272);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1543);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1282);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1539);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1283);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1156);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(598);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1540);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1283);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1540);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1283);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1540);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1285);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '5') ADVANCE(599);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1159);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(600);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1285);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1159);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(601);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1285);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1285);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1285);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1287);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(632);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(591);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1542);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1287);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '5') ADVANCE(603);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(605);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1542);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1287);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(592);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(605);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1542);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1287);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(606);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1542);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1287);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(605);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1542);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1287);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1542);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(1287);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1542);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(629);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1156);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(632);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(591);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(593);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(591);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(638);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(639);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(644);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(647);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(649);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(652);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(1274);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == 'E') ADVANCE(1161);
      if (lookahead == 'e') ADVANCE(1160);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1542);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(1485);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1149);
      if (lookahead == 'e') ADVANCE(1148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1538);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1538);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '-') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(929);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1545);
      if (lookahead == '0') ADVANCE(663);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'B') ADVANCE(1606);
      if (lookahead == 'E') ADVANCE(1011);
      if (lookahead == 'b') ADVANCE(1567);
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1607);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1715);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1568);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(664);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(1717);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1545);
      if (lookahead == '4') ADVANCE(667);
      if (lookahead == '5') ADVANCE(665);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'E') ADVANCE(1011);
      if (lookahead == 'e') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(668);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(666);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1568);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(1717);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1545);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'E') ADVANCE(1011);
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(666);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1568);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(1717);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1545);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'E') ADVANCE(1011);
      if (lookahead == 'e') ADVANCE(1010);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(1717);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1545);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'E') ADVANCE(1011);
      if (lookahead == 'e') ADVANCE(1010);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(1717);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1417);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(1166);
      if (lookahead == 'e') ADVANCE(1165);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(1544);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1262);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(1166);
      if (lookahead == 'e') ADVANCE(1165);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1544);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1263);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(1166);
      if (lookahead == 'e') ADVANCE(1165);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(9);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(785);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1544);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1263);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(1166);
      if (lookahead == 'e') ADVANCE(1165);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1544);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1263);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(1166);
      if (lookahead == 'e') ADVANCE(1165);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1544);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1263);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(1166);
      if (lookahead == 'e') ADVANCE(1165);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1544);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1286);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(1166);
      if (lookahead == 'e') ADVANCE(1165);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(1544);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1068);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1779);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1780);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1777);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1783);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1781);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1787);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1788);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1785);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1791);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1789);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1795);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1793);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1797);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1797);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1797);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1026);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1020);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(679);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1014);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1027);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1021);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(682);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1015);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1028);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1022);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1016);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1029);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1023);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1017);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1030);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1024);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1018);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1031);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1025);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1019);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1032);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1631);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1033);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(680);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1034);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1035);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1634);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1036);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1037);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1038);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(695);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1039);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1040);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1041);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(698);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1042);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(699);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1043);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1044);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1045);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1046);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1047);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1048);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(705);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1049);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1050);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(707);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1052);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1651);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1054);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1055);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(712);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1056);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(713);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1057);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(714);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1060);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1659);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(717);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1058);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1061);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(718);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1059);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(716);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1062);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(720);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1063);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(722);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1064);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(719);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1065);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1066);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(723);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1067);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(724);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1069);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1070);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(727);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1071);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(728);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1072);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(729);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1073);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(730);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1074);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1075);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(732);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1076);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(733);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1077);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1676);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1078);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1079);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(736);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1080);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(737);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1082);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(739);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1083);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1084);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1085);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(742);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1086);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(743);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1087);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(744);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1088);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1089);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1090);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1091);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(748);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1092);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(749);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1093);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1692);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1094);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1095);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(752);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1096);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1695);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(753);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1097);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1098);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(755);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1099);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1698);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(756);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1100);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(757);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1101);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(758);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1102);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(759);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1103);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(760);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1104);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(761);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1105);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1106);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(763);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1107);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(764);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1108);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1110);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1111);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(768);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1112);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(769);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1609);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead == 'e') ADVANCE(1113);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(770);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1718);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1427);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1126);
      if (lookahead == 'e') ADVANCE(1125);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(774);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1528);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1421);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1013);
      if (lookahead == 'e') ADVANCE(1012);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1529);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1424);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1123);
      if (lookahead == 'e') ADVANCE(1122);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1527);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1431);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1128);
      if (lookahead == 'e') ADVANCE(1127);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1531);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1434);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1120);
      if (lookahead == 'e') ADVANCE(1119);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1530);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1436);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1131);
      if (lookahead == 'e') ADVANCE(1130);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(776);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1532);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1445);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1134);
      if (lookahead == 'e') ADVANCE(1133);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1533);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1453);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1137);
      if (lookahead == 'e') ADVANCE(1136);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1534);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1461);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1140);
      if (lookahead == 'e') ADVANCE(1139);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1535);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1469);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1143);
      if (lookahead == 'e') ADVANCE(1142);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1536);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1477);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1146);
      if (lookahead == 'e') ADVANCE(1145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1537);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1493);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1151);
      if (lookahead == 'e') ADVANCE(1152);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(655);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1539);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1284);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == 'E') ADVANCE(1164);
      if (lookahead == 'e') ADVANCE(1163);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(654);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1543);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1496);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1155);
      if (lookahead == 'e') ADVANCE(1154);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1540);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1499);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1158);
      if (lookahead == 'e') ADVANCE(1157);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(1504);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == 'E') ADVANCE(1164);
      if (lookahead == 'e') ADVANCE(1163);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(654);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1543);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1542);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1543);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(881);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(800);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(809);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(817);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(819);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(657);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1780);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1779);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1783);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1788);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1787);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1791);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1795);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1797);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1797);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(825);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(826);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(830);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(834);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(836);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(837);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(838);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(842);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1631);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(847);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1634);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(848);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(849);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(850);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(851);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(852);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(853);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(856);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(857);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(858);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(859);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(863);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1651);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(867);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(869);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(870);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(871);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(872);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1659);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(873);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(875);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(876);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(882);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(885);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(888);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1676);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(890);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(895);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(896);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(897);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(899);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(900);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(901);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(903);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(904);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(905);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1692);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(907);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(908);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1695);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(909);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1698);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(912);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(913);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(914);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(915);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(916);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(917);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(918);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(919);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(920);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(921);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(922);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(923);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(924);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(926);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(929);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(949);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(933);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(931);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(932);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(934);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(935);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(936);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(937);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(938);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(939);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(940);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(941);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(942);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(943);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(944);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(945);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(949);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1612);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(1612);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1227);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(992);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1226);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(989);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1229);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1228);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1231);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(994);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(360);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1230);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(995);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1233);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(996);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1232);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(997);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1235);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(998);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1234);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(999);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1237);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1000);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1236);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1001);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1239);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1002);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1238);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1003);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1241);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1240);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1005);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1243);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1006);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(69);
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1720);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(277);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(1541);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(265);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(1539);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '\\') ADVANCE(1611);
      if (lookahead == 'b') ADVANCE(984);
      if (lookahead == 'd') ADVANCE(986);
      if (lookahead == 'h') ADVANCE(987);
      if (lookahead == 'o') ADVANCE(985);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(988);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(1242);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(533);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1007);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(571);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1007);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (sym__interpreted_single_string_character_set_3(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1007);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(1242);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1007);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(1242);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1007);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1612);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(1612);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1227);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(992);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1226);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(989);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1229);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1228);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1231);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(994);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(360);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1230);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(995);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1233);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(996);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1232);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(997);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1235);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(998);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1234);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(999);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1237);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1000);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1236);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1001);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1239);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1002);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1238);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1003);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1241);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1240);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1005);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(1243);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1006);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1608);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1608);
      if (lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1507);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == ':') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1507);
      if (lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(881);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1780);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1779);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1783);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1788);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1787);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1791);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1795);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1797);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1797);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(825);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(826);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(830);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(834);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(836);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(837);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(838);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(842);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1631);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(847);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1634);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(848);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(849);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(850);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(851);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(852);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(853);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(856);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(857);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(858);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(859);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(863);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1651);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(867);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(869);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(870);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(871);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(872);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1659);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(873);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(875);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(876);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(882);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(885);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(888);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1676);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(890);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(895);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(896);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(897);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(899);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(900);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(901);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(903);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(904);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(905);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1692);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(907);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(908);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1695);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(909);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1698);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(912);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(913);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(914);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(915);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(916);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(917);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(918);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(919);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(920);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(921);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(922);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(923);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(924);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(926);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1610);
      if (lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1505);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1425);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1527);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1423);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1527);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1423);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1527);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1428);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1528);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1426);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1528);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1426);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1528);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1420);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1529);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1422);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1529);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1422);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1529);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1430);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1430);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(809);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1432);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(638);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1435);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1435);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1437);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(639);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1444);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1444);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1446);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1452);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(800);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1452);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1454);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1460);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1460);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1462);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1468);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1468);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1470);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1476);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1476);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1478);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(644);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1484);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1484);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1486);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1492);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(817);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1492);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1494);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1495);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1495);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1497);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(647);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1498);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1498);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(819);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1500);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1501);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1501);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1502);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(649);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1503);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1503);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1506);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(1506);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1522);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(1443);
      if (lookahead == '/') ADVANCE(173);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(1451);
      if (lookahead == '/') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1168);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(1459);
      if (lookahead == '/') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1169);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(1467);
      if (lookahead == '/') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1170);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(1475);
      if (lookahead == '/') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1171);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(1483);
      if (lookahead == '/') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1172);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(1491);
      if (lookahead == '/') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1173);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(1275);
      if (lookahead == '/') ADVANCE(12);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(1276);
      if (lookahead == '/') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(1277);
      if (lookahead == '/') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1176);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(1278);
      if (lookahead == '/') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1177);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(1279);
      if (lookahead == '/') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1178);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(1280);
      if (lookahead == '/') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1179);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(1281);
      if (lookahead == '/') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1180);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1220);
      if (lookahead == '/') ADVANCE(228);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1270);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '5') ADVANCE(1215);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1217);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1270);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1217);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1270);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1218);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1270);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1264);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1265);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1187);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1265);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1187);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1265);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1266);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '5') ADVANCE(1188);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1189);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1266);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1190);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1266);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1266);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1189);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1266);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1190);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1266);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1267);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '5') ADVANCE(1192);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1195);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1267);
      if (lookahead == '/') ADVANCE(229);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1193);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1267);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1196);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1267);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1193);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1267);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1419);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1267);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1195);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1267);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1267);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1268);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '5') ADVANCE(1198);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1200);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1268);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '5') ADVANCE(1199);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1203);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1268);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1204);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1268);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1201);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1268);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1429);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1268);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1200);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1268);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1268);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1204);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1268);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1269);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '5') ADVANCE(1207);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1212);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1269);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1213);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1269);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1212);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1269);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1213);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(1269);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(228);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(228);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'E') ADVANCE(1570);
      if (lookahead == 'e') ADVANCE(1587);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'M') ADVANCE(1572);
      if (lookahead == 'R') ADVANCE(1577);
      if (lookahead == 'r') ADVANCE(1596);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(1573);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'E') ADVANCE(1578);
      if (lookahead == 'e') ADVANCE(1597);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(1579);
      if (lookahead == 'a') ADVANCE(1598);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(989);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(992);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(994);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(996);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(995);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(998);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(997);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1000);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(999);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1002);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1001);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1003);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1006);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(3);
      if (sym__interpreted_single_string_character_set_4(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1005);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(351);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1583);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(333);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1246);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(334);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1244);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(332);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1245);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(335);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1247);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(336);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1248);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(337);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1249);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(338);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1250);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(339);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1251);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(340);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1252);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(341);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1253);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(342);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1254);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(343);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1255);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(344);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1256);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(345);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1257);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(346);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1258);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(347);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1259);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '`') ADVANCE(348);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1260);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(615);
      if (lookahead == '1') ADVANCE(633);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(607);
      if (lookahead == '1') ADVANCE(609);
      if (lookahead == '2') ADVANCE(608);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1762);
      if (lookahead == '1') ADVANCE(1766);
      if (lookahead == '2') ADVANCE(1763);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1765);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1762);
      if (lookahead == '1') ADVANCE(1766);
      if (lookahead == '2') ADVANCE(1763);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1765);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1762);
      if (lookahead == '1') ADVANCE(1766);
      if (lookahead == '2') ADVANCE(1763);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1765);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1762);
      if (lookahead == '1') ADVANCE(1766);
      if (lookahead == '2') ADVANCE(1763);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1765);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1762);
      if (lookahead == '1') ADVANCE(1766);
      if (lookahead == '2') ADVANCE(1763);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1765);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1762);
      if (lookahead == '1') ADVANCE(1766);
      if (lookahead == '2') ADVANCE(1763);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1765);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1762);
      if (lookahead == '1') ADVANCE(1766);
      if (lookahead == '2') ADVANCE(1763);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1765);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1409);
      if (lookahead == '3') ADVANCE(1400);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1418);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1186);
      if (lookahead == '1') ADVANCE(1184);
      if (lookahead == '2') ADVANCE(1183);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1185);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1209);
      if (lookahead == '1') ADVANCE(1210);
      if (lookahead == '2') ADVANCE(1205);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1208);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(614);
      if (lookahead == '1') ADVANCE(630);
      if (lookahead == 'A') ADVANCE(1386);
      if (lookahead == 'D') ADVANCE(1360);
      if (lookahead == 'F') ADVANCE(1357);
      if (lookahead == 'J') ADVANCE(1342);
      if (lookahead == 'M') ADVANCE(1343);
      if (lookahead == 'N') ADVANCE(1381);
      if (lookahead == 'O') ADVANCE(1348);
      if (lookahead == 'S') ADVANCE(1358);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1526);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1410);
      if (lookahead == '3') ADVANCE(1401);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1438);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1411);
      if (lookahead == '3') ADVANCE(1402);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1447);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1412);
      if (lookahead == '3') ADVANCE(1403);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1455);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1413);
      if (lookahead == '3') ADVANCE(1404);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1463);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1414);
      if (lookahead == '3') ADVANCE(1405);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1471);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1415);
      if (lookahead == '3') ADVANCE(1406);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1479);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1416);
      if (lookahead == '3') ADVANCE(1407);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1487);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1196);
      if (lookahead == '1') ADVANCE(1194);
      if (lookahead == '2') ADVANCE(1191);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1195);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1204);
      if (lookahead == '1') ADVANCE(1202);
      if (lookahead == '2') ADVANCE(1197);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(606);
      if (lookahead == '1') ADVANCE(604);
      if (lookahead == '2') ADVANCE(602);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(605);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1213);
      if (lookahead == '1') ADVANCE(1211);
      if (lookahead == '2') ADVANCE(1206);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1212);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(613);
      if (lookahead == '1') ADVANCE(611);
      if (lookahead == '2') ADVANCE(608);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(1218);
      if (lookahead == '1') ADVANCE(1216);
      if (lookahead == '2') ADVANCE(1214);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1217);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(1289);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(8);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(1372);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(246);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(234);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(255);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1295);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1513);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1295);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'A') ADVANCE(1320);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'A') ADVANCE(1321);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'A') ADVANCE(1338);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'B') ADVANCE(1330);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'C') ADVANCE(1341);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'C') ADVANCE(1307);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'C') ADVANCE(1308);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'C') ADVANCE(1298);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(324);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(327);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(259);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(284);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(1325);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'G') ADVANCE(248);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'G') ADVANCE(269);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'G') ADVANCE(1311);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(1304);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(1329);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(1303);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'L') ADVANCE(285);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'L') ADVANCE(330);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'L') ADVANCE(287);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'L') ADVANCE(282);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'M') ADVANCE(1299);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'N') ADVANCE(268);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'N') ADVANCE(258);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'N') ADVANCE(1301);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'N') ADVANCE(1313);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'O') ADVANCE(257);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'O') ADVANCE(1331);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'O') ADVANCE(1324);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'O') ADVANCE(1336);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'R') ADVANCE(280);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'R') ADVANCE(1337);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'R') ADVANCE(1314);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'R') ADVANCE(1309);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'S') ADVANCE(1306);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'S') ADVANCE(1310);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(281);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(1316);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(1315);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'U') ADVANCE(1312);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'Y') ADVANCE(283);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(1375);
      if (lookahead == 'u') ADVANCE(1398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1525);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(1399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1525);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(1394);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(1371);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'b') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'b') ADVANCE(1384);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(1395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1525);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(1355);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(1361);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(323);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(322);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(326);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(235);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(325);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(1346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1525);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1525);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(238);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(1349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1525);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(1292);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(247);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(1291);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(271);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(982);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(1383);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(1377);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(329);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(328);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(1344);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(267);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(1368);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(1364);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(1365);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(1293);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(1388);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(1290);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(1397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1525);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(1389);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(1378);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(1393);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(1288);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(1390);
      if (lookahead == 'u') ADVANCE(1366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1525);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(279);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(981);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 's') ADVANCE(1354);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 's') ADVANCE(1356);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 's') ADVANCE(1359);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 't') ADVANCE(1367);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 't') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(1362);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'v') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'l' ||
          lookahead == 'n') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(1181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(303);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(297);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(298);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(299);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(301);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (!sym_word_character_set_12(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1419);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1429);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(809);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(638);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1433);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1439);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1441);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1442);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(639);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1448);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1449);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1450);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1456);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1458);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1464);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1465);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1466);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1472);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1473);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1474);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1480);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1481);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1482);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(644);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1488);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1489);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1490);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(817);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(647);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(819);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(649);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1667);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1508);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1512);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1509);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1510);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1511);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1516);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1514);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1515);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1517);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1518);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1519);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1520);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1521);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1174);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1523);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1525);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1528);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1529);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1527);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1530);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1531);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1532);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1533);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1534);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1535);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1536);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1537);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1538);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1539);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1540);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1541);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1542);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1543);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(595);
      if (lookahead == '1') ADVANCE(596);
      if (lookahead == '2') ADVANCE(594);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(597);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1590);
      if (lookahead == 'e') ADVANCE(1586);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'L') ADVANCE(1571);
      if (lookahead == 'p') ADVANCE(1595);
      if (lookahead == 'u') ADVANCE(1589);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'U') ADVANCE(1576);
      if (lookahead == 'o') ADVANCE(1603);
      if (lookahead == 'u') ADVANCE(1591);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(1574);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(1569);
      if (lookahead == 'r') ADVANCE(1584);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(1593);
      if (lookahead == 'u') ADVANCE(1604);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(1605);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(1599);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(1601);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(1594);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(1588);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(1585);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 't') ADVANCE(1602);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(1592);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(64);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(1566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1568);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(1565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1568);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(1600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1568);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1568);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'b') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(378);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1296);
      if (!sym_word_character_set_13(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(1302);
      if (lookahead == 'U') ADVANCE(1305);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(1340);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(1332);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(1333);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(1327);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(1339);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(1318);
      if (lookahead == 'L') ADVANCE(1335);
      if (lookahead == 'T') ADVANCE(1297);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(1319);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(1328);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(1300);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(1323);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(1317);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(350);
      if (sym__raw_string_literal_character_set_2(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1582);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(349);
      if (sym__raw_string_literal_character_set_2(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1261);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(351);
      if (sym__raw_string_literal_character_set_2(lookahead)) ADVANCE(91);
      if (lookahead != 0) ADVANCE(1583);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1350);
      if (lookahead == 'u') ADVANCE(1352);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1351);
      if (lookahead == 'u') ADVANCE(1353);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(1408);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(1396);
      if (lookahead == 'c') ADVANCE(1408);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(1380);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(1408);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1391);
      if (lookahead == 't') ADVANCE(1345);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1369);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1370);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1408);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1408);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1408);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1379);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1347);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1373);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1374);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1382);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1408);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1385);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(1408);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l' ||
          lookahead == 'n') ADVANCE(1408);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(1408);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(411);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(551);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(sym_word);
      if (sym__interpreted_single_string_character_set_5(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1007);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(sym_word);
      if (sym__interpreted_single_string_character_set_5(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1780);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1788);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1792);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1796);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1797);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1613);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1614);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1615);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1616);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1617);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1618);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1619);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1620);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1621);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1622);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1623);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1624);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1625);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1626);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1627);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1628);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1629);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1630);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1631);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1632);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1633);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1634);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1635);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1636);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1637);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1638);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1639);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1640);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1642);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1643);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1645);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1646);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1647);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1648);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1649);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1651);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1653);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1654);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1655);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1656);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1657);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1658);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1659);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1660);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1661);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1662);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1663);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1664);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1665);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1666);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1668);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1669);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1670);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1671);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1672);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1673);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1674);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1675);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1676);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1677);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1678);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1679);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1681);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1682);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1683);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1684);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1685);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1686);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1687);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1688);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1689);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1690);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1691);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1692);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1693);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1694);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1695);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1696);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1697);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1698);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1699);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1700);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1701);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1702);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1703);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1704);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1705);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1706);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1707);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1708);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1709);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1710);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1711);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1712);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(948);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1717);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1718);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1719);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym_file_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1720);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(1751);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1721);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == '0') ADVANCE(1753);
      if (lookahead == '3') ADVANCE(1742);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == '`') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(91);
      if (lookahead != 0) ADVANCE(1723);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'a') ADVANCE(1733);
      if (lookahead == 'u') ADVANCE(1740);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'a') ADVANCE(1741);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'b') ADVANCE(1748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'c') ADVANCE(1738);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'c') ADVANCE(1748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'e') ADVANCE(1726);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'e') ADVANCE(1736);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'e') ADVANCE(1728);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'g') ADVANCE(1748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'n') ADVANCE(1748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'o') ADVANCE(1739);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'p') ADVANCE(1737);
      if (lookahead == 'u') ADVANCE(1732);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'p') ADVANCE(1748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'r') ADVANCE(1748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 't') ADVANCE(1748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'v') ADVANCE(1748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'l' ||
          lookahead == 'n') ADVANCE(1748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(1748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(1722);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(1722);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(1722);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(1722);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(1722);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1746);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(1722);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1747);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(1722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1721);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1760);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(sym_ipv4);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(175);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '5') ADVANCE(1764);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1762);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1765);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1762);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1762);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1765);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1761);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(sym_ipv6);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(sym_ipv6);
      if (lookahead == '/') ADVANCE(180);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(sym_ipv6);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1769);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(sym_ipv6);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1770);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(sym_ipv6);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1771);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(sym_ipv6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1768);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(sym_ipv6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1773);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == ':') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(sym_uuid);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(sym_md5);
      if (lookahead == 'e') ADVANCE(1051);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(sym_md5);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(450);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1650);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(sym_md5);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(864);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(sym_md5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1650);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(sym_sha1);
      if (lookahead == 'e') ADVANCE(1081);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(738);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(sym_sha1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(480);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1680);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(sym_sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1680);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(sym_sha224);
      if (lookahead == 'e') ADVANCE(1053);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(sym_sha224);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(452);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1652);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(sym_sha224);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(sym_sha224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1652);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(sym_sha256);
      if (lookahead == 'e') ADVANCE(1114);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(771);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(sym_sha256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(513);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1713);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(sym_sha256);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(927);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(sym_sha256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1713);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(sym_sha384);
      if (lookahead == 'e') ADVANCE(1115);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(772);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(sym_sha384);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(514);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1714);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(sym_sha384);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(sym_sha384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1714);
      END_STATE();
    case 1797:
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
  [16] = {.lex_state = 0},
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
    [aux_sym_file_path_token1] = ACTIONS(1),
    [aux_sym_file_path_token2] = ACTIONS(1),
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
    [sym_log_file] = STATE(16),
    [sym_log_level] = STATE(2),
    [sym_trace] = STATE(15),
    [sym_debug] = STATE(15),
    [sym_info] = STATE(15),
    [sym_warn] = STATE(15),
    [sym_error] = STATE(15),
    [sym_date] = STATE(2),
    [sym_constant] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym_number] = STATE(2),
    [sym__word_separator] = STATE(2),
    [sym_objects] = STATE(2),
    [sym_file_path] = STATE(13),
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
    [aux_sym_file_path_token1] = ACTIONS(41),
    [aux_sym_file_path_token2] = ACTIONS(43),
    [sym_ipv4] = ACTIONS(39),
    [sym_ipv6] = ACTIONS(39),
    [sym_mac] = ACTIONS(45),
    [sym_uuid] = ACTIONS(39),
    [sym_md5] = ACTIONS(45),
    [sym_sha1] = ACTIONS(45),
    [sym_sha224] = ACTIONS(45),
    [sym_sha256] = ACTIONS(45),
    [sym_sha384] = ACTIONS(45),
    [sym_sha512] = ACTIONS(39),
  },
  [2] = {
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(15),
    [sym_debug] = STATE(15),
    [sym_info] = STATE(15),
    [sym_warn] = STATE(15),
    [sym_error] = STATE(15),
    [sym_date] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [sym_objects] = STATE(3),
    [sym_file_path] = STATE(13),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
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
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(49),
    [sym_word] = ACTIONS(51),
    [sym_url] = ACTIONS(39),
    [aux_sym_file_path_token1] = ACTIONS(41),
    [aux_sym_file_path_token2] = ACTIONS(43),
    [sym_ipv4] = ACTIONS(39),
    [sym_ipv6] = ACTIONS(39),
    [sym_mac] = ACTIONS(45),
    [sym_uuid] = ACTIONS(39),
    [sym_md5] = ACTIONS(45),
    [sym_sha1] = ACTIONS(45),
    [sym_sha224] = ACTIONS(45),
    [sym_sha256] = ACTIONS(45),
    [sym_sha384] = ACTIONS(45),
    [sym_sha512] = ACTIONS(39),
  },
  [3] = {
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(15),
    [sym_debug] = STATE(15),
    [sym_info] = STATE(15),
    [sym_warn] = STATE(15),
    [sym_error] = STATE(15),
    [sym_date] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [sym_objects] = STATE(3),
    [sym_file_path] = STATE(13),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_trace_COLON] = ACTIONS(55),
    [anon_sym_Trace] = ACTIONS(58),
    [anon_sym_TRACE] = ACTIONS(58),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(55),
    [anon_sym_Verbose] = ACTIONS(58),
    [anon_sym_VERBOSE] = ACTIONS(58),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(55),
    [anon_sym_V_SLASH] = ACTIONS(55),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(55),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(55),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(55),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(55),
    [anon_sym_debug_COLON] = ACTIONS(61),
    [anon_sym_Debug] = ACTIONS(64),
    [anon_sym_DEBUG] = ACTIONS(64),
    [anon_sym_D_SLASH] = ACTIONS(61),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(61),
    [anon_sym_information_COLON] = ACTIONS(67),
    [anon_sym_info_COLON] = ACTIONS(67),
    [anon_sym_INFO] = ACTIONS(70),
    [anon_sym_INFORMATION] = ACTIONS(70),
    [anon_sym_NOTICE] = ACTIONS(70),
    [anon_sym_I_SLASH] = ACTIONS(67),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(67),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(67),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(67),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(67),
    [anon_sym_warning_COLON] = ACTIONS(73),
    [anon_sym_warning] = ACTIONS(73),
    [anon_sym_Warn] = ACTIONS(76),
    [anon_sym_WARN] = ACTIONS(76),
    [anon_sym_WARNING] = ACTIONS(76),
    [anon_sym_W_SLASH] = ACTIONS(73),
    [anon_sym_Warning] = ACTIONS(76),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(73),
    [anon_sym_error_COLON] = ACTIONS(79),
    [anon_sym_error] = ACTIONS(79),
    [anon_sym_Error] = ACTIONS(82),
    [anon_sym_ERROR] = ACTIONS(82),
    [anon_sym_ALERT] = ACTIONS(82),
    [anon_sym_CRITICAL] = ACTIONS(82),
    [anon_sym_EMERGENCY] = ACTIONS(82),
    [anon_sym_FAILURE] = ACTIONS(82),
    [anon_sym_FAIL] = ACTIONS(82),
    [anon_sym_Fatal] = ACTIONS(82),
    [anon_sym_FATAL] = ACTIONS(82),
    [anon_sym_E_SLASH] = ACTIONS(79),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(79),
    [sym_year_month_day] = ACTIONS(85),
    [sym_time] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(88),
    [anon_sym_True] = ACTIONS(88),
    [anon_sym_TRUE] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(88),
    [anon_sym_False] = ACTIONS(88),
    [anon_sym_FALSE] = ACTIONS(88),
    [anon_sym_null] = ACTIONS(88),
    [anon_sym_Null] = ACTIONS(88),
    [anon_sym_NULL] = ACTIONS(88),
    [sym__raw_string_literal] = ACTIONS(91),
    [sym__interpreted_double_string] = ACTIONS(94),
    [sym__interpreted_single_string] = ACTIONS(91),
    [aux_sym_number_token1] = ACTIONS(97),
    [aux_sym_number_token2] = ACTIONS(97),
    [aux_sym_number_token3] = ACTIONS(97),
    [aux_sym_number_token4] = ACTIONS(97),
    [aux_sym_number_token5] = ACTIONS(97),
    [aux_sym_number_token6] = ACTIONS(97),
    [aux_sym_number_token7] = ACTIONS(97),
    [aux_sym_number_token8] = ACTIONS(97),
    [aux_sym_number_token9] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(100),
    [sym_word] = ACTIONS(103),
    [sym_url] = ACTIONS(106),
    [aux_sym_file_path_token1] = ACTIONS(109),
    [aux_sym_file_path_token2] = ACTIONS(112),
    [sym_ipv4] = ACTIONS(106),
    [sym_ipv6] = ACTIONS(106),
    [sym_mac] = ACTIONS(115),
    [sym_uuid] = ACTIONS(106),
    [sym_md5] = ACTIONS(115),
    [sym_sha1] = ACTIONS(115),
    [sym_sha224] = ACTIONS(115),
    [sym_sha256] = ACTIONS(115),
    [sym_sha384] = ACTIONS(115),
    [sym_sha512] = ACTIONS(106),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_trace_COLON] = ACTIONS(118),
    [anon_sym_Trace] = ACTIONS(120),
    [anon_sym_TRACE] = ACTIONS(120),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(118),
    [anon_sym_Verbose] = ACTIONS(120),
    [anon_sym_VERBOSE] = ACTIONS(120),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(118),
    [anon_sym_V_SLASH] = ACTIONS(118),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(118),
    [anon_sym_debug_COLON] = ACTIONS(118),
    [anon_sym_Debug] = ACTIONS(120),
    [anon_sym_DEBUG] = ACTIONS(120),
    [anon_sym_D_SLASH] = ACTIONS(118),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(118),
    [anon_sym_information_COLON] = ACTIONS(118),
    [anon_sym_info_COLON] = ACTIONS(118),
    [anon_sym_INFO] = ACTIONS(120),
    [anon_sym_INFORMATION] = ACTIONS(120),
    [anon_sym_NOTICE] = ACTIONS(120),
    [anon_sym_I_SLASH] = ACTIONS(118),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(118),
    [anon_sym_warning_COLON] = ACTIONS(118),
    [anon_sym_warning] = ACTIONS(118),
    [anon_sym_Warn] = ACTIONS(120),
    [anon_sym_WARN] = ACTIONS(120),
    [anon_sym_WARNING] = ACTIONS(120),
    [anon_sym_W_SLASH] = ACTIONS(118),
    [anon_sym_Warning] = ACTIONS(120),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(118),
    [anon_sym_error_COLON] = ACTIONS(118),
    [anon_sym_error] = ACTIONS(118),
    [anon_sym_Error] = ACTIONS(120),
    [anon_sym_ERROR] = ACTIONS(120),
    [anon_sym_ALERT] = ACTIONS(120),
    [anon_sym_CRITICAL] = ACTIONS(120),
    [anon_sym_EMERGENCY] = ACTIONS(120),
    [anon_sym_FAILURE] = ACTIONS(120),
    [anon_sym_FAIL] = ACTIONS(120),
    [anon_sym_Fatal] = ACTIONS(120),
    [anon_sym_FATAL] = ACTIONS(120),
    [anon_sym_E_SLASH] = ACTIONS(118),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(118),
    [sym_year_month_day] = ACTIONS(120),
    [sym_time] = ACTIONS(120),
    [anon_sym_true] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(120),
    [anon_sym_TRUE] = ACTIONS(120),
    [anon_sym_false] = ACTIONS(120),
    [anon_sym_False] = ACTIONS(120),
    [anon_sym_FALSE] = ACTIONS(120),
    [anon_sym_null] = ACTIONS(120),
    [anon_sym_Null] = ACTIONS(120),
    [anon_sym_NULL] = ACTIONS(120),
    [sym__raw_string_literal] = ACTIONS(120),
    [sym__interpreted_double_string] = ACTIONS(118),
    [sym__interpreted_single_string] = ACTIONS(120),
    [aux_sym_number_token1] = ACTIONS(120),
    [aux_sym_number_token2] = ACTIONS(120),
    [aux_sym_number_token3] = ACTIONS(120),
    [aux_sym_number_token4] = ACTIONS(120),
    [aux_sym_number_token5] = ACTIONS(120),
    [aux_sym_number_token6] = ACTIONS(120),
    [aux_sym_number_token7] = ACTIONS(120),
    [aux_sym_number_token8] = ACTIONS(120),
    [aux_sym_number_token9] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(118),
    [sym_word] = ACTIONS(120),
    [sym_url] = ACTIONS(118),
    [aux_sym_file_path_token1] = ACTIONS(118),
    [aux_sym_file_path_token2] = ACTIONS(120),
    [sym_ipv4] = ACTIONS(118),
    [sym_ipv6] = ACTIONS(118),
    [sym_mac] = ACTIONS(120),
    [sym_uuid] = ACTIONS(118),
    [sym_md5] = ACTIONS(120),
    [sym_sha1] = ACTIONS(120),
    [sym_sha224] = ACTIONS(120),
    [sym_sha256] = ACTIONS(120),
    [sym_sha384] = ACTIONS(120),
    [sym_sha512] = ACTIONS(118),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_trace_COLON] = ACTIONS(122),
    [anon_sym_Trace] = ACTIONS(124),
    [anon_sym_TRACE] = ACTIONS(124),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(122),
    [anon_sym_Verbose] = ACTIONS(124),
    [anon_sym_VERBOSE] = ACTIONS(124),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(122),
    [anon_sym_V_SLASH] = ACTIONS(122),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(122),
    [anon_sym_debug_COLON] = ACTIONS(122),
    [anon_sym_Debug] = ACTIONS(124),
    [anon_sym_DEBUG] = ACTIONS(124),
    [anon_sym_D_SLASH] = ACTIONS(122),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(122),
    [anon_sym_information_COLON] = ACTIONS(122),
    [anon_sym_info_COLON] = ACTIONS(122),
    [anon_sym_INFO] = ACTIONS(124),
    [anon_sym_INFORMATION] = ACTIONS(124),
    [anon_sym_NOTICE] = ACTIONS(124),
    [anon_sym_I_SLASH] = ACTIONS(122),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(122),
    [anon_sym_warning_COLON] = ACTIONS(122),
    [anon_sym_warning] = ACTIONS(122),
    [anon_sym_Warn] = ACTIONS(124),
    [anon_sym_WARN] = ACTIONS(124),
    [anon_sym_WARNING] = ACTIONS(124),
    [anon_sym_W_SLASH] = ACTIONS(122),
    [anon_sym_Warning] = ACTIONS(124),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(122),
    [anon_sym_error_COLON] = ACTIONS(122),
    [anon_sym_error] = ACTIONS(122),
    [anon_sym_Error] = ACTIONS(124),
    [anon_sym_ERROR] = ACTIONS(124),
    [anon_sym_ALERT] = ACTIONS(124),
    [anon_sym_CRITICAL] = ACTIONS(124),
    [anon_sym_EMERGENCY] = ACTIONS(124),
    [anon_sym_FAILURE] = ACTIONS(124),
    [anon_sym_FAIL] = ACTIONS(124),
    [anon_sym_Fatal] = ACTIONS(124),
    [anon_sym_FATAL] = ACTIONS(124),
    [anon_sym_E_SLASH] = ACTIONS(122),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(122),
    [sym_year_month_day] = ACTIONS(124),
    [sym_time] = ACTIONS(124),
    [anon_sym_true] = ACTIONS(124),
    [anon_sym_True] = ACTIONS(124),
    [anon_sym_TRUE] = ACTIONS(124),
    [anon_sym_false] = ACTIONS(124),
    [anon_sym_False] = ACTIONS(124),
    [anon_sym_FALSE] = ACTIONS(124),
    [anon_sym_null] = ACTIONS(124),
    [anon_sym_Null] = ACTIONS(124),
    [anon_sym_NULL] = ACTIONS(124),
    [sym__raw_string_literal] = ACTIONS(124),
    [sym__interpreted_double_string] = ACTIONS(122),
    [sym__interpreted_single_string] = ACTIONS(124),
    [aux_sym_number_token1] = ACTIONS(124),
    [aux_sym_number_token2] = ACTIONS(124),
    [aux_sym_number_token3] = ACTIONS(124),
    [aux_sym_number_token4] = ACTIONS(124),
    [aux_sym_number_token5] = ACTIONS(124),
    [aux_sym_number_token6] = ACTIONS(124),
    [aux_sym_number_token7] = ACTIONS(124),
    [aux_sym_number_token8] = ACTIONS(124),
    [aux_sym_number_token9] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_word] = ACTIONS(124),
    [sym_url] = ACTIONS(122),
    [aux_sym_file_path_token1] = ACTIONS(122),
    [aux_sym_file_path_token2] = ACTIONS(124),
    [sym_ipv4] = ACTIONS(122),
    [sym_ipv6] = ACTIONS(122),
    [sym_mac] = ACTIONS(124),
    [sym_uuid] = ACTIONS(122),
    [sym_md5] = ACTIONS(124),
    [sym_sha1] = ACTIONS(124),
    [sym_sha224] = ACTIONS(124),
    [sym_sha256] = ACTIONS(124),
    [sym_sha384] = ACTIONS(124),
    [sym_sha512] = ACTIONS(122),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_trace_COLON] = ACTIONS(126),
    [anon_sym_Trace] = ACTIONS(128),
    [anon_sym_TRACE] = ACTIONS(128),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(126),
    [anon_sym_Verbose] = ACTIONS(128),
    [anon_sym_VERBOSE] = ACTIONS(128),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(126),
    [anon_sym_V_SLASH] = ACTIONS(126),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(126),
    [anon_sym_debug_COLON] = ACTIONS(126),
    [anon_sym_Debug] = ACTIONS(128),
    [anon_sym_DEBUG] = ACTIONS(128),
    [anon_sym_D_SLASH] = ACTIONS(126),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(126),
    [anon_sym_information_COLON] = ACTIONS(126),
    [anon_sym_info_COLON] = ACTIONS(126),
    [anon_sym_INFO] = ACTIONS(128),
    [anon_sym_INFORMATION] = ACTIONS(128),
    [anon_sym_NOTICE] = ACTIONS(128),
    [anon_sym_I_SLASH] = ACTIONS(126),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(126),
    [anon_sym_warning_COLON] = ACTIONS(126),
    [anon_sym_warning] = ACTIONS(126),
    [anon_sym_Warn] = ACTIONS(128),
    [anon_sym_WARN] = ACTIONS(128),
    [anon_sym_WARNING] = ACTIONS(128),
    [anon_sym_W_SLASH] = ACTIONS(126),
    [anon_sym_Warning] = ACTIONS(128),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(126),
    [anon_sym_error_COLON] = ACTIONS(126),
    [anon_sym_error] = ACTIONS(126),
    [anon_sym_Error] = ACTIONS(128),
    [anon_sym_ERROR] = ACTIONS(128),
    [anon_sym_ALERT] = ACTIONS(128),
    [anon_sym_CRITICAL] = ACTIONS(128),
    [anon_sym_EMERGENCY] = ACTIONS(128),
    [anon_sym_FAILURE] = ACTIONS(128),
    [anon_sym_FAIL] = ACTIONS(128),
    [anon_sym_Fatal] = ACTIONS(128),
    [anon_sym_FATAL] = ACTIONS(128),
    [anon_sym_E_SLASH] = ACTIONS(126),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(126),
    [sym_year_month_day] = ACTIONS(128),
    [sym_time] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(128),
    [anon_sym_True] = ACTIONS(128),
    [anon_sym_TRUE] = ACTIONS(128),
    [anon_sym_false] = ACTIONS(128),
    [anon_sym_False] = ACTIONS(128),
    [anon_sym_FALSE] = ACTIONS(128),
    [anon_sym_null] = ACTIONS(128),
    [anon_sym_Null] = ACTIONS(128),
    [anon_sym_NULL] = ACTIONS(128),
    [sym__raw_string_literal] = ACTIONS(128),
    [sym__interpreted_double_string] = ACTIONS(126),
    [sym__interpreted_single_string] = ACTIONS(128),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [aux_sym_number_token3] = ACTIONS(128),
    [aux_sym_number_token4] = ACTIONS(128),
    [aux_sym_number_token5] = ACTIONS(128),
    [aux_sym_number_token6] = ACTIONS(128),
    [aux_sym_number_token7] = ACTIONS(128),
    [aux_sym_number_token8] = ACTIONS(128),
    [aux_sym_number_token9] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_word] = ACTIONS(128),
    [sym_url] = ACTIONS(126),
    [aux_sym_file_path_token1] = ACTIONS(126),
    [aux_sym_file_path_token2] = ACTIONS(128),
    [sym_ipv4] = ACTIONS(126),
    [sym_ipv6] = ACTIONS(126),
    [sym_mac] = ACTIONS(128),
    [sym_uuid] = ACTIONS(126),
    [sym_md5] = ACTIONS(128),
    [sym_sha1] = ACTIONS(128),
    [sym_sha224] = ACTIONS(128),
    [sym_sha256] = ACTIONS(128),
    [sym_sha384] = ACTIONS(128),
    [sym_sha512] = ACTIONS(126),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_trace_COLON] = ACTIONS(130),
    [anon_sym_Trace] = ACTIONS(132),
    [anon_sym_TRACE] = ACTIONS(132),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(130),
    [anon_sym_Verbose] = ACTIONS(132),
    [anon_sym_VERBOSE] = ACTIONS(132),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(130),
    [anon_sym_V_SLASH] = ACTIONS(130),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(130),
    [anon_sym_debug_COLON] = ACTIONS(130),
    [anon_sym_Debug] = ACTIONS(132),
    [anon_sym_DEBUG] = ACTIONS(132),
    [anon_sym_D_SLASH] = ACTIONS(130),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(130),
    [anon_sym_information_COLON] = ACTIONS(130),
    [anon_sym_info_COLON] = ACTIONS(130),
    [anon_sym_INFO] = ACTIONS(132),
    [anon_sym_INFORMATION] = ACTIONS(132),
    [anon_sym_NOTICE] = ACTIONS(132),
    [anon_sym_I_SLASH] = ACTIONS(130),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(130),
    [anon_sym_warning_COLON] = ACTIONS(130),
    [anon_sym_warning] = ACTIONS(130),
    [anon_sym_Warn] = ACTIONS(132),
    [anon_sym_WARN] = ACTIONS(132),
    [anon_sym_WARNING] = ACTIONS(132),
    [anon_sym_W_SLASH] = ACTIONS(130),
    [anon_sym_Warning] = ACTIONS(132),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(130),
    [anon_sym_error_COLON] = ACTIONS(130),
    [anon_sym_error] = ACTIONS(130),
    [anon_sym_Error] = ACTIONS(132),
    [anon_sym_ERROR] = ACTIONS(132),
    [anon_sym_ALERT] = ACTIONS(132),
    [anon_sym_CRITICAL] = ACTIONS(132),
    [anon_sym_EMERGENCY] = ACTIONS(132),
    [anon_sym_FAILURE] = ACTIONS(132),
    [anon_sym_FAIL] = ACTIONS(132),
    [anon_sym_Fatal] = ACTIONS(132),
    [anon_sym_FATAL] = ACTIONS(132),
    [anon_sym_E_SLASH] = ACTIONS(130),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(130),
    [sym_year_month_day] = ACTIONS(132),
    [sym_time] = ACTIONS(132),
    [anon_sym_true] = ACTIONS(132),
    [anon_sym_True] = ACTIONS(132),
    [anon_sym_TRUE] = ACTIONS(132),
    [anon_sym_false] = ACTIONS(132),
    [anon_sym_False] = ACTIONS(132),
    [anon_sym_FALSE] = ACTIONS(132),
    [anon_sym_null] = ACTIONS(132),
    [anon_sym_Null] = ACTIONS(132),
    [anon_sym_NULL] = ACTIONS(132),
    [sym__raw_string_literal] = ACTIONS(132),
    [sym__interpreted_double_string] = ACTIONS(130),
    [sym__interpreted_single_string] = ACTIONS(132),
    [aux_sym_number_token1] = ACTIONS(132),
    [aux_sym_number_token2] = ACTIONS(132),
    [aux_sym_number_token3] = ACTIONS(132),
    [aux_sym_number_token4] = ACTIONS(132),
    [aux_sym_number_token5] = ACTIONS(132),
    [aux_sym_number_token6] = ACTIONS(132),
    [aux_sym_number_token7] = ACTIONS(132),
    [aux_sym_number_token8] = ACTIONS(132),
    [aux_sym_number_token9] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_word] = ACTIONS(132),
    [sym_url] = ACTIONS(130),
    [aux_sym_file_path_token1] = ACTIONS(130),
    [aux_sym_file_path_token2] = ACTIONS(132),
    [sym_ipv4] = ACTIONS(130),
    [sym_ipv6] = ACTIONS(130),
    [sym_mac] = ACTIONS(132),
    [sym_uuid] = ACTIONS(130),
    [sym_md5] = ACTIONS(132),
    [sym_sha1] = ACTIONS(132),
    [sym_sha224] = ACTIONS(132),
    [sym_sha256] = ACTIONS(132),
    [sym_sha384] = ACTIONS(132),
    [sym_sha512] = ACTIONS(130),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_trace_COLON] = ACTIONS(134),
    [anon_sym_Trace] = ACTIONS(136),
    [anon_sym_TRACE] = ACTIONS(136),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(134),
    [anon_sym_Verbose] = ACTIONS(136),
    [anon_sym_VERBOSE] = ACTIONS(136),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(134),
    [anon_sym_V_SLASH] = ACTIONS(134),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(134),
    [anon_sym_debug_COLON] = ACTIONS(134),
    [anon_sym_Debug] = ACTIONS(136),
    [anon_sym_DEBUG] = ACTIONS(136),
    [anon_sym_D_SLASH] = ACTIONS(134),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(134),
    [anon_sym_information_COLON] = ACTIONS(134),
    [anon_sym_info_COLON] = ACTIONS(134),
    [anon_sym_INFO] = ACTIONS(136),
    [anon_sym_INFORMATION] = ACTIONS(136),
    [anon_sym_NOTICE] = ACTIONS(136),
    [anon_sym_I_SLASH] = ACTIONS(134),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(134),
    [anon_sym_warning_COLON] = ACTIONS(134),
    [anon_sym_warning] = ACTIONS(134),
    [anon_sym_Warn] = ACTIONS(136),
    [anon_sym_WARN] = ACTIONS(136),
    [anon_sym_WARNING] = ACTIONS(136),
    [anon_sym_W_SLASH] = ACTIONS(134),
    [anon_sym_Warning] = ACTIONS(136),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(134),
    [anon_sym_error_COLON] = ACTIONS(134),
    [anon_sym_error] = ACTIONS(134),
    [anon_sym_Error] = ACTIONS(136),
    [anon_sym_ERROR] = ACTIONS(136),
    [anon_sym_ALERT] = ACTIONS(136),
    [anon_sym_CRITICAL] = ACTIONS(136),
    [anon_sym_EMERGENCY] = ACTIONS(136),
    [anon_sym_FAILURE] = ACTIONS(136),
    [anon_sym_FAIL] = ACTIONS(136),
    [anon_sym_Fatal] = ACTIONS(136),
    [anon_sym_FATAL] = ACTIONS(136),
    [anon_sym_E_SLASH] = ACTIONS(134),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(134),
    [sym_year_month_day] = ACTIONS(136),
    [sym_time] = ACTIONS(136),
    [anon_sym_true] = ACTIONS(136),
    [anon_sym_True] = ACTIONS(136),
    [anon_sym_TRUE] = ACTIONS(136),
    [anon_sym_false] = ACTIONS(136),
    [anon_sym_False] = ACTIONS(136),
    [anon_sym_FALSE] = ACTIONS(136),
    [anon_sym_null] = ACTIONS(136),
    [anon_sym_Null] = ACTIONS(136),
    [anon_sym_NULL] = ACTIONS(136),
    [sym__raw_string_literal] = ACTIONS(136),
    [sym__interpreted_double_string] = ACTIONS(134),
    [sym__interpreted_single_string] = ACTIONS(136),
    [aux_sym_number_token1] = ACTIONS(136),
    [aux_sym_number_token2] = ACTIONS(136),
    [aux_sym_number_token3] = ACTIONS(136),
    [aux_sym_number_token4] = ACTIONS(136),
    [aux_sym_number_token5] = ACTIONS(136),
    [aux_sym_number_token6] = ACTIONS(136),
    [aux_sym_number_token7] = ACTIONS(136),
    [aux_sym_number_token8] = ACTIONS(136),
    [aux_sym_number_token9] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(134),
    [sym_word] = ACTIONS(136),
    [sym_url] = ACTIONS(134),
    [aux_sym_file_path_token1] = ACTIONS(134),
    [aux_sym_file_path_token2] = ACTIONS(136),
    [sym_ipv4] = ACTIONS(134),
    [sym_ipv6] = ACTIONS(134),
    [sym_mac] = ACTIONS(136),
    [sym_uuid] = ACTIONS(134),
    [sym_md5] = ACTIONS(136),
    [sym_sha1] = ACTIONS(136),
    [sym_sha224] = ACTIONS(136),
    [sym_sha256] = ACTIONS(136),
    [sym_sha384] = ACTIONS(136),
    [sym_sha512] = ACTIONS(134),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_trace_COLON] = ACTIONS(138),
    [anon_sym_Trace] = ACTIONS(140),
    [anon_sym_TRACE] = ACTIONS(140),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(138),
    [anon_sym_Verbose] = ACTIONS(140),
    [anon_sym_VERBOSE] = ACTIONS(140),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(138),
    [anon_sym_V_SLASH] = ACTIONS(138),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(138),
    [anon_sym_debug_COLON] = ACTIONS(138),
    [anon_sym_Debug] = ACTIONS(140),
    [anon_sym_DEBUG] = ACTIONS(140),
    [anon_sym_D_SLASH] = ACTIONS(138),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(138),
    [anon_sym_information_COLON] = ACTIONS(138),
    [anon_sym_info_COLON] = ACTIONS(138),
    [anon_sym_INFO] = ACTIONS(140),
    [anon_sym_INFORMATION] = ACTIONS(140),
    [anon_sym_NOTICE] = ACTIONS(140),
    [anon_sym_I_SLASH] = ACTIONS(138),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(138),
    [anon_sym_warning_COLON] = ACTIONS(138),
    [anon_sym_warning] = ACTIONS(138),
    [anon_sym_Warn] = ACTIONS(140),
    [anon_sym_WARN] = ACTIONS(140),
    [anon_sym_WARNING] = ACTIONS(140),
    [anon_sym_W_SLASH] = ACTIONS(138),
    [anon_sym_Warning] = ACTIONS(140),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(138),
    [anon_sym_error_COLON] = ACTIONS(138),
    [anon_sym_error] = ACTIONS(138),
    [anon_sym_Error] = ACTIONS(140),
    [anon_sym_ERROR] = ACTIONS(140),
    [anon_sym_ALERT] = ACTIONS(140),
    [anon_sym_CRITICAL] = ACTIONS(140),
    [anon_sym_EMERGENCY] = ACTIONS(140),
    [anon_sym_FAILURE] = ACTIONS(140),
    [anon_sym_FAIL] = ACTIONS(140),
    [anon_sym_Fatal] = ACTIONS(140),
    [anon_sym_FATAL] = ACTIONS(140),
    [anon_sym_E_SLASH] = ACTIONS(138),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(138),
    [sym_year_month_day] = ACTIONS(140),
    [sym_time] = ACTIONS(140),
    [anon_sym_true] = ACTIONS(140),
    [anon_sym_True] = ACTIONS(140),
    [anon_sym_TRUE] = ACTIONS(140),
    [anon_sym_false] = ACTIONS(140),
    [anon_sym_False] = ACTIONS(140),
    [anon_sym_FALSE] = ACTIONS(140),
    [anon_sym_null] = ACTIONS(140),
    [anon_sym_Null] = ACTIONS(140),
    [anon_sym_NULL] = ACTIONS(140),
    [sym__raw_string_literal] = ACTIONS(140),
    [sym__interpreted_double_string] = ACTIONS(138),
    [sym__interpreted_single_string] = ACTIONS(140),
    [aux_sym_number_token1] = ACTIONS(140),
    [aux_sym_number_token2] = ACTIONS(140),
    [aux_sym_number_token3] = ACTIONS(140),
    [aux_sym_number_token4] = ACTIONS(140),
    [aux_sym_number_token5] = ACTIONS(140),
    [aux_sym_number_token6] = ACTIONS(140),
    [aux_sym_number_token7] = ACTIONS(140),
    [aux_sym_number_token8] = ACTIONS(140),
    [aux_sym_number_token9] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_RBRACE] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(138),
    [sym_word] = ACTIONS(140),
    [sym_url] = ACTIONS(138),
    [aux_sym_file_path_token1] = ACTIONS(138),
    [aux_sym_file_path_token2] = ACTIONS(140),
    [sym_ipv4] = ACTIONS(138),
    [sym_ipv6] = ACTIONS(138),
    [sym_mac] = ACTIONS(140),
    [sym_uuid] = ACTIONS(138),
    [sym_md5] = ACTIONS(140),
    [sym_sha1] = ACTIONS(140),
    [sym_sha224] = ACTIONS(140),
    [sym_sha256] = ACTIONS(140),
    [sym_sha384] = ACTIONS(140),
    [sym_sha512] = ACTIONS(138),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_trace_COLON] = ACTIONS(142),
    [anon_sym_Trace] = ACTIONS(144),
    [anon_sym_TRACE] = ACTIONS(144),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(142),
    [anon_sym_Verbose] = ACTIONS(144),
    [anon_sym_VERBOSE] = ACTIONS(144),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(142),
    [anon_sym_V_SLASH] = ACTIONS(142),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(142),
    [anon_sym_debug_COLON] = ACTIONS(142),
    [anon_sym_Debug] = ACTIONS(144),
    [anon_sym_DEBUG] = ACTIONS(144),
    [anon_sym_D_SLASH] = ACTIONS(142),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(142),
    [anon_sym_information_COLON] = ACTIONS(142),
    [anon_sym_info_COLON] = ACTIONS(142),
    [anon_sym_INFO] = ACTIONS(144),
    [anon_sym_INFORMATION] = ACTIONS(144),
    [anon_sym_NOTICE] = ACTIONS(144),
    [anon_sym_I_SLASH] = ACTIONS(142),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(142),
    [anon_sym_warning_COLON] = ACTIONS(142),
    [anon_sym_warning] = ACTIONS(142),
    [anon_sym_Warn] = ACTIONS(144),
    [anon_sym_WARN] = ACTIONS(144),
    [anon_sym_WARNING] = ACTIONS(144),
    [anon_sym_W_SLASH] = ACTIONS(142),
    [anon_sym_Warning] = ACTIONS(144),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(142),
    [anon_sym_error_COLON] = ACTIONS(142),
    [anon_sym_error] = ACTIONS(142),
    [anon_sym_Error] = ACTIONS(144),
    [anon_sym_ERROR] = ACTIONS(144),
    [anon_sym_ALERT] = ACTIONS(144),
    [anon_sym_CRITICAL] = ACTIONS(144),
    [anon_sym_EMERGENCY] = ACTIONS(144),
    [anon_sym_FAILURE] = ACTIONS(144),
    [anon_sym_FAIL] = ACTIONS(144),
    [anon_sym_Fatal] = ACTIONS(144),
    [anon_sym_FATAL] = ACTIONS(144),
    [anon_sym_E_SLASH] = ACTIONS(142),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(142),
    [sym_year_month_day] = ACTIONS(144),
    [sym_time] = ACTIONS(144),
    [anon_sym_true] = ACTIONS(144),
    [anon_sym_True] = ACTIONS(144),
    [anon_sym_TRUE] = ACTIONS(144),
    [anon_sym_false] = ACTIONS(144),
    [anon_sym_False] = ACTIONS(144),
    [anon_sym_FALSE] = ACTIONS(144),
    [anon_sym_null] = ACTIONS(144),
    [anon_sym_Null] = ACTIONS(144),
    [anon_sym_NULL] = ACTIONS(144),
    [sym__raw_string_literal] = ACTIONS(144),
    [sym__interpreted_double_string] = ACTIONS(142),
    [sym__interpreted_single_string] = ACTIONS(144),
    [aux_sym_number_token1] = ACTIONS(144),
    [aux_sym_number_token2] = ACTIONS(144),
    [aux_sym_number_token3] = ACTIONS(144),
    [aux_sym_number_token4] = ACTIONS(144),
    [aux_sym_number_token5] = ACTIONS(144),
    [aux_sym_number_token6] = ACTIONS(144),
    [aux_sym_number_token7] = ACTIONS(144),
    [aux_sym_number_token8] = ACTIONS(144),
    [aux_sym_number_token9] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(142),
    [sym_word] = ACTIONS(144),
    [sym_url] = ACTIONS(142),
    [aux_sym_file_path_token1] = ACTIONS(142),
    [aux_sym_file_path_token2] = ACTIONS(144),
    [sym_ipv4] = ACTIONS(142),
    [sym_ipv6] = ACTIONS(142),
    [sym_mac] = ACTIONS(144),
    [sym_uuid] = ACTIONS(142),
    [sym_md5] = ACTIONS(144),
    [sym_sha1] = ACTIONS(144),
    [sym_sha224] = ACTIONS(144),
    [sym_sha256] = ACTIONS(144),
    [sym_sha384] = ACTIONS(144),
    [sym_sha512] = ACTIONS(142),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_trace_COLON] = ACTIONS(146),
    [anon_sym_Trace] = ACTIONS(148),
    [anon_sym_TRACE] = ACTIONS(148),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(146),
    [anon_sym_Verbose] = ACTIONS(148),
    [anon_sym_VERBOSE] = ACTIONS(148),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(146),
    [anon_sym_V_SLASH] = ACTIONS(146),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(146),
    [anon_sym_debug_COLON] = ACTIONS(146),
    [anon_sym_Debug] = ACTIONS(148),
    [anon_sym_DEBUG] = ACTIONS(148),
    [anon_sym_D_SLASH] = ACTIONS(146),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(146),
    [anon_sym_information_COLON] = ACTIONS(146),
    [anon_sym_info_COLON] = ACTIONS(146),
    [anon_sym_INFO] = ACTIONS(148),
    [anon_sym_INFORMATION] = ACTIONS(148),
    [anon_sym_NOTICE] = ACTIONS(148),
    [anon_sym_I_SLASH] = ACTIONS(146),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(146),
    [anon_sym_warning_COLON] = ACTIONS(146),
    [anon_sym_warning] = ACTIONS(146),
    [anon_sym_Warn] = ACTIONS(148),
    [anon_sym_WARN] = ACTIONS(148),
    [anon_sym_WARNING] = ACTIONS(148),
    [anon_sym_W_SLASH] = ACTIONS(146),
    [anon_sym_Warning] = ACTIONS(148),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(146),
    [anon_sym_error_COLON] = ACTIONS(146),
    [anon_sym_error] = ACTIONS(146),
    [anon_sym_Error] = ACTIONS(148),
    [anon_sym_ERROR] = ACTIONS(148),
    [anon_sym_ALERT] = ACTIONS(148),
    [anon_sym_CRITICAL] = ACTIONS(148),
    [anon_sym_EMERGENCY] = ACTIONS(148),
    [anon_sym_FAILURE] = ACTIONS(148),
    [anon_sym_FAIL] = ACTIONS(148),
    [anon_sym_Fatal] = ACTIONS(148),
    [anon_sym_FATAL] = ACTIONS(148),
    [anon_sym_E_SLASH] = ACTIONS(146),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(146),
    [sym_year_month_day] = ACTIONS(148),
    [sym_time] = ACTIONS(148),
    [anon_sym_true] = ACTIONS(148),
    [anon_sym_True] = ACTIONS(148),
    [anon_sym_TRUE] = ACTIONS(148),
    [anon_sym_false] = ACTIONS(148),
    [anon_sym_False] = ACTIONS(148),
    [anon_sym_FALSE] = ACTIONS(148),
    [anon_sym_null] = ACTIONS(148),
    [anon_sym_Null] = ACTIONS(148),
    [anon_sym_NULL] = ACTIONS(148),
    [sym__raw_string_literal] = ACTIONS(148),
    [sym__interpreted_double_string] = ACTIONS(146),
    [sym__interpreted_single_string] = ACTIONS(148),
    [aux_sym_number_token1] = ACTIONS(148),
    [aux_sym_number_token2] = ACTIONS(148),
    [aux_sym_number_token3] = ACTIONS(148),
    [aux_sym_number_token4] = ACTIONS(148),
    [aux_sym_number_token5] = ACTIONS(148),
    [aux_sym_number_token6] = ACTIONS(148),
    [aux_sym_number_token7] = ACTIONS(148),
    [aux_sym_number_token8] = ACTIONS(148),
    [aux_sym_number_token9] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(146),
    [sym_word] = ACTIONS(148),
    [sym_url] = ACTIONS(146),
    [aux_sym_file_path_token1] = ACTIONS(146),
    [aux_sym_file_path_token2] = ACTIONS(148),
    [sym_ipv4] = ACTIONS(146),
    [sym_ipv6] = ACTIONS(146),
    [sym_mac] = ACTIONS(148),
    [sym_uuid] = ACTIONS(146),
    [sym_md5] = ACTIONS(148),
    [sym_sha1] = ACTIONS(148),
    [sym_sha224] = ACTIONS(148),
    [sym_sha256] = ACTIONS(148),
    [sym_sha384] = ACTIONS(148),
    [sym_sha512] = ACTIONS(146),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_trace_COLON] = ACTIONS(150),
    [anon_sym_Trace] = ACTIONS(152),
    [anon_sym_TRACE] = ACTIONS(152),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(150),
    [anon_sym_Verbose] = ACTIONS(152),
    [anon_sym_VERBOSE] = ACTIONS(152),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(150),
    [anon_sym_V_SLASH] = ACTIONS(150),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(150),
    [anon_sym_debug_COLON] = ACTIONS(150),
    [anon_sym_Debug] = ACTIONS(152),
    [anon_sym_DEBUG] = ACTIONS(152),
    [anon_sym_D_SLASH] = ACTIONS(150),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(150),
    [anon_sym_information_COLON] = ACTIONS(150),
    [anon_sym_info_COLON] = ACTIONS(150),
    [anon_sym_INFO] = ACTIONS(152),
    [anon_sym_INFORMATION] = ACTIONS(152),
    [anon_sym_NOTICE] = ACTIONS(152),
    [anon_sym_I_SLASH] = ACTIONS(150),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(150),
    [anon_sym_warning_COLON] = ACTIONS(150),
    [anon_sym_warning] = ACTIONS(150),
    [anon_sym_Warn] = ACTIONS(152),
    [anon_sym_WARN] = ACTIONS(152),
    [anon_sym_WARNING] = ACTIONS(152),
    [anon_sym_W_SLASH] = ACTIONS(150),
    [anon_sym_Warning] = ACTIONS(152),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(150),
    [anon_sym_error_COLON] = ACTIONS(150),
    [anon_sym_error] = ACTIONS(150),
    [anon_sym_Error] = ACTIONS(152),
    [anon_sym_ERROR] = ACTIONS(152),
    [anon_sym_ALERT] = ACTIONS(152),
    [anon_sym_CRITICAL] = ACTIONS(152),
    [anon_sym_EMERGENCY] = ACTIONS(152),
    [anon_sym_FAILURE] = ACTIONS(152),
    [anon_sym_FAIL] = ACTIONS(152),
    [anon_sym_Fatal] = ACTIONS(152),
    [anon_sym_FATAL] = ACTIONS(152),
    [anon_sym_E_SLASH] = ACTIONS(150),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(150),
    [sym_year_month_day] = ACTIONS(152),
    [sym_time] = ACTIONS(152),
    [anon_sym_true] = ACTIONS(152),
    [anon_sym_True] = ACTIONS(152),
    [anon_sym_TRUE] = ACTIONS(152),
    [anon_sym_false] = ACTIONS(152),
    [anon_sym_False] = ACTIONS(152),
    [anon_sym_FALSE] = ACTIONS(152),
    [anon_sym_null] = ACTIONS(152),
    [anon_sym_Null] = ACTIONS(152),
    [anon_sym_NULL] = ACTIONS(152),
    [sym__raw_string_literal] = ACTIONS(152),
    [sym__interpreted_double_string] = ACTIONS(150),
    [sym__interpreted_single_string] = ACTIONS(152),
    [aux_sym_number_token1] = ACTIONS(152),
    [aux_sym_number_token2] = ACTIONS(152),
    [aux_sym_number_token3] = ACTIONS(152),
    [aux_sym_number_token4] = ACTIONS(152),
    [aux_sym_number_token5] = ACTIONS(152),
    [aux_sym_number_token6] = ACTIONS(152),
    [aux_sym_number_token7] = ACTIONS(152),
    [aux_sym_number_token8] = ACTIONS(152),
    [aux_sym_number_token9] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(150),
    [sym_word] = ACTIONS(152),
    [sym_url] = ACTIONS(150),
    [aux_sym_file_path_token1] = ACTIONS(150),
    [aux_sym_file_path_token2] = ACTIONS(152),
    [sym_ipv4] = ACTIONS(150),
    [sym_ipv6] = ACTIONS(150),
    [sym_mac] = ACTIONS(152),
    [sym_uuid] = ACTIONS(150),
    [sym_md5] = ACTIONS(152),
    [sym_sha1] = ACTIONS(152),
    [sym_sha224] = ACTIONS(152),
    [sym_sha256] = ACTIONS(152),
    [sym_sha384] = ACTIONS(152),
    [sym_sha512] = ACTIONS(150),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_trace_COLON] = ACTIONS(154),
    [anon_sym_Trace] = ACTIONS(156),
    [anon_sym_TRACE] = ACTIONS(156),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(154),
    [anon_sym_Verbose] = ACTIONS(156),
    [anon_sym_VERBOSE] = ACTIONS(156),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(154),
    [anon_sym_V_SLASH] = ACTIONS(154),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(154),
    [anon_sym_debug_COLON] = ACTIONS(154),
    [anon_sym_Debug] = ACTIONS(156),
    [anon_sym_DEBUG] = ACTIONS(156),
    [anon_sym_D_SLASH] = ACTIONS(154),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(154),
    [anon_sym_information_COLON] = ACTIONS(154),
    [anon_sym_info_COLON] = ACTIONS(154),
    [anon_sym_INFO] = ACTIONS(156),
    [anon_sym_INFORMATION] = ACTIONS(156),
    [anon_sym_NOTICE] = ACTIONS(156),
    [anon_sym_I_SLASH] = ACTIONS(154),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(154),
    [anon_sym_warning_COLON] = ACTIONS(154),
    [anon_sym_warning] = ACTIONS(154),
    [anon_sym_Warn] = ACTIONS(156),
    [anon_sym_WARN] = ACTIONS(156),
    [anon_sym_WARNING] = ACTIONS(156),
    [anon_sym_W_SLASH] = ACTIONS(154),
    [anon_sym_Warning] = ACTIONS(156),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(154),
    [anon_sym_error_COLON] = ACTIONS(154),
    [anon_sym_error] = ACTIONS(154),
    [anon_sym_Error] = ACTIONS(156),
    [anon_sym_ERROR] = ACTIONS(156),
    [anon_sym_ALERT] = ACTIONS(156),
    [anon_sym_CRITICAL] = ACTIONS(156),
    [anon_sym_EMERGENCY] = ACTIONS(156),
    [anon_sym_FAILURE] = ACTIONS(156),
    [anon_sym_FAIL] = ACTIONS(156),
    [anon_sym_Fatal] = ACTIONS(156),
    [anon_sym_FATAL] = ACTIONS(156),
    [anon_sym_E_SLASH] = ACTIONS(154),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(154),
    [sym_year_month_day] = ACTIONS(156),
    [sym_time] = ACTIONS(156),
    [anon_sym_true] = ACTIONS(156),
    [anon_sym_True] = ACTIONS(156),
    [anon_sym_TRUE] = ACTIONS(156),
    [anon_sym_false] = ACTIONS(156),
    [anon_sym_False] = ACTIONS(156),
    [anon_sym_FALSE] = ACTIONS(156),
    [anon_sym_null] = ACTIONS(156),
    [anon_sym_Null] = ACTIONS(156),
    [anon_sym_NULL] = ACTIONS(156),
    [sym__raw_string_literal] = ACTIONS(156),
    [sym__interpreted_double_string] = ACTIONS(154),
    [sym__interpreted_single_string] = ACTIONS(156),
    [aux_sym_number_token1] = ACTIONS(156),
    [aux_sym_number_token2] = ACTIONS(156),
    [aux_sym_number_token3] = ACTIONS(156),
    [aux_sym_number_token4] = ACTIONS(156),
    [aux_sym_number_token5] = ACTIONS(156),
    [aux_sym_number_token6] = ACTIONS(156),
    [aux_sym_number_token7] = ACTIONS(156),
    [aux_sym_number_token8] = ACTIONS(156),
    [aux_sym_number_token9] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(154),
    [sym_word] = ACTIONS(156),
    [sym_url] = ACTIONS(154),
    [aux_sym_file_path_token1] = ACTIONS(154),
    [aux_sym_file_path_token2] = ACTIONS(156),
    [sym_ipv4] = ACTIONS(154),
    [sym_ipv6] = ACTIONS(154),
    [sym_mac] = ACTIONS(156),
    [sym_uuid] = ACTIONS(154),
    [sym_md5] = ACTIONS(156),
    [sym_sha1] = ACTIONS(156),
    [sym_sha224] = ACTIONS(156),
    [sym_sha256] = ACTIONS(156),
    [sym_sha384] = ACTIONS(156),
    [sym_sha512] = ACTIONS(154),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_trace_COLON] = ACTIONS(158),
    [anon_sym_Trace] = ACTIONS(160),
    [anon_sym_TRACE] = ACTIONS(160),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(158),
    [anon_sym_Verbose] = ACTIONS(160),
    [anon_sym_VERBOSE] = ACTIONS(160),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(158),
    [anon_sym_V_SLASH] = ACTIONS(158),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(158),
    [anon_sym_debug_COLON] = ACTIONS(158),
    [anon_sym_Debug] = ACTIONS(160),
    [anon_sym_DEBUG] = ACTIONS(160),
    [anon_sym_D_SLASH] = ACTIONS(158),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(158),
    [anon_sym_information_COLON] = ACTIONS(158),
    [anon_sym_info_COLON] = ACTIONS(158),
    [anon_sym_INFO] = ACTIONS(160),
    [anon_sym_INFORMATION] = ACTIONS(160),
    [anon_sym_NOTICE] = ACTIONS(160),
    [anon_sym_I_SLASH] = ACTIONS(158),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(158),
    [anon_sym_warning_COLON] = ACTIONS(158),
    [anon_sym_warning] = ACTIONS(158),
    [anon_sym_Warn] = ACTIONS(160),
    [anon_sym_WARN] = ACTIONS(160),
    [anon_sym_WARNING] = ACTIONS(160),
    [anon_sym_W_SLASH] = ACTIONS(158),
    [anon_sym_Warning] = ACTIONS(160),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(158),
    [anon_sym_error_COLON] = ACTIONS(158),
    [anon_sym_error] = ACTIONS(158),
    [anon_sym_Error] = ACTIONS(160),
    [anon_sym_ERROR] = ACTIONS(160),
    [anon_sym_ALERT] = ACTIONS(160),
    [anon_sym_CRITICAL] = ACTIONS(160),
    [anon_sym_EMERGENCY] = ACTIONS(160),
    [anon_sym_FAILURE] = ACTIONS(160),
    [anon_sym_FAIL] = ACTIONS(160),
    [anon_sym_Fatal] = ACTIONS(160),
    [anon_sym_FATAL] = ACTIONS(160),
    [anon_sym_E_SLASH] = ACTIONS(158),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(158),
    [sym_year_month_day] = ACTIONS(160),
    [sym_time] = ACTIONS(160),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_True] = ACTIONS(160),
    [anon_sym_TRUE] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [anon_sym_False] = ACTIONS(160),
    [anon_sym_FALSE] = ACTIONS(160),
    [anon_sym_null] = ACTIONS(160),
    [anon_sym_Null] = ACTIONS(160),
    [anon_sym_NULL] = ACTIONS(160),
    [sym__raw_string_literal] = ACTIONS(160),
    [sym__interpreted_double_string] = ACTIONS(158),
    [sym__interpreted_single_string] = ACTIONS(160),
    [aux_sym_number_token1] = ACTIONS(160),
    [aux_sym_number_token2] = ACTIONS(160),
    [aux_sym_number_token3] = ACTIONS(160),
    [aux_sym_number_token4] = ACTIONS(160),
    [aux_sym_number_token5] = ACTIONS(160),
    [aux_sym_number_token6] = ACTIONS(160),
    [aux_sym_number_token7] = ACTIONS(160),
    [aux_sym_number_token8] = ACTIONS(160),
    [aux_sym_number_token9] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_word] = ACTIONS(160),
    [sym_url] = ACTIONS(158),
    [aux_sym_file_path_token1] = ACTIONS(158),
    [aux_sym_file_path_token2] = ACTIONS(160),
    [sym_ipv4] = ACTIONS(158),
    [sym_ipv6] = ACTIONS(158),
    [sym_mac] = ACTIONS(160),
    [sym_uuid] = ACTIONS(158),
    [sym_md5] = ACTIONS(160),
    [sym_sha1] = ACTIONS(160),
    [sym_sha224] = ACTIONS(160),
    [sym_sha256] = ACTIONS(160),
    [sym_sha384] = ACTIONS(160),
    [sym_sha512] = ACTIONS(158),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_trace_COLON] = ACTIONS(162),
    [anon_sym_Trace] = ACTIONS(164),
    [anon_sym_TRACE] = ACTIONS(164),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(162),
    [anon_sym_Verbose] = ACTIONS(164),
    [anon_sym_VERBOSE] = ACTIONS(164),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(162),
    [anon_sym_V_SLASH] = ACTIONS(162),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(162),
    [anon_sym_debug_COLON] = ACTIONS(162),
    [anon_sym_Debug] = ACTIONS(164),
    [anon_sym_DEBUG] = ACTIONS(164),
    [anon_sym_D_SLASH] = ACTIONS(162),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(162),
    [anon_sym_information_COLON] = ACTIONS(162),
    [anon_sym_info_COLON] = ACTIONS(162),
    [anon_sym_INFO] = ACTIONS(164),
    [anon_sym_INFORMATION] = ACTIONS(164),
    [anon_sym_NOTICE] = ACTIONS(164),
    [anon_sym_I_SLASH] = ACTIONS(162),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(162),
    [anon_sym_warning_COLON] = ACTIONS(162),
    [anon_sym_warning] = ACTIONS(162),
    [anon_sym_Warn] = ACTIONS(164),
    [anon_sym_WARN] = ACTIONS(164),
    [anon_sym_WARNING] = ACTIONS(164),
    [anon_sym_W_SLASH] = ACTIONS(162),
    [anon_sym_Warning] = ACTIONS(164),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(162),
    [anon_sym_error_COLON] = ACTIONS(162),
    [anon_sym_error] = ACTIONS(162),
    [anon_sym_Error] = ACTIONS(164),
    [anon_sym_ERROR] = ACTIONS(164),
    [anon_sym_ALERT] = ACTIONS(164),
    [anon_sym_CRITICAL] = ACTIONS(164),
    [anon_sym_EMERGENCY] = ACTIONS(164),
    [anon_sym_FAILURE] = ACTIONS(164),
    [anon_sym_FAIL] = ACTIONS(164),
    [anon_sym_Fatal] = ACTIONS(164),
    [anon_sym_FATAL] = ACTIONS(164),
    [anon_sym_E_SLASH] = ACTIONS(162),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(162),
    [sym_year_month_day] = ACTIONS(164),
    [sym_time] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_True] = ACTIONS(164),
    [anon_sym_TRUE] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [anon_sym_False] = ACTIONS(164),
    [anon_sym_FALSE] = ACTIONS(164),
    [anon_sym_null] = ACTIONS(164),
    [anon_sym_Null] = ACTIONS(164),
    [anon_sym_NULL] = ACTIONS(164),
    [sym__raw_string_literal] = ACTIONS(164),
    [sym__interpreted_double_string] = ACTIONS(162),
    [sym__interpreted_single_string] = ACTIONS(164),
    [aux_sym_number_token1] = ACTIONS(164),
    [aux_sym_number_token2] = ACTIONS(164),
    [aux_sym_number_token3] = ACTIONS(164),
    [aux_sym_number_token4] = ACTIONS(164),
    [aux_sym_number_token5] = ACTIONS(164),
    [aux_sym_number_token6] = ACTIONS(164),
    [aux_sym_number_token7] = ACTIONS(164),
    [aux_sym_number_token8] = ACTIONS(164),
    [aux_sym_number_token9] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(162),
    [sym_word] = ACTIONS(164),
    [sym_url] = ACTIONS(162),
    [aux_sym_file_path_token1] = ACTIONS(162),
    [aux_sym_file_path_token2] = ACTIONS(164),
    [sym_ipv4] = ACTIONS(162),
    [sym_ipv6] = ACTIONS(162),
    [sym_mac] = ACTIONS(164),
    [sym_uuid] = ACTIONS(162),
    [sym_md5] = ACTIONS(164),
    [sym_sha1] = ACTIONS(164),
    [sym_sha224] = ACTIONS(164),
    [sym_sha256] = ACTIONS(164),
    [sym_sha384] = ACTIONS(164),
    [sym_sha512] = ACTIONS(162),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
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
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(10),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(12),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(13),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(14),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(14),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(13),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trace, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_info, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objects, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objects, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_path, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
