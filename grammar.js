/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "pta",

  extras: (_) => [/\r/],

  rules: {
    source_file: ($) => repeat(choice($.transaction, $.comment, "\n")),

    comment: (_) => token(seq(/[#;]/, /[^\n]*/)),

    transaction: ($) => seq($.header, repeat1($.movement)),

    header: ($) =>
      seq($.date, $._sp, $.flag, optional(seq($._sp, $.payee)), "\n"),

    _sp: (_) => / +/,

    date: (_) => /\d{4}-\d{2}-\d{2}/,

    flag: (_) => choice("*", "!"),

    payee: (_) => /[^\n]+/,

    movement: ($) =>
      seq(
        $._sp,
        optional($.linked_prefix),
        field("from", $.account),
        $._sp,
        $.arrow,
        $._sp,
        field("to", $.account),
        repeat(seq($._sp, $.word)),
        $._sp,
        $.amount,
        optional(seq($._sp, $.commodity)),
        "\n",
      ),

    linked_prefix: (_) => "+",

    account: (_) => /[A-Z][a-zA-Z0-9]*(:[A-Za-z][a-zA-Z0-9]*)+/,

    arrow: (_) => choice("->", "//", "\u2192", ">"),

    word: (_) => token(prec(-1, /[a-zA-Z][a-zA-Z0-9]*/)),

    amount: (_) => /-?[0-9][0-9,]*(\.[0-9]+)?/,

    commodity: (_) => token(prec(1, /[A-Z][A-Z]+/)),
  },
});
