# Graphql, typesafe and fast

OCaml implementation of graphql, created with speed and correctness in
mind. Uses Facebook's own `libgraphqlparser` for raw C++ parsing speed.

TODO: 

	1) Functorize backend, start with postgres
	2) Error handle everywhere please
	3) Use bigstring/bigarray instead of copying over and over
	4) Provide concurrent server
