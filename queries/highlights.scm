(info) @comment.note
(warn) @keyword.operator
(error) @keyword
(trace) @comment
(debug) @comment
(year_month_day) @type
(time) @type
(string_literal) @string
(number) @number
(constant) @constant
(url_base) @string.special
(url_query) @comment
(file_path) @string.special
[
  (ipv4)
  (ipv6)
  (mac)
  (uuid)
  (md5)
  (sha1)
  (sha224)
  (sha256)
  (sha384)
  (sha512)
] @number.float
(statistic) @variable.builtin
(json_block) @string.special
(source_location) @string.special
(pair
  key: (word) @property
  value: [(pair_value) (string_literal)] @string) @string.special
