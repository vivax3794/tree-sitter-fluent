module.exports = grammar({
    name: "fluent",

    rules: {
        source_file: $ => repeat($.block),
        block: $ => choice($.template_block, $.style_block, $.rust_block, $.generic_block),

        template_block: $ => seq(
            "<", $.template, ">",
            repeat($.node),
            "</", $.template, ">",
        ),
        template: $ => "template",
        node: $ => choice($.tag, $.text, $.reactive_template),
        text: $ => /[^<>{}]+/,

        reactive_template: $ => seq("{", $.reactive_source, "}"),
        reactive_source: $ => /[^}]*/,

        tag: $ => choice(
            seq("<", $.name, repeat($.attribute), choice(">", "/>")),
            seq("</", $.name, ">")
        ),
        name: $ => /\w[\w\-]*/,
        attribute: $ => choice(
            $.css_attribute,
            $.rust_attribute,
            seq("src", $.eq, $.rust_string),
            seq($.name, optional(seq($.eq, $.string))),
        ),
        rust_prefix: $ => choice(
            ":", ";", "?", " =", "@", "$"
        ),
        rust_attribute: $ => seq($.rust_prefix, $.name, $.eq, $.rust_string),
        rust_string: $ => choice(
            seq($.quote_1, $.string_source_1, $.quote_1),
            seq($.quote_2, $.string_source_2, $.quote_2)
        ),
        quote_1: $ => "'",
        quote_2: $ => '"',
        string_source_1: $ => /[^']*/,
        string_source_2: $ => /[^"]*/,

        css_prefix: $ => "--",
        css_attribute: $ => seq($.css_prefix, $.name, $.eq, choice(
            seq($.quote_1, repeat(choice($.text_1, $.css_template)), $.quote_1),
            seq($.quote_2, repeat(choice($.text_2, $.css_template)), $.quote_2)
        )),
        text_1: $ => /[^'{]+/,
        text_2: $ => /[^"{]+/,
        css_template: $ => seq("{", $.css_source, "}"),
        css_source: $ => /[^}"']*/,

        eq: $ => "=",
        string: $ => choice(/"[^"]*?"/, /'[^']*?'/),

        style_block: $ => seq(
            "<", $.style, ">",
            $.tag_source,
            "</", $.style, ">"
        ),
        tag_source: $ => repeat1(/.|\n/),
        style: $ => "style",

        rust_tag: $ => choice(
            "define",
            "data",
            "events",
            "setup",
            "props"
        ),
        rust_block: $ => seq(
            "<", $.rust_tag, ">",
            $.tag_source,
            "</", $.rust_tag, ">"
        ),

        generic_block: $ => seq(
            "<", $.generic, ">",
            $.generic_source,
            "</", $.generic, ">"
        ),
        generic: $ => "generic",
        generic_source: $ => /<[^>]*>[^<]*/,
    }
})
