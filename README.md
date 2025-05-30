# Tree-sitter log

A tree sitter grammar that's trying to be general enough to work through most log files. Mainly inspired by the [VSCode extension] and [this repo].
For now it's integrated into [Helix Editor](https://github.com/helix-editor/helix), but can be used everywhere you use tree-sitter.

If something is not highlighted as you want, feel free to submit a PR or open an issue.

The most important files are *grammar.js* and *test/corpus/testsuite.log*, almost all the rest is generated by the `tree-sitter` command line tool.

## How to

You need to install the requirements for tree-sitter, you can follow the [official doc].

### Build

```sh
tree-sitter generate
```

### Test

```sh
tree-sitter generate && tree-sitter test
```

### Highlight a file 

You will need to configure a theme for this, see [this link](https://tree-sitter.github.io/tree-sitter/syntax-highlighting).
An example that defines the theme for the queries can be found in the file *config.json*.

```sh
tree-sitter generate && tree-sitter highlight <FILE_PATH>.log
```

## What can be improved
 
- add url parsing
- *known_failures.log* tests

[VSCode extension]: https://github.com/microsoft/vscode/tree/94c9ea46838a9a619aeafb7e8afd1170c967bb55/extensions/log
[this repo]: https://github.com/lpraneis/tree-sitter-tracing-log
[official doc]: https://tree-sitter.github.io/tree-sitter/creating-parsers#getting-started

# Usage

## Neovim

1. Install with `nvim-treesitter` and add the following to your config

```lua
-- if you use branch = 'master'
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.log = {
  install_info = {
    url = "https://github.com/Yo-oo/tree-sitter-log.git",
    files = { "src/parser.c" },
    branch = "main",
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = "log",
}
```


```lua
-- if use branch = 'main'
require("nvim-treesitter.parsers").log = {
  install_info = {
    url = "https://github.com/Yo-oo/tree-sitter-log.git",
  },
  tier = 1,
}

```

2. Run command `:TSInstall log`
    - if you are using branch = 'main' , make sure `require("nvim-treesitter.parsers").log` is set

3. Move `queries/highlights.scm` to your nvim config dir `nvim/after/queries/log/highlights.scm`
