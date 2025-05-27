/**
 * @file Log grammar for tree-sitter
 * @author Tudy Gourmelen
 * @author yo
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'log',
  // word: $ => $.word,

  rules: {
    log_file: ($) =>
      repeat(
        choice(
          $.log_level,
          $.date,
          $.string_literal,
          $.number,
          $.constant,
          $._word_separator,
          $.word,
          $.objects,
        ),
      ),

    // Log level detection.
    log_level: ($) => choice($.trace, $.debug, $.info, $.warn, $.error),
    trace: (_) =>
      choice(
        'trace:',
        'Trace',
        'TRACE',
        '[trace]',
        'Verbose',
        'VERBOSE',
        '[verbose]',
        'V/',
        '[verb]',
        '[vrb]',
        '[vb]',
        '[v]',
        'V/',
      ),
    debug: (_) =>
      choice(
        'debug:',
        'Debug',
        'DEBUG',
        'D/',
        '[debug]',
        '[dbug]',
        '[dbg]',
        '[de]',
        '[d]',
      ),
    info: (_) =>
      choice(
        'information:',
        'info:',
        'INFO',
        'INFORMATION',
        'NOTICE',
        'I/',
        '[info]',
        '[inf]',
        '[in]',
        '[i]',
      ),
    warn: (_) =>
      choice(
        'warning:',
        'warning ',
        'Warn',
        'WARN',
        'WARNING',
        'W/',
        'Warning',
        '[warning]',
        '[warn]',
        '[wrn]',
        '[wn]',
        '[w]',
      ),
    error: (_) =>
      choice(
        'error:',
        'error ',
        'Error',
        'ERROR',
        'ALERT',
        'CRITICAL',
        'EMERGENCY',
        'FAILURE',
        'FAIL',
        'Fatal',
        'FATAL',
        'E/',
        '[critical]',
        '[error]',
        '[err]',
        '[er]',
        '[e]',
      ),

    // Date and time detection.
    date: ($) => choice($.year_month_day, $.time),
    year_month_day: (_) =>
      token(
        choice(
          // 2023-01-01, 2023/01/01, 2023.01.01, 2023-01-01T
          /\d{4}[-\/\.](0[1-9]|1[0-2]|[A-Za-z]{3,9})[-\/\.](0[1-9]|[12][0-9]|3[01])(T)?/,
          // 2023/Jan/01
          /\d{4}[-\/\.](Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)[-\/\.](0[1-9]|[12][0-9]|3[01])(T)?/i,
          // 01-01-2023, 01/01/2023, 01-Jan-2023
          /(0[1-9]|[12][0-9]|3[01])[-\/\.](0[1-9]|1[0-2]|[A-Za-z]{3,9})[-\/\.]\d{4}/,
          // Jan 01, Dec 31
          /(Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)\s(0[1-9]|[12][0-9]|3[01])/i,
          // Jan 01, 2023
          /(Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)\s(0[1-9]|[12][0-9]|3[01]),?\s\d{4}/i,
        ),
      ),

    time: (_) =>
      token(
        choice(
          // 10:33:00 AM, 10:33:00 pm
          /([01]?\d|2[0-3]):[0-5]\d:[0-5]\d(\.\d+)?\s?(AM|PM|am|pm)/,
          // 10:33:00.960249 +08:00, 10:33:00.960249+08:00, 10:33:00.960249Z
          /([01]?\d|2[0-3]):[0-5]\d:[0-5]\d(\.\d+)?\s?([zZ]|([+-](0\d|1\d|2[0-3]):[0-5]\d))/,
          // 10:33:00.960249
          /([01]?\d|2[0-3]):[0-5]\d:[0-5]\d(\.\d+)?/,
          // 10:33:00
          /([01]?\d|2[0-3]):[0-5]\d:[0-5]\d/,
          // 10:33:02.263 UTC, 10:33:02.263 UTC+03:00, 10:33:02.263 UTC-03:00, 10:33:02.263 EST
          /([01]?\d|2[0-3]):[0-5]\d:[0-5]\d(\.\d+)?\s?((UTC|GMT)([+-]\d{2}:?\d{2})?|(E|C|M|P)(S|D)T)?/,
          // 1,000,000ms 20,000s 333,333ms
          token(/\d+(,\d{3})*(ms|s)/),
          // 1.2s, 30.3s, 40.5ms
          token(/\d+((\.)\d+)*(ms|s)/),

        ),
      ),

    constant: (_) =>
      choice(
        'true',
        'True',
        'TRUE',
        'false',
        'False',
        'FALSE',
        'null',
        'Null',
        'NULL',
      ),

    // String literal detection.
    string_literal: ($) =>
      choice(
        $._raw_string_literal,
        $._interpreted_double_string,
        $._interpreted_single_string,
      ),

    _raw_string_literal: (_) => token(/`[^`]*`/),

    _interpreted_double_string: (_) => token(/"([^"\\\n]|\\.)*"/),

    _interpreted_single_string: (_) => token(/'([^'\\\n]|\\.)*'/),

    // number
    number: (_) =>
      choice(
        // Binary: 0b0101, 0B1010, 'b1010
        token(/0[bB][01]+/),
        token(/'b[01]+/),
        // Octal: 0o123, 0O123, 'o123
        token(/0[oO][0-7]+/),
        token(/'o[0-7]+/),
        // Decimal: 'd123456, 123456, 7.6603, 123.4567e-10, 123.4567E+10
        token(/'d\d+/),
        token(/\d+\.\d+([eE][+-]?\d+)?/),
        token(/\d+([eE][+-]?\d+)?/),
        // Hex: 0x123, 0X123, 'h123, 0xc0ffee, 0X1234567890ABCEDF, 'h1234567890ABCEDF
        token(/0[xX][0-9a-fA-F]+/),
        token(/'h[0-9a-fA-F]+/),
      ),

    _word_separator: (_) =>
      choice('(', ')', '[', ']', '{', '}', '=', '"', ',', ':', '/', '-'),
    // Match all other things in the log which are not highlighted
    // Excluded token allow to match inside word.
    word: (_) => /[^()\[\]{}="\s,:\-/]+/,

    // Match all objects in the log which are not highlighted
    objects: ($) =>
      choice(
        $.url,
        $.file_path,
        $.ipv4,
        $.ipv6,
        $.mac,
        $.uuid,
        $.md5,
        $.sha1,
        $.sha224,
        $.sha256,
        $.sha384,
        $.sha512,
        $.statistic,
      ),

    url: (_) => token(prec(1, /https?:\/\/[^\s/$.?#].[^\s]*/i)),

    //  ./ ../ /home/user/file /etc/file ~/.local/bin/
    file_path: (_) => choice(
      token(prec(1, /(~?\/|\.\/|\.\.\/|[a-zA-Z]:\\)[^\s,:;]+/)),
      // lib/main.dart
      token(/[^()\[\]{}="\s,:\-/]{3,20}\/[^\s,:;]+/),
    ),


    ipv4: (_) =>
      token(
        prec(
          1,
          /(25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)(\.(25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)){3}(\/\d{1,2})?/,
        ),
      ),

    ipv6: (_) =>
      token(prec(1, /([0-9a-f]{1,4}:){7}[0-9a-f]{1,4}(\/\d{1,3})?/i)),

    mac: (_) => token(prec(1, /([0-9a-f]{2}:){5}[0-9a-f]{2}/i)),

    uuid: (_) =>
      token(
        prec(
          1,
          /[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/i,
        ),
      ),

    md5: (_) => token(prec(1, /[a-f0-9]{32}/i)),

    sha1: (_) => token(prec(1, /[a-f0-9]{40}/i)),

    sha224: (_) => token(prec(1, /[a-f0-9]{56}/i)),

    sha256: (_) => token(prec(1, /[a-f0-9]{64}/i)),

    sha384: (_) => token(prec(1, /[a-f0-9]{96}/i)),

    sha512: (_) => token(prec(1, /[a-f0-9]{128}/i)),

    // 123/456 12/12% 12/12M 12%
    statistic: (_) => choice(token(prec(1, /\d+\/\d+(M|%)?/)), token(prec(1, /\d+%/))),
  },
});
