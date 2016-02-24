
(* Backend should be functorized, start with Postgres *)

external parse_query_raw : bytes -> bytes  = "caml_parse_graphql"

let parse_query = fun s -> parse_query_raw s |> Yojson.Basic.from_string
