/* -*- c++ -*- */
#include <iostream>
#include <string>

#include <graphqlparser/GraphQLParser.h>
#include <graphqlparser/AstNode.h>
#include <graphqlparser/c/GraphQLAstToJSON.h>

#include <caml/mlvalues.h>
#include <caml/alloc.h>
#include <caml/bigarray.h>
#include <caml/memory.h>
#include <caml/fail.h>
#include <caml/custom.h>


extern "C" {

  CAMLprim value caml_parse_graphql(value message)
  {
    CAMLparam1(message);

    const char *error;

    const char *c_side = caml_strdup(String_val(message));
    auto ast = facebook::graphql::parseString(c_side, &error);

    const char *json = graphql_ast_to_json((const struct GraphQLAstNode *)ast.get());

    CAMLreturn(caml_copy_string(json));
  }

}
