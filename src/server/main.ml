open Graphql

let test_data = "{query getHighScores(limit: 10) { score }}"

let () =
  Graphql.parse_query test_data
  |> Yojson.Basic.pretty_to_string
  |> print_endline
