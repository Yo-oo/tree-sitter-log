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
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_trace_COLON = 1,
  anon_sym_trace = 2,
  anon_sym_Trace = 3,
  anon_sym_TRACE = 4,
  anon_sym_LBRACKtrace_RBRACK = 5,
  anon_sym_Verbose = 6,
  anon_sym_VERBOSE = 7,
  anon_sym_LBRACKverbose_RBRACK = 8,
  anon_sym_V_SLASH = 9,
  anon_sym_LBRACKverb_RBRACK = 10,
  anon_sym_LBRACKvrb_RBRACK = 11,
  anon_sym_LBRACKvb_RBRACK = 12,
  anon_sym_LBRACKv_RBRACK = 13,
  anon_sym_debug_COLON = 14,
  anon_sym_debug = 15,
  anon_sym_Debug = 16,
  anon_sym_DEBUG = 17,
  anon_sym_D_SLASH = 18,
  anon_sym_LBRACKdebug_RBRACK = 19,
  anon_sym_LBRACKdbug_RBRACK = 20,
  anon_sym_LBRACKdbg_RBRACK = 21,
  anon_sym_LBRACKde_RBRACK = 22,
  anon_sym_LBRACKd_RBRACK = 23,
  anon_sym_information_COLON = 24,
  anon_sym_info = 25,
  anon_sym_INFO = 26,
  anon_sym_INFORMATION = 27,
  anon_sym_NOTICE = 28,
  anon_sym_I_SLASH = 29,
  anon_sym_LBRACKinfo_RBRACK = 30,
  anon_sym_LBRACKinf_RBRACK = 31,
  anon_sym_LBRACKin_RBRACK = 32,
  anon_sym_LBRACKi_RBRACK = 33,
  anon_sym_warning_COLON = 34,
  anon_sym_warning = 35,
  anon_sym_Warn = 36,
  anon_sym_WARN = 37,
  anon_sym_WARNING = 38,
  anon_sym_W_SLASH = 39,
  anon_sym_Warning = 40,
  anon_sym_LBRACKwarning_RBRACK = 41,
  anon_sym_LBRACKwarn_RBRACK = 42,
  anon_sym_LBRACKwrn_RBRACK = 43,
  anon_sym_LBRACKwn_RBRACK = 44,
  anon_sym_LBRACKw_RBRACK = 45,
  anon_sym_error_COLON = 46,
  anon_sym_error = 47,
  anon_sym_Error = 48,
  anon_sym_ERROR = 49,
  anon_sym_ALERT = 50,
  anon_sym_CRITICAL = 51,
  anon_sym_EMERGENCY = 52,
  anon_sym_FAILURE = 53,
  anon_sym_FAIL = 54,
  anon_sym_Fatal = 55,
  anon_sym_FATAL = 56,
  anon_sym_E_SLASH = 57,
  anon_sym_LBRACKcritical_RBRACK = 58,
  anon_sym_LBRACKerror_RBRACK = 59,
  anon_sym_LBRACKerr_RBRACK = 60,
  anon_sym_LBRACKer_RBRACK = 61,
  anon_sym_LBRACKe_RBRACK = 62,
  sym_year_month_day = 63,
  sym_time = 64,
  anon_sym_true = 65,
  anon_sym_True = 66,
  anon_sym_TRUE = 67,
  anon_sym_false = 68,
  anon_sym_False = 69,
  anon_sym_FALSE = 70,
  anon_sym_null = 71,
  anon_sym_Null = 72,
  anon_sym_NULL = 73,
  sym__raw_string_literal = 74,
  sym__interpreted_double_string = 75,
  sym__interpreted_single_string = 76,
  aux_sym_number_token1 = 77,
  aux_sym_number_token2 = 78,
  aux_sym_number_token3 = 79,
  aux_sym_number_token4 = 80,
  aux_sym_number_token5 = 81,
  aux_sym_number_token6 = 82,
  aux_sym_number_token7 = 83,
  aux_sym_number_token8 = 84,
  aux_sym_number_token9 = 85,
  anon_sym_LPAREN = 86,
  anon_sym_RPAREN = 87,
  anon_sym_LBRACK = 88,
  anon_sym_RBRACK = 89,
  anon_sym_LBRACE = 90,
  anon_sym_RBRACE = 91,
  anon_sym_EQ = 92,
  anon_sym_DQUOTE = 93,
  anon_sym_COMMA = 94,
  anon_sym_COLON = 95,
  anon_sym_SLASH = 96,
  anon_sym_DASH = 97,
  sym_word = 98,
  sym_log_file = 99,
  sym_log_level = 100,
  sym_trace = 101,
  sym_debug = 102,
  sym_info = 103,
  sym_warn = 104,
  sym_error = 105,
  sym_date = 106,
  sym_constant = 107,
  sym_string_literal = 108,
  sym_number = 109,
  sym__word_separator = 110,
  aux_sym_log_file_repeat1 = 111,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_trace_COLON] = "trace:",
  [anon_sym_trace] = "trace ",
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
  [anon_sym_debug] = "debug ",
  [anon_sym_Debug] = "Debug",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_D_SLASH] = "D/",
  [anon_sym_LBRACKdebug_RBRACK] = "[debug]",
  [anon_sym_LBRACKdbug_RBRACK] = "[dbug]",
  [anon_sym_LBRACKdbg_RBRACK] = "[dbg]",
  [anon_sym_LBRACKde_RBRACK] = "[de]",
  [anon_sym_LBRACKd_RBRACK] = "[d]",
  [anon_sym_information_COLON] = "information:",
  [anon_sym_info] = "info ",
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
  [aux_sym_log_file_repeat1] = "log_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_trace_COLON] = anon_sym_trace_COLON,
  [anon_sym_trace] = anon_sym_trace,
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
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_Debug] = anon_sym_Debug,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_D_SLASH] = anon_sym_D_SLASH,
  [anon_sym_LBRACKdebug_RBRACK] = anon_sym_LBRACKdebug_RBRACK,
  [anon_sym_LBRACKdbug_RBRACK] = anon_sym_LBRACKdbug_RBRACK,
  [anon_sym_LBRACKdbg_RBRACK] = anon_sym_LBRACKdbg_RBRACK,
  [anon_sym_LBRACKde_RBRACK] = anon_sym_LBRACKde_RBRACK,
  [anon_sym_LBRACKd_RBRACK] = anon_sym_LBRACKd_RBRACK,
  [anon_sym_information_COLON] = anon_sym_information_COLON,
  [anon_sym_info] = anon_sym_info,
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
  [anon_sym_trace] = {
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
  [anon_sym_debug] = {
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
  [anon_sym_info] = {
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
    : (c <= ':' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
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
        ? (c >= '/' && c <= ':')
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
    : (c <= '/' || (c < ']'
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
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_6(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
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

static inline bool sym_word_character_set_7(int32_t c) {
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

static inline bool sym_word_character_set_8(int32_t c) {
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
        ? c == ':'
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
    : (c <= '-' || (c < ']'
      ? (c < '='
        ? c == '/'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_12(int32_t c) {
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
      if (eof) ADVANCE(139);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(273);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == '0') ADVANCE(240);
      if (lookahead == '1') ADVANCE(243);
      if (lookahead == '2') ADVANCE(242);
      if (lookahead == '3') ADVANCE(241);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == '=') ADVANCE(262);
      if (lookahead == 'A') ADVANCE(333);
      if (lookahead == 'C') ADVANCE(349);
      if (lookahead == 'D') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(296);
      if (lookahead == 'F') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(297);
      if (lookahead == 'J') ADVANCE(371);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(344);
      if (lookahead == 'O') ADVANCE(382);
      if (lookahead == 'S') ADVANCE(387);
      if (lookahead == 'T') ADVANCE(350);
      if (lookahead == 'V') ADVANCE(298);
      if (lookahead == 'W') ADVANCE(299);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == ']') ADVANCE(259);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == 'f') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead == 'w') ADVANCE(375);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == '1') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == '3') ADVANCE(90);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(120);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == '3') ADVANCE(91);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(124);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '1') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'J') ADVANCE(44);
      if (lookahead == 'M') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(55);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '2') ADVANCE(109);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(111);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(211);
      END_STATE();
    case 12:
      if (lookahead == 'M') ADVANCE(207);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(207);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(211);
      END_STATE();
    case 17:
      if (lookahead == ']') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == ']') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == ']') ADVANCE(152);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(171);
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(151);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(183);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(160);
      END_STATE();
    case 28:
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == ']') ADVANCE(150);
      END_STATE();
    case 31:
      if (lookahead == ']') ADVANCE(182);
      END_STATE();
    case 32:
      if (lookahead == ']') ADVANCE(159);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(169);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(158);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(198);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(144);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(147);
      END_STATE();
    case 40:
      if (lookahead == ']') ADVANCE(180);
      END_STATE();
    case 41:
      if (lookahead == ']') ADVANCE(197);
      END_STATE();
    case 42:
      if (lookahead == '`') ADVANCE(221);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 85:
      if (lookahead == 'v') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'S') ADVANCE(14);
      if (lookahead == 'M') ADVANCE(207);
      END_STATE();
    case 88:
      if (lookahead == 'l' ||
          lookahead == 'n') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(203);
      END_STATE();
    case 91:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(205);
      END_STATE();
    case 92:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      END_STATE();
    case 93:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 94:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 95:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 96:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 97:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 98:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 99:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      END_STATE();
    case 100:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 101:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 102:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 103:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 104:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 105:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(92);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(99);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(9);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(117);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(121);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(122);
      END_STATE();
    case 113:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 114:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 115:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 116:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 133:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 134:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 135:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 136:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 138:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_trace_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_Trace);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACKtrace_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Verbose);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_VERBOSE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LBRACKverbose_RBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_V_SLASH);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACKverb_RBRACK);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACKvrb_RBRACK);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACKvb_RBRACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACKv_RBRACK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_debug_COLON);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Debug);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_D_SLASH);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACKdebug_RBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACKdbug_RBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACKdbg_RBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACKde_RBRACK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACKd_RBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_information_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (lookahead == 'R') ADVANCE(339);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_INFORMATION);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_NOTICE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_I_SLASH);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACKinfo_RBRACK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LBRACKinf_RBRACK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACKin_RBRACK);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACKi_RBRACK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_warning_COLON);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_warning);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_Warn);
      if (lookahead == 'i') ADVANCE(422);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_WARN);
      if (lookahead == 'I') ADVANCE(343);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_WARNING);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_W_SLASH);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Warning);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACKwarning_RBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACKwarn_RBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LBRACKwrn_RBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LBRACKwn_RBRACK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACKw_RBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_error_COLON);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_Error);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ERROR);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ALERT);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_CRITICAL);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_EMERGENCY);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_FAILURE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_FAIL);
      if (lookahead == 'U') ADVANCE(357);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_Fatal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_FATAL);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_E_SLASH);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACKcritical_RBRACK);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACKerror_RBRACK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LBRACKerr_RBRACK);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LBRACKer_RBRACK);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LBRACKe_RBRACK);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_year_month_day);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == 'T') ADVANCE(206);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == 'T') ADVANCE(202);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_year_month_day);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(86);
      if (lookahead == 'G') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == 'U') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(86);
      if (lookahead == 'G') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == 'U') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(207);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead == 'C' ||
          lookahead == 'E' ||
          lookahead == 'M') ADVANCE(86);
      if (lookahead == 'G') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == 'U') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(128);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_True);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_False);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_null);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_Null);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__raw_string_literal);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__interpreted_double_string);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__interpreted_single_string);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(478);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(478);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '0') ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '0') ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(232);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(231);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == '0') ADVANCE(245);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(459);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(473);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(478);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(250);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(478);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(249);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(478);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(478);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(478);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(478);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(478);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(478);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(478);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == ':') ADVANCE(110);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(478);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(300);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(478);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '.') ADVANCE(302);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(478);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(472);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(415);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(478);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == ':') ADVANCE(153);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(478);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == ':') ADVANCE(185);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(478);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == ':') ADVANCE(140);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(478);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == ':') ADVANCE(173);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(478);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(275);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (sym__interpreted_single_string_character_set_2(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(472);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(472);
      if (sym__interpreted_single_string_character_set_1(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(465);
      if (lookahead == '-') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(478);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(466);
      if (lookahead == '-') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (!sym_word_character_set_8(lookahead)) ADVANCE(478);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(5);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(132);
      if (!sym_word_character_set_9(lookahead)) ADVANCE(478);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(378);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(478);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'M') ADVANCE(323);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(434);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(478);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(324);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(478);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == 'E') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(439);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(478);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == 'A') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(438);
      if (!sym_word_character_set_10(lookahead)) ADVANCE(478);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == '1') ADVANCE(235);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(463);
      if (lookahead == '3') ADVANCE(460);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(467);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'D') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(393);
      if (lookahead == 'J') ADVANCE(368);
      if (lookahead == 'M') ADVANCE(369);
      if (lookahead == 'N') ADVANCE(425);
      if (lookahead == 'O') ADVANCE(383);
      if (lookahead == 'S') ADVANCE(394);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(477);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(163);
      if (!sym_word_character_set_11(lookahead)) ADVANCE(478);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(328);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(377);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(312);
      if (lookahead == 'U') ADVANCE(315);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(336);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(337);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(363);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(364);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(348);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(365);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(317);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(318);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(307);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(214);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(217);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(143);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(167);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(192);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(146);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(342);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(355);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(356);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(345);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(156);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(177);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(321);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(334);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'T') ADVANCE(306);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(314);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(346);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(362);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(313);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(400);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(193);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(220);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(195);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(190);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(335);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(308);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(176);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(166);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(311);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(326);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(361);
      if (lookahead == 'U') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 'u') ADVANCE(412);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(165);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(341);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(353);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(359);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(331);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(370);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(347);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(340);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(188);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(310);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(360);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(327);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(319);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(316);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(320);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(189);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(332);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(329);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(330);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(325);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(191);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(222);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(42);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(457);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'u') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'u') ADVANCE(388);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(455);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(414);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(448);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(411);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(440);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(389);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(429);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(451);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(447);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(391);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(398);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(430);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(213);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(212);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(216);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(142);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(215);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(145);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(381);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(271);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(424);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(155);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(269);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(179);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(272);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(426);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(423);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 't') ADVANCE(374);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(219);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(218);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(194);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(409);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(410);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(445);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(373);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(399);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(175);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(407);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(303);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(403);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(405);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(268);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(420);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(435);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(436);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(446);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 'u') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(427);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(187);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(270);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(418);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(380);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(419);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(428);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(376);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(441);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(390);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(392);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(395);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(406);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(401);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(402);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(413);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l' ||
          lookahead == 'n') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l' ||
          lookahead == 'n') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r' ||
          lookahead == 'y') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(204);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (!sym_word_character_set_12(lookahead)) ADVANCE(478);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_word);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_word);
      if (sym__interpreted_single_string_character_set_3(lookahead)) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(478);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(474);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(476);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(478);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_trace_COLON] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
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
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_Debug] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_D_SLASH] = ACTIONS(1),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(1),
    [anon_sym_information_COLON] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
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
  },
  [1] = {
    [sym_log_file] = STATE(14),
    [sym_log_level] = STATE(2),
    [sym_trace] = STATE(13),
    [sym_debug] = STATE(13),
    [sym_info] = STATE(13),
    [sym_warn] = STATE(13),
    [sym_error] = STATE(13),
    [sym_date] = STATE(2),
    [sym_constant] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym_number] = STATE(2),
    [sym__word_separator] = STATE(2),
    [aux_sym_log_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_trace_COLON] = ACTIONS(5),
    [anon_sym_trace] = ACTIONS(5),
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
    [anon_sym_debug] = ACTIONS(9),
    [anon_sym_Debug] = ACTIONS(11),
    [anon_sym_DEBUG] = ACTIONS(11),
    [anon_sym_D_SLASH] = ACTIONS(9),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(9),
    [anon_sym_information_COLON] = ACTIONS(13),
    [anon_sym_info] = ACTIONS(13),
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
    [sym_time] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_TRUE] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_Null] = ACTIONS(29),
    [anon_sym_NULL] = ACTIONS(29),
    [sym__raw_string_literal] = ACTIONS(31),
    [sym__interpreted_double_string] = ACTIONS(33),
    [sym__interpreted_single_string] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(35),
    [aux_sym_number_token2] = ACTIONS(35),
    [aux_sym_number_token3] = ACTIONS(35),
    [aux_sym_number_token4] = ACTIONS(35),
    [aux_sym_number_token5] = ACTIONS(35),
    [aux_sym_number_token6] = ACTIONS(35),
    [aux_sym_number_token7] = ACTIONS(35),
    [aux_sym_number_token8] = ACTIONS(35),
    [aux_sym_number_token9] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [sym_word] = ACTIONS(39),
  },
  [2] = {
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(13),
    [sym_debug] = STATE(13),
    [sym_info] = STATE(13),
    [sym_warn] = STATE(13),
    [sym_error] = STATE(13),
    [sym_date] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_trace_COLON] = ACTIONS(5),
    [anon_sym_trace] = ACTIONS(5),
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
    [anon_sym_debug] = ACTIONS(9),
    [anon_sym_Debug] = ACTIONS(11),
    [anon_sym_DEBUG] = ACTIONS(11),
    [anon_sym_D_SLASH] = ACTIONS(9),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(9),
    [anon_sym_information_COLON] = ACTIONS(13),
    [anon_sym_info] = ACTIONS(13),
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
    [sym_time] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_TRUE] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_Null] = ACTIONS(29),
    [anon_sym_NULL] = ACTIONS(29),
    [sym__raw_string_literal] = ACTIONS(31),
    [sym__interpreted_double_string] = ACTIONS(33),
    [sym__interpreted_single_string] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(35),
    [aux_sym_number_token2] = ACTIONS(35),
    [aux_sym_number_token3] = ACTIONS(35),
    [aux_sym_number_token4] = ACTIONS(35),
    [aux_sym_number_token5] = ACTIONS(35),
    [aux_sym_number_token6] = ACTIONS(35),
    [aux_sym_number_token7] = ACTIONS(35),
    [aux_sym_number_token8] = ACTIONS(35),
    [aux_sym_number_token9] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_word] = ACTIONS(45),
  },
  [3] = {
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(13),
    [sym_debug] = STATE(13),
    [sym_info] = STATE(13),
    [sym_warn] = STATE(13),
    [sym_error] = STATE(13),
    [sym_date] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_trace_COLON] = ACTIONS(49),
    [anon_sym_trace] = ACTIONS(49),
    [anon_sym_Trace] = ACTIONS(52),
    [anon_sym_TRACE] = ACTIONS(52),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(49),
    [anon_sym_Verbose] = ACTIONS(52),
    [anon_sym_VERBOSE] = ACTIONS(52),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(49),
    [anon_sym_V_SLASH] = ACTIONS(49),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(49),
    [anon_sym_debug_COLON] = ACTIONS(55),
    [anon_sym_debug] = ACTIONS(55),
    [anon_sym_Debug] = ACTIONS(58),
    [anon_sym_DEBUG] = ACTIONS(58),
    [anon_sym_D_SLASH] = ACTIONS(55),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(55),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(55),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(55),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(55),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(55),
    [anon_sym_information_COLON] = ACTIONS(61),
    [anon_sym_info] = ACTIONS(61),
    [anon_sym_INFO] = ACTIONS(64),
    [anon_sym_INFORMATION] = ACTIONS(64),
    [anon_sym_NOTICE] = ACTIONS(64),
    [anon_sym_I_SLASH] = ACTIONS(61),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(61),
    [anon_sym_warning_COLON] = ACTIONS(67),
    [anon_sym_warning] = ACTIONS(67),
    [anon_sym_Warn] = ACTIONS(70),
    [anon_sym_WARN] = ACTIONS(70),
    [anon_sym_WARNING] = ACTIONS(70),
    [anon_sym_W_SLASH] = ACTIONS(67),
    [anon_sym_Warning] = ACTIONS(70),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(67),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(67),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(67),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(67),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(67),
    [anon_sym_error_COLON] = ACTIONS(73),
    [anon_sym_error] = ACTIONS(73),
    [anon_sym_Error] = ACTIONS(76),
    [anon_sym_ERROR] = ACTIONS(76),
    [anon_sym_ALERT] = ACTIONS(76),
    [anon_sym_CRITICAL] = ACTIONS(76),
    [anon_sym_EMERGENCY] = ACTIONS(76),
    [anon_sym_FAILURE] = ACTIONS(76),
    [anon_sym_FAIL] = ACTIONS(76),
    [anon_sym_Fatal] = ACTIONS(76),
    [anon_sym_FATAL] = ACTIONS(76),
    [anon_sym_E_SLASH] = ACTIONS(73),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(73),
    [sym_year_month_day] = ACTIONS(79),
    [sym_time] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_True] = ACTIONS(85),
    [anon_sym_TRUE] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [anon_sym_False] = ACTIONS(85),
    [anon_sym_FALSE] = ACTIONS(85),
    [anon_sym_null] = ACTIONS(85),
    [anon_sym_Null] = ACTIONS(85),
    [anon_sym_NULL] = ACTIONS(85),
    [sym__raw_string_literal] = ACTIONS(88),
    [sym__interpreted_double_string] = ACTIONS(91),
    [sym__interpreted_single_string] = ACTIONS(88),
    [aux_sym_number_token1] = ACTIONS(94),
    [aux_sym_number_token2] = ACTIONS(94),
    [aux_sym_number_token3] = ACTIONS(94),
    [aux_sym_number_token4] = ACTIONS(94),
    [aux_sym_number_token5] = ACTIONS(94),
    [aux_sym_number_token6] = ACTIONS(94),
    [aux_sym_number_token7] = ACTIONS(94),
    [aux_sym_number_token8] = ACTIONS(94),
    [aux_sym_number_token9] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_word] = ACTIONS(100),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_trace_COLON] = ACTIONS(103),
    [anon_sym_trace] = ACTIONS(103),
    [anon_sym_Trace] = ACTIONS(105),
    [anon_sym_TRACE] = ACTIONS(105),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(103),
    [anon_sym_Verbose] = ACTIONS(105),
    [anon_sym_VERBOSE] = ACTIONS(105),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(103),
    [anon_sym_V_SLASH] = ACTIONS(103),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(103),
    [anon_sym_debug_COLON] = ACTIONS(103),
    [anon_sym_debug] = ACTIONS(103),
    [anon_sym_Debug] = ACTIONS(105),
    [anon_sym_DEBUG] = ACTIONS(105),
    [anon_sym_D_SLASH] = ACTIONS(103),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(103),
    [anon_sym_information_COLON] = ACTIONS(103),
    [anon_sym_info] = ACTIONS(103),
    [anon_sym_INFO] = ACTIONS(105),
    [anon_sym_INFORMATION] = ACTIONS(105),
    [anon_sym_NOTICE] = ACTIONS(105),
    [anon_sym_I_SLASH] = ACTIONS(103),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(103),
    [anon_sym_warning_COLON] = ACTIONS(103),
    [anon_sym_warning] = ACTIONS(103),
    [anon_sym_Warn] = ACTIONS(105),
    [anon_sym_WARN] = ACTIONS(105),
    [anon_sym_WARNING] = ACTIONS(105),
    [anon_sym_W_SLASH] = ACTIONS(103),
    [anon_sym_Warning] = ACTIONS(105),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(103),
    [anon_sym_error_COLON] = ACTIONS(103),
    [anon_sym_error] = ACTIONS(103),
    [anon_sym_Error] = ACTIONS(105),
    [anon_sym_ERROR] = ACTIONS(105),
    [anon_sym_ALERT] = ACTIONS(105),
    [anon_sym_CRITICAL] = ACTIONS(105),
    [anon_sym_EMERGENCY] = ACTIONS(105),
    [anon_sym_FAILURE] = ACTIONS(105),
    [anon_sym_FAIL] = ACTIONS(105),
    [anon_sym_Fatal] = ACTIONS(105),
    [anon_sym_FATAL] = ACTIONS(105),
    [anon_sym_E_SLASH] = ACTIONS(103),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(103),
    [sym_year_month_day] = ACTIONS(105),
    [sym_time] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_True] = ACTIONS(105),
    [anon_sym_TRUE] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [anon_sym_False] = ACTIONS(105),
    [anon_sym_FALSE] = ACTIONS(105),
    [anon_sym_null] = ACTIONS(105),
    [anon_sym_Null] = ACTIONS(105),
    [anon_sym_NULL] = ACTIONS(105),
    [sym__raw_string_literal] = ACTIONS(105),
    [sym__interpreted_double_string] = ACTIONS(103),
    [sym__interpreted_single_string] = ACTIONS(105),
    [aux_sym_number_token1] = ACTIONS(105),
    [aux_sym_number_token2] = ACTIONS(105),
    [aux_sym_number_token3] = ACTIONS(105),
    [aux_sym_number_token4] = ACTIONS(105),
    [aux_sym_number_token5] = ACTIONS(105),
    [aux_sym_number_token6] = ACTIONS(105),
    [aux_sym_number_token7] = ACTIONS(105),
    [aux_sym_number_token8] = ACTIONS(105),
    [aux_sym_number_token9] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_word] = ACTIONS(105),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_trace_COLON] = ACTIONS(107),
    [anon_sym_trace] = ACTIONS(107),
    [anon_sym_Trace] = ACTIONS(109),
    [anon_sym_TRACE] = ACTIONS(109),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(107),
    [anon_sym_Verbose] = ACTIONS(109),
    [anon_sym_VERBOSE] = ACTIONS(109),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(107),
    [anon_sym_V_SLASH] = ACTIONS(107),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(107),
    [anon_sym_debug_COLON] = ACTIONS(107),
    [anon_sym_debug] = ACTIONS(107),
    [anon_sym_Debug] = ACTIONS(109),
    [anon_sym_DEBUG] = ACTIONS(109),
    [anon_sym_D_SLASH] = ACTIONS(107),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(107),
    [anon_sym_information_COLON] = ACTIONS(107),
    [anon_sym_info] = ACTIONS(107),
    [anon_sym_INFO] = ACTIONS(109),
    [anon_sym_INFORMATION] = ACTIONS(109),
    [anon_sym_NOTICE] = ACTIONS(109),
    [anon_sym_I_SLASH] = ACTIONS(107),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(107),
    [anon_sym_warning_COLON] = ACTIONS(107),
    [anon_sym_warning] = ACTIONS(107),
    [anon_sym_Warn] = ACTIONS(109),
    [anon_sym_WARN] = ACTIONS(109),
    [anon_sym_WARNING] = ACTIONS(109),
    [anon_sym_W_SLASH] = ACTIONS(107),
    [anon_sym_Warning] = ACTIONS(109),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(107),
    [anon_sym_error_COLON] = ACTIONS(107),
    [anon_sym_error] = ACTIONS(107),
    [anon_sym_Error] = ACTIONS(109),
    [anon_sym_ERROR] = ACTIONS(109),
    [anon_sym_ALERT] = ACTIONS(109),
    [anon_sym_CRITICAL] = ACTIONS(109),
    [anon_sym_EMERGENCY] = ACTIONS(109),
    [anon_sym_FAILURE] = ACTIONS(109),
    [anon_sym_FAIL] = ACTIONS(109),
    [anon_sym_Fatal] = ACTIONS(109),
    [anon_sym_FATAL] = ACTIONS(109),
    [anon_sym_E_SLASH] = ACTIONS(107),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(107),
    [sym_year_month_day] = ACTIONS(109),
    [sym_time] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_True] = ACTIONS(109),
    [anon_sym_TRUE] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_False] = ACTIONS(109),
    [anon_sym_FALSE] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_Null] = ACTIONS(109),
    [anon_sym_NULL] = ACTIONS(109),
    [sym__raw_string_literal] = ACTIONS(109),
    [sym__interpreted_double_string] = ACTIONS(107),
    [sym__interpreted_single_string] = ACTIONS(109),
    [aux_sym_number_token1] = ACTIONS(109),
    [aux_sym_number_token2] = ACTIONS(109),
    [aux_sym_number_token3] = ACTIONS(109),
    [aux_sym_number_token4] = ACTIONS(109),
    [aux_sym_number_token5] = ACTIONS(109),
    [aux_sym_number_token6] = ACTIONS(109),
    [aux_sym_number_token7] = ACTIONS(109),
    [aux_sym_number_token8] = ACTIONS(109),
    [aux_sym_number_token9] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [sym_word] = ACTIONS(109),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_trace_COLON] = ACTIONS(111),
    [anon_sym_trace] = ACTIONS(111),
    [anon_sym_Trace] = ACTIONS(113),
    [anon_sym_TRACE] = ACTIONS(113),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(111),
    [anon_sym_Verbose] = ACTIONS(113),
    [anon_sym_VERBOSE] = ACTIONS(113),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(111),
    [anon_sym_V_SLASH] = ACTIONS(111),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(111),
    [anon_sym_debug_COLON] = ACTIONS(111),
    [anon_sym_debug] = ACTIONS(111),
    [anon_sym_Debug] = ACTIONS(113),
    [anon_sym_DEBUG] = ACTIONS(113),
    [anon_sym_D_SLASH] = ACTIONS(111),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(111),
    [anon_sym_information_COLON] = ACTIONS(111),
    [anon_sym_info] = ACTIONS(111),
    [anon_sym_INFO] = ACTIONS(113),
    [anon_sym_INFORMATION] = ACTIONS(113),
    [anon_sym_NOTICE] = ACTIONS(113),
    [anon_sym_I_SLASH] = ACTIONS(111),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(111),
    [anon_sym_warning_COLON] = ACTIONS(111),
    [anon_sym_warning] = ACTIONS(111),
    [anon_sym_Warn] = ACTIONS(113),
    [anon_sym_WARN] = ACTIONS(113),
    [anon_sym_WARNING] = ACTIONS(113),
    [anon_sym_W_SLASH] = ACTIONS(111),
    [anon_sym_Warning] = ACTIONS(113),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(111),
    [anon_sym_error_COLON] = ACTIONS(111),
    [anon_sym_error] = ACTIONS(111),
    [anon_sym_Error] = ACTIONS(113),
    [anon_sym_ERROR] = ACTIONS(113),
    [anon_sym_ALERT] = ACTIONS(113),
    [anon_sym_CRITICAL] = ACTIONS(113),
    [anon_sym_EMERGENCY] = ACTIONS(113),
    [anon_sym_FAILURE] = ACTIONS(113),
    [anon_sym_FAIL] = ACTIONS(113),
    [anon_sym_Fatal] = ACTIONS(113),
    [anon_sym_FATAL] = ACTIONS(113),
    [anon_sym_E_SLASH] = ACTIONS(111),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(111),
    [sym_year_month_day] = ACTIONS(113),
    [sym_time] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_True] = ACTIONS(113),
    [anon_sym_TRUE] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_False] = ACTIONS(113),
    [anon_sym_FALSE] = ACTIONS(113),
    [anon_sym_null] = ACTIONS(113),
    [anon_sym_Null] = ACTIONS(113),
    [anon_sym_NULL] = ACTIONS(113),
    [sym__raw_string_literal] = ACTIONS(113),
    [sym__interpreted_double_string] = ACTIONS(111),
    [sym__interpreted_single_string] = ACTIONS(113),
    [aux_sym_number_token1] = ACTIONS(113),
    [aux_sym_number_token2] = ACTIONS(113),
    [aux_sym_number_token3] = ACTIONS(113),
    [aux_sym_number_token4] = ACTIONS(113),
    [aux_sym_number_token5] = ACTIONS(113),
    [aux_sym_number_token6] = ACTIONS(113),
    [aux_sym_number_token7] = ACTIONS(113),
    [aux_sym_number_token8] = ACTIONS(113),
    [aux_sym_number_token9] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [sym_word] = ACTIONS(113),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_trace_COLON] = ACTIONS(115),
    [anon_sym_trace] = ACTIONS(115),
    [anon_sym_Trace] = ACTIONS(117),
    [anon_sym_TRACE] = ACTIONS(117),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(115),
    [anon_sym_Verbose] = ACTIONS(117),
    [anon_sym_VERBOSE] = ACTIONS(117),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(115),
    [anon_sym_V_SLASH] = ACTIONS(115),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(115),
    [anon_sym_debug_COLON] = ACTIONS(115),
    [anon_sym_debug] = ACTIONS(115),
    [anon_sym_Debug] = ACTIONS(117),
    [anon_sym_DEBUG] = ACTIONS(117),
    [anon_sym_D_SLASH] = ACTIONS(115),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(115),
    [anon_sym_information_COLON] = ACTIONS(115),
    [anon_sym_info] = ACTIONS(115),
    [anon_sym_INFO] = ACTIONS(117),
    [anon_sym_INFORMATION] = ACTIONS(117),
    [anon_sym_NOTICE] = ACTIONS(117),
    [anon_sym_I_SLASH] = ACTIONS(115),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(115),
    [anon_sym_warning_COLON] = ACTIONS(115),
    [anon_sym_warning] = ACTIONS(115),
    [anon_sym_Warn] = ACTIONS(117),
    [anon_sym_WARN] = ACTIONS(117),
    [anon_sym_WARNING] = ACTIONS(117),
    [anon_sym_W_SLASH] = ACTIONS(115),
    [anon_sym_Warning] = ACTIONS(117),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(115),
    [anon_sym_error_COLON] = ACTIONS(115),
    [anon_sym_error] = ACTIONS(115),
    [anon_sym_Error] = ACTIONS(117),
    [anon_sym_ERROR] = ACTIONS(117),
    [anon_sym_ALERT] = ACTIONS(117),
    [anon_sym_CRITICAL] = ACTIONS(117),
    [anon_sym_EMERGENCY] = ACTIONS(117),
    [anon_sym_FAILURE] = ACTIONS(117),
    [anon_sym_FAIL] = ACTIONS(117),
    [anon_sym_Fatal] = ACTIONS(117),
    [anon_sym_FATAL] = ACTIONS(117),
    [anon_sym_E_SLASH] = ACTIONS(115),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(115),
    [sym_year_month_day] = ACTIONS(117),
    [sym_time] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_True] = ACTIONS(117),
    [anon_sym_TRUE] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(117),
    [anon_sym_False] = ACTIONS(117),
    [anon_sym_FALSE] = ACTIONS(117),
    [anon_sym_null] = ACTIONS(117),
    [anon_sym_Null] = ACTIONS(117),
    [anon_sym_NULL] = ACTIONS(117),
    [sym__raw_string_literal] = ACTIONS(117),
    [sym__interpreted_double_string] = ACTIONS(115),
    [sym__interpreted_single_string] = ACTIONS(117),
    [aux_sym_number_token1] = ACTIONS(117),
    [aux_sym_number_token2] = ACTIONS(117),
    [aux_sym_number_token3] = ACTIONS(117),
    [aux_sym_number_token4] = ACTIONS(117),
    [aux_sym_number_token5] = ACTIONS(117),
    [aux_sym_number_token6] = ACTIONS(117),
    [aux_sym_number_token7] = ACTIONS(117),
    [aux_sym_number_token8] = ACTIONS(117),
    [aux_sym_number_token9] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_word] = ACTIONS(117),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_trace_COLON] = ACTIONS(119),
    [anon_sym_trace] = ACTIONS(119),
    [anon_sym_Trace] = ACTIONS(121),
    [anon_sym_TRACE] = ACTIONS(121),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(119),
    [anon_sym_Verbose] = ACTIONS(121),
    [anon_sym_VERBOSE] = ACTIONS(121),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(119),
    [anon_sym_V_SLASH] = ACTIONS(119),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(119),
    [anon_sym_debug_COLON] = ACTIONS(119),
    [anon_sym_debug] = ACTIONS(119),
    [anon_sym_Debug] = ACTIONS(121),
    [anon_sym_DEBUG] = ACTIONS(121),
    [anon_sym_D_SLASH] = ACTIONS(119),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(119),
    [anon_sym_information_COLON] = ACTIONS(119),
    [anon_sym_info] = ACTIONS(119),
    [anon_sym_INFO] = ACTIONS(121),
    [anon_sym_INFORMATION] = ACTIONS(121),
    [anon_sym_NOTICE] = ACTIONS(121),
    [anon_sym_I_SLASH] = ACTIONS(119),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(119),
    [anon_sym_warning_COLON] = ACTIONS(119),
    [anon_sym_warning] = ACTIONS(119),
    [anon_sym_Warn] = ACTIONS(121),
    [anon_sym_WARN] = ACTIONS(121),
    [anon_sym_WARNING] = ACTIONS(121),
    [anon_sym_W_SLASH] = ACTIONS(119),
    [anon_sym_Warning] = ACTIONS(121),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(119),
    [anon_sym_error_COLON] = ACTIONS(119),
    [anon_sym_error] = ACTIONS(119),
    [anon_sym_Error] = ACTIONS(121),
    [anon_sym_ERROR] = ACTIONS(121),
    [anon_sym_ALERT] = ACTIONS(121),
    [anon_sym_CRITICAL] = ACTIONS(121),
    [anon_sym_EMERGENCY] = ACTIONS(121),
    [anon_sym_FAILURE] = ACTIONS(121),
    [anon_sym_FAIL] = ACTIONS(121),
    [anon_sym_Fatal] = ACTIONS(121),
    [anon_sym_FATAL] = ACTIONS(121),
    [anon_sym_E_SLASH] = ACTIONS(119),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(119),
    [sym_year_month_day] = ACTIONS(121),
    [sym_time] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(121),
    [anon_sym_True] = ACTIONS(121),
    [anon_sym_TRUE] = ACTIONS(121),
    [anon_sym_false] = ACTIONS(121),
    [anon_sym_False] = ACTIONS(121),
    [anon_sym_FALSE] = ACTIONS(121),
    [anon_sym_null] = ACTIONS(121),
    [anon_sym_Null] = ACTIONS(121),
    [anon_sym_NULL] = ACTIONS(121),
    [sym__raw_string_literal] = ACTIONS(121),
    [sym__interpreted_double_string] = ACTIONS(119),
    [sym__interpreted_single_string] = ACTIONS(121),
    [aux_sym_number_token1] = ACTIONS(121),
    [aux_sym_number_token2] = ACTIONS(121),
    [aux_sym_number_token3] = ACTIONS(121),
    [aux_sym_number_token4] = ACTIONS(121),
    [aux_sym_number_token5] = ACTIONS(121),
    [aux_sym_number_token6] = ACTIONS(121),
    [aux_sym_number_token7] = ACTIONS(121),
    [aux_sym_number_token8] = ACTIONS(121),
    [aux_sym_number_token9] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_EQ] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [sym_word] = ACTIONS(121),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_trace_COLON] = ACTIONS(123),
    [anon_sym_trace] = ACTIONS(123),
    [anon_sym_Trace] = ACTIONS(125),
    [anon_sym_TRACE] = ACTIONS(125),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(123),
    [anon_sym_Verbose] = ACTIONS(125),
    [anon_sym_VERBOSE] = ACTIONS(125),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(123),
    [anon_sym_V_SLASH] = ACTIONS(123),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(123),
    [anon_sym_debug_COLON] = ACTIONS(123),
    [anon_sym_debug] = ACTIONS(123),
    [anon_sym_Debug] = ACTIONS(125),
    [anon_sym_DEBUG] = ACTIONS(125),
    [anon_sym_D_SLASH] = ACTIONS(123),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(123),
    [anon_sym_information_COLON] = ACTIONS(123),
    [anon_sym_info] = ACTIONS(123),
    [anon_sym_INFO] = ACTIONS(125),
    [anon_sym_INFORMATION] = ACTIONS(125),
    [anon_sym_NOTICE] = ACTIONS(125),
    [anon_sym_I_SLASH] = ACTIONS(123),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(123),
    [anon_sym_warning_COLON] = ACTIONS(123),
    [anon_sym_warning] = ACTIONS(123),
    [anon_sym_Warn] = ACTIONS(125),
    [anon_sym_WARN] = ACTIONS(125),
    [anon_sym_WARNING] = ACTIONS(125),
    [anon_sym_W_SLASH] = ACTIONS(123),
    [anon_sym_Warning] = ACTIONS(125),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(123),
    [anon_sym_error_COLON] = ACTIONS(123),
    [anon_sym_error] = ACTIONS(123),
    [anon_sym_Error] = ACTIONS(125),
    [anon_sym_ERROR] = ACTIONS(125),
    [anon_sym_ALERT] = ACTIONS(125),
    [anon_sym_CRITICAL] = ACTIONS(125),
    [anon_sym_EMERGENCY] = ACTIONS(125),
    [anon_sym_FAILURE] = ACTIONS(125),
    [anon_sym_FAIL] = ACTIONS(125),
    [anon_sym_Fatal] = ACTIONS(125),
    [anon_sym_FATAL] = ACTIONS(125),
    [anon_sym_E_SLASH] = ACTIONS(123),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(123),
    [sym_year_month_day] = ACTIONS(125),
    [sym_time] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_True] = ACTIONS(125),
    [anon_sym_TRUE] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [anon_sym_False] = ACTIONS(125),
    [anon_sym_FALSE] = ACTIONS(125),
    [anon_sym_null] = ACTIONS(125),
    [anon_sym_Null] = ACTIONS(125),
    [anon_sym_NULL] = ACTIONS(125),
    [sym__raw_string_literal] = ACTIONS(125),
    [sym__interpreted_double_string] = ACTIONS(123),
    [sym__interpreted_single_string] = ACTIONS(125),
    [aux_sym_number_token1] = ACTIONS(125),
    [aux_sym_number_token2] = ACTIONS(125),
    [aux_sym_number_token3] = ACTIONS(125),
    [aux_sym_number_token4] = ACTIONS(125),
    [aux_sym_number_token5] = ACTIONS(125),
    [aux_sym_number_token6] = ACTIONS(125),
    [aux_sym_number_token7] = ACTIONS(125),
    [aux_sym_number_token8] = ACTIONS(125),
    [aux_sym_number_token9] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_EQ] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [sym_word] = ACTIONS(125),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_trace_COLON] = ACTIONS(127),
    [anon_sym_trace] = ACTIONS(127),
    [anon_sym_Trace] = ACTIONS(129),
    [anon_sym_TRACE] = ACTIONS(129),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(127),
    [anon_sym_Verbose] = ACTIONS(129),
    [anon_sym_VERBOSE] = ACTIONS(129),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(127),
    [anon_sym_V_SLASH] = ACTIONS(127),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(127),
    [anon_sym_debug_COLON] = ACTIONS(127),
    [anon_sym_debug] = ACTIONS(127),
    [anon_sym_Debug] = ACTIONS(129),
    [anon_sym_DEBUG] = ACTIONS(129),
    [anon_sym_D_SLASH] = ACTIONS(127),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(127),
    [anon_sym_information_COLON] = ACTIONS(127),
    [anon_sym_info] = ACTIONS(127),
    [anon_sym_INFO] = ACTIONS(129),
    [anon_sym_INFORMATION] = ACTIONS(129),
    [anon_sym_NOTICE] = ACTIONS(129),
    [anon_sym_I_SLASH] = ACTIONS(127),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(127),
    [anon_sym_warning_COLON] = ACTIONS(127),
    [anon_sym_warning] = ACTIONS(127),
    [anon_sym_Warn] = ACTIONS(129),
    [anon_sym_WARN] = ACTIONS(129),
    [anon_sym_WARNING] = ACTIONS(129),
    [anon_sym_W_SLASH] = ACTIONS(127),
    [anon_sym_Warning] = ACTIONS(129),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(127),
    [anon_sym_error_COLON] = ACTIONS(127),
    [anon_sym_error] = ACTIONS(127),
    [anon_sym_Error] = ACTIONS(129),
    [anon_sym_ERROR] = ACTIONS(129),
    [anon_sym_ALERT] = ACTIONS(129),
    [anon_sym_CRITICAL] = ACTIONS(129),
    [anon_sym_EMERGENCY] = ACTIONS(129),
    [anon_sym_FAILURE] = ACTIONS(129),
    [anon_sym_FAIL] = ACTIONS(129),
    [anon_sym_Fatal] = ACTIONS(129),
    [anon_sym_FATAL] = ACTIONS(129),
    [anon_sym_E_SLASH] = ACTIONS(127),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(127),
    [sym_year_month_day] = ACTIONS(129),
    [sym_time] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(129),
    [anon_sym_True] = ACTIONS(129),
    [anon_sym_TRUE] = ACTIONS(129),
    [anon_sym_false] = ACTIONS(129),
    [anon_sym_False] = ACTIONS(129),
    [anon_sym_FALSE] = ACTIONS(129),
    [anon_sym_null] = ACTIONS(129),
    [anon_sym_Null] = ACTIONS(129),
    [anon_sym_NULL] = ACTIONS(129),
    [sym__raw_string_literal] = ACTIONS(129),
    [sym__interpreted_double_string] = ACTIONS(127),
    [sym__interpreted_single_string] = ACTIONS(129),
    [aux_sym_number_token1] = ACTIONS(129),
    [aux_sym_number_token2] = ACTIONS(129),
    [aux_sym_number_token3] = ACTIONS(129),
    [aux_sym_number_token4] = ACTIONS(129),
    [aux_sym_number_token5] = ACTIONS(129),
    [aux_sym_number_token6] = ACTIONS(129),
    [aux_sym_number_token7] = ACTIONS(129),
    [aux_sym_number_token8] = ACTIONS(129),
    [aux_sym_number_token9] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [sym_word] = ACTIONS(129),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_trace_COLON] = ACTIONS(131),
    [anon_sym_trace] = ACTIONS(131),
    [anon_sym_Trace] = ACTIONS(133),
    [anon_sym_TRACE] = ACTIONS(133),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(131),
    [anon_sym_Verbose] = ACTIONS(133),
    [anon_sym_VERBOSE] = ACTIONS(133),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(131),
    [anon_sym_V_SLASH] = ACTIONS(131),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(131),
    [anon_sym_debug_COLON] = ACTIONS(131),
    [anon_sym_debug] = ACTIONS(131),
    [anon_sym_Debug] = ACTIONS(133),
    [anon_sym_DEBUG] = ACTIONS(133),
    [anon_sym_D_SLASH] = ACTIONS(131),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(131),
    [anon_sym_information_COLON] = ACTIONS(131),
    [anon_sym_info] = ACTIONS(131),
    [anon_sym_INFO] = ACTIONS(133),
    [anon_sym_INFORMATION] = ACTIONS(133),
    [anon_sym_NOTICE] = ACTIONS(133),
    [anon_sym_I_SLASH] = ACTIONS(131),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(131),
    [anon_sym_warning_COLON] = ACTIONS(131),
    [anon_sym_warning] = ACTIONS(131),
    [anon_sym_Warn] = ACTIONS(133),
    [anon_sym_WARN] = ACTIONS(133),
    [anon_sym_WARNING] = ACTIONS(133),
    [anon_sym_W_SLASH] = ACTIONS(131),
    [anon_sym_Warning] = ACTIONS(133),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(131),
    [anon_sym_error_COLON] = ACTIONS(131),
    [anon_sym_error] = ACTIONS(131),
    [anon_sym_Error] = ACTIONS(133),
    [anon_sym_ERROR] = ACTIONS(133),
    [anon_sym_ALERT] = ACTIONS(133),
    [anon_sym_CRITICAL] = ACTIONS(133),
    [anon_sym_EMERGENCY] = ACTIONS(133),
    [anon_sym_FAILURE] = ACTIONS(133),
    [anon_sym_FAIL] = ACTIONS(133),
    [anon_sym_Fatal] = ACTIONS(133),
    [anon_sym_FATAL] = ACTIONS(133),
    [anon_sym_E_SLASH] = ACTIONS(131),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(131),
    [sym_year_month_day] = ACTIONS(133),
    [sym_time] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_True] = ACTIONS(133),
    [anon_sym_TRUE] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_False] = ACTIONS(133),
    [anon_sym_FALSE] = ACTIONS(133),
    [anon_sym_null] = ACTIONS(133),
    [anon_sym_Null] = ACTIONS(133),
    [anon_sym_NULL] = ACTIONS(133),
    [sym__raw_string_literal] = ACTIONS(133),
    [sym__interpreted_double_string] = ACTIONS(131),
    [sym__interpreted_single_string] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(133),
    [aux_sym_number_token2] = ACTIONS(133),
    [aux_sym_number_token3] = ACTIONS(133),
    [aux_sym_number_token4] = ACTIONS(133),
    [aux_sym_number_token5] = ACTIONS(133),
    [aux_sym_number_token6] = ACTIONS(133),
    [aux_sym_number_token7] = ACTIONS(133),
    [aux_sym_number_token8] = ACTIONS(133),
    [aux_sym_number_token9] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [sym_word] = ACTIONS(133),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_trace_COLON] = ACTIONS(135),
    [anon_sym_trace] = ACTIONS(135),
    [anon_sym_Trace] = ACTIONS(137),
    [anon_sym_TRACE] = ACTIONS(137),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(135),
    [anon_sym_Verbose] = ACTIONS(137),
    [anon_sym_VERBOSE] = ACTIONS(137),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(135),
    [anon_sym_V_SLASH] = ACTIONS(135),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(135),
    [anon_sym_debug_COLON] = ACTIONS(135),
    [anon_sym_debug] = ACTIONS(135),
    [anon_sym_Debug] = ACTIONS(137),
    [anon_sym_DEBUG] = ACTIONS(137),
    [anon_sym_D_SLASH] = ACTIONS(135),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(135),
    [anon_sym_information_COLON] = ACTIONS(135),
    [anon_sym_info] = ACTIONS(135),
    [anon_sym_INFO] = ACTIONS(137),
    [anon_sym_INFORMATION] = ACTIONS(137),
    [anon_sym_NOTICE] = ACTIONS(137),
    [anon_sym_I_SLASH] = ACTIONS(135),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(135),
    [anon_sym_warning_COLON] = ACTIONS(135),
    [anon_sym_warning] = ACTIONS(135),
    [anon_sym_Warn] = ACTIONS(137),
    [anon_sym_WARN] = ACTIONS(137),
    [anon_sym_WARNING] = ACTIONS(137),
    [anon_sym_W_SLASH] = ACTIONS(135),
    [anon_sym_Warning] = ACTIONS(137),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(135),
    [anon_sym_error_COLON] = ACTIONS(135),
    [anon_sym_error] = ACTIONS(135),
    [anon_sym_Error] = ACTIONS(137),
    [anon_sym_ERROR] = ACTIONS(137),
    [anon_sym_ALERT] = ACTIONS(137),
    [anon_sym_CRITICAL] = ACTIONS(137),
    [anon_sym_EMERGENCY] = ACTIONS(137),
    [anon_sym_FAILURE] = ACTIONS(137),
    [anon_sym_FAIL] = ACTIONS(137),
    [anon_sym_Fatal] = ACTIONS(137),
    [anon_sym_FATAL] = ACTIONS(137),
    [anon_sym_E_SLASH] = ACTIONS(135),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(135),
    [sym_year_month_day] = ACTIONS(137),
    [sym_time] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_True] = ACTIONS(137),
    [anon_sym_TRUE] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_False] = ACTIONS(137),
    [anon_sym_FALSE] = ACTIONS(137),
    [anon_sym_null] = ACTIONS(137),
    [anon_sym_Null] = ACTIONS(137),
    [anon_sym_NULL] = ACTIONS(137),
    [sym__raw_string_literal] = ACTIONS(137),
    [sym__interpreted_double_string] = ACTIONS(135),
    [sym__interpreted_single_string] = ACTIONS(137),
    [aux_sym_number_token1] = ACTIONS(137),
    [aux_sym_number_token2] = ACTIONS(137),
    [aux_sym_number_token3] = ACTIONS(137),
    [aux_sym_number_token4] = ACTIONS(137),
    [aux_sym_number_token5] = ACTIONS(137),
    [aux_sym_number_token6] = ACTIONS(137),
    [aux_sym_number_token7] = ACTIONS(137),
    [aux_sym_number_token8] = ACTIONS(137),
    [aux_sym_number_token9] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [sym_word] = ACTIONS(137),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_trace_COLON] = ACTIONS(139),
    [anon_sym_trace] = ACTIONS(139),
    [anon_sym_Trace] = ACTIONS(141),
    [anon_sym_TRACE] = ACTIONS(141),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(139),
    [anon_sym_Verbose] = ACTIONS(141),
    [anon_sym_VERBOSE] = ACTIONS(141),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(139),
    [anon_sym_V_SLASH] = ACTIONS(139),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(139),
    [anon_sym_debug_COLON] = ACTIONS(139),
    [anon_sym_debug] = ACTIONS(139),
    [anon_sym_Debug] = ACTIONS(141),
    [anon_sym_DEBUG] = ACTIONS(141),
    [anon_sym_D_SLASH] = ACTIONS(139),
    [anon_sym_LBRACKdebug_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(139),
    [anon_sym_information_COLON] = ACTIONS(139),
    [anon_sym_info] = ACTIONS(139),
    [anon_sym_INFO] = ACTIONS(141),
    [anon_sym_INFORMATION] = ACTIONS(141),
    [anon_sym_NOTICE] = ACTIONS(141),
    [anon_sym_I_SLASH] = ACTIONS(139),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(139),
    [anon_sym_warning_COLON] = ACTIONS(139),
    [anon_sym_warning] = ACTIONS(139),
    [anon_sym_Warn] = ACTIONS(141),
    [anon_sym_WARN] = ACTIONS(141),
    [anon_sym_WARNING] = ACTIONS(141),
    [anon_sym_W_SLASH] = ACTIONS(139),
    [anon_sym_Warning] = ACTIONS(141),
    [anon_sym_LBRACKwarning_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(139),
    [anon_sym_error_COLON] = ACTIONS(139),
    [anon_sym_error] = ACTIONS(139),
    [anon_sym_Error] = ACTIONS(141),
    [anon_sym_ERROR] = ACTIONS(141),
    [anon_sym_ALERT] = ACTIONS(141),
    [anon_sym_CRITICAL] = ACTIONS(141),
    [anon_sym_EMERGENCY] = ACTIONS(141),
    [anon_sym_FAILURE] = ACTIONS(141),
    [anon_sym_FAIL] = ACTIONS(141),
    [anon_sym_Fatal] = ACTIONS(141),
    [anon_sym_FATAL] = ACTIONS(141),
    [anon_sym_E_SLASH] = ACTIONS(139),
    [anon_sym_LBRACKcritical_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKerror_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(139),
    [sym_year_month_day] = ACTIONS(141),
    [sym_time] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_True] = ACTIONS(141),
    [anon_sym_TRUE] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_False] = ACTIONS(141),
    [anon_sym_FALSE] = ACTIONS(141),
    [anon_sym_null] = ACTIONS(141),
    [anon_sym_Null] = ACTIONS(141),
    [anon_sym_NULL] = ACTIONS(141),
    [sym__raw_string_literal] = ACTIONS(141),
    [sym__interpreted_double_string] = ACTIONS(139),
    [sym__interpreted_single_string] = ACTIONS(141),
    [aux_sym_number_token1] = ACTIONS(141),
    [aux_sym_number_token2] = ACTIONS(141),
    [aux_sym_number_token3] = ACTIONS(141),
    [aux_sym_number_token4] = ACTIONS(141),
    [aux_sym_number_token5] = ACTIONS(141),
    [aux_sym_number_token6] = ACTIONS(141),
    [aux_sym_number_token7] = ACTIONS(141),
    [aux_sym_number_token8] = ACTIONS(141),
    [aux_sym_number_token9] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [sym_word] = ACTIONS(141),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
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
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(12),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trace, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_info, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
