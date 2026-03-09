# tree-sitter-pta

Tree-sitter grammar for [PTA](https://github.com/drummonds/pta2svg) (Plain Text Accounting) files.

## Usage

```sh
npm install
npx tree-sitter generate
npx tree-sitter test
```

## Format

```pta
# Comment
2024-01-15 * Salary deposit
  Income:Salary -> Asset:Bank salary payment 5000.00 GBP
  +Income:Salary -> Expense:Tax income tax 1000.00 GBP
```

### Elements

| Element | Pattern | Example |
|---------|---------|---------|
| date | `YYYY-MM-DD` | `2024-01-15` |
| flag | `*` or `!` | `*` |
| payee | free text | `Salary deposit` |
| account | `Segment:Segment` | `Income:Salary` |
| arrow | `->` `//` `→` `>` | `->` |
| amount | decimal | `5,000.00` |
| commodity | uppercase | `GBP` |
| linked | `+` prefix | `+Income:Salary` |
| comment | `#` or `;` | `# note` |

## Links

| | |
|---|---|
| Documentation | https://h3-tree-sitter-pta.statichost.page/ |
| Source (Codeberg) | https://codeberg.org/hum3/tree-sitter-pta |
| Mirror (GitHub) | https://github.com/drummonds/tree-sitter-pta |
| Docs repo | https://codeberg.org/hum3/tree-sitter-pta-docs |
