---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: lib/data_structure/cumulative_sum_2D.hpp
    title: Partial Sum(2D)
  - icon: ':question:'
    path: lib/data_structure/monoid.hpp
    title: lib/data_structure/monoid.hpp
  - icon: ':question:'
    path: lib/data_structure/segment_tree.hpp
    title: Segment Tree
  - icon: ':heavy_check_mark:'
    path: lib/data_structure/union_find.hpp
    title: Union Find
  - icon: ':heavy_check_mark:'
    path: lib/graph/bellman_ford.hpp
    title: Bellman-Ford's Algorithm
  - icon: ':heavy_check_mark:'
    path: lib/graph/dijkstra.hpp
    title: Dijkstra's Algorithm
  - icon: ':heavy_check_mark:'
    path: lib/graph/floyd_warshall.hpp
    title: Floyd Warshall's Algorithm
  - icon: ':heavy_check_mark:'
    path: lib/graph/kruskal.hpp
    title: Kruskal's Algorithm
  - icon: ':heavy_check_mark:'
    path: lib/graph/topological_sort.hpp
    title: Topological Sort
  - icon: ':heavy_check_mark:'
    path: lib/math/convert_base.hpp
    title: Convert Base
  - icon: ':warning:'
    path: lib/math/divisor.hpp
    title: "Multiple Enumeration($O(\u221AN)$)"
  - icon: ':heavy_check_mark:'
    path: lib/math/eratosthenes.hpp
    title: Eratosthenes's Sieve
  - icon: ':warning:'
    path: lib/math/extgcd.hpp
    title: Extended Euclid's Algorithm
  - icon: ':warning:'
    path: lib/math/gcd.hpp
    title: lib/math/gcd.hpp
  - icon: ':warning:'
    path: lib/math/is_prime.hpp
    title: "Prime Determination($O(\u221AN)$)"
  - icon: ':warning:'
    path: lib/math/power.hpp
    title: lib/math/power.hpp
  - icon: ':heavy_check_mark:'
    path: lib/math/prime_factorize.hpp
    title: "Prime Factorize($O(\u221AN)$)"
  - icon: ':warning:'
    path: lib/math/simple_combination.hpp
    title: Combination without mod
  - icon: ':heavy_check_mark:'
    path: lib/modulus/combination.hpp
    title: Combination on mod
  - icon: ':heavy_check_mark:'
    path: lib/modulus/modint.hpp
    title: Finite Field
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/0560.test.cpp
    title: test/aoj/0560.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/DPL_5_A.test.cpp
    title: test/aoj/DPL_5_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/DPL_5_B.test.cpp
    title: test/aoj/DPL_5_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/DPL_5_D.test.cpp
    title: test/aoj/DPL_5_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/DPL_5_E.test.cpp
    title: test/aoj/DPL_5_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_1_A.test.cpp
    title: test/aoj/DSL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_2_A.test.cpp
    title: test/aoj/DSL_2_A.test.cpp
  - icon: ':x:'
    path: test/aoj/DSL_2_B.test.cpp
    title: test/aoj/DSL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_A.test.cpp
    title: test/aoj/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_B.test.cpp
    title: test/aoj/GRL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_C.test.cpp
    title: test/aoj/GRL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_2_A.test.cpp
    title: test/aoj/GRL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_4_A.test.cpp
    title: test/aoj/GRL_4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/atcoder/abc110d.test.cpp
    title: test/atcoder/abc110d.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/library-checker/unionfind.test.cpp
    title: test/library-checker/unionfind.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/my_stress_test/convert_base.test.cpp
    title: test/my_stress_test/convert_base.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/my_stress_test/topological_sort.test.cpp
    title: test/my_stress_test/topological_sort.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/1140.test.cpp
    title: test/yukicoder/1140.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 2 \"lib/include.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#define overload3(_1, _2, _3, name, ...) name\n#define rep1(n) for (decltype(n)\
    \ _tmp = 0; _tmp < (n); _tmp++)\n#define rep2(i, n) for (decltype(n) i = 0; i\
    \ < (n); i++)\n#define rep3(i, a, b) for (decltype(b) i = a; i < (b); i++)\n#define\
    \ rep(...) overload3(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\nstruct IOSetup\
    \ {\n    IOSetup() noexcept {\n        ios::sync_with_stdio(false);\n        cin.tie(nullptr);\n\
    \        cout << fixed << setprecision(10);\n        cerr << fixed << setprecision(10);\n\
    \    }\n} iosetup;\ntemplate<class T> bool chmax(T &a, const T &b) { return a\
    \ < b and (a = b, true); }\ntemplate<class T> bool chmin(T &a, const T &b) { return\
    \ a > b and (a = b, true); }\nusing i64 = long long;\nusing f64 = long double;\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n#define overload3(_1,\
    \ _2, _3, name, ...) name\n#define rep1(n) for (decltype(n) _tmp = 0; _tmp < (n);\
    \ _tmp++)\n#define rep2(i, n) for (decltype(n) i = 0; i < (n); i++)\n#define rep3(i,\
    \ a, b) for (decltype(b) i = a; i < (b); i++)\n#define rep(...) overload3(__VA_ARGS__,\
    \ rep3, rep2, rep1)(__VA_ARGS__)\nstruct IOSetup {\n    IOSetup() noexcept {\n\
    \        ios::sync_with_stdio(false);\n        cin.tie(nullptr);\n        cout\
    \ << fixed << setprecision(10);\n        cerr << fixed << setprecision(10);\n\
    \    }\n} iosetup;\ntemplate<class T> bool chmax(T &a, const T &b) { return a\
    \ < b and (a = b, true); }\ntemplate<class T> bool chmin(T &a, const T &b) { return\
    \ a > b and (a = b, true); }\nusing i64 = long long;\nusing f64 = long double;\n"
  dependsOn: []
  isVerificationFile: false
  path: lib/include.hpp
  requiredBy:
  - lib/math/convert_base.hpp
  - lib/math/power.hpp
  - lib/math/simple_combination.hpp
  - lib/math/extgcd.hpp
  - lib/math/divisor.hpp
  - lib/math/is_prime.hpp
  - lib/math/prime_factorize.hpp
  - lib/math/eratosthenes.hpp
  - lib/math/gcd.hpp
  - lib/modulus/modint.hpp
  - lib/modulus/combination.hpp
  - lib/graph/bellman_ford.hpp
  - lib/graph/floyd_warshall.hpp
  - lib/graph/dijkstra.hpp
  - lib/graph/topological_sort.hpp
  - lib/graph/kruskal.hpp
  - lib/data_structure/union_find.hpp
  - lib/data_structure/segment_tree.hpp
  - lib/data_structure/cumulative_sum_2D.hpp
  - lib/data_structure/monoid.hpp
  timestamp: '2021-08-31 17:00:15+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/my_stress_test/topological_sort.test.cpp
  - test/my_stress_test/convert_base.test.cpp
  - test/library-checker/unionfind.test.cpp
  - test/yukicoder/1140.test.cpp
  - test/atcoder/abc110d.test.cpp
  - test/aoj/GRL_4_A.test.cpp
  - test/aoj/GRL_1_A.test.cpp
  - test/aoj/DPL_5_D.test.cpp
  - test/aoj/DSL_2_A.test.cpp
  - test/aoj/DSL_2_B.test.cpp
  - test/aoj/DSL_1_A.test.cpp
  - test/aoj/GRL_1_C.test.cpp
  - test/aoj/DPL_5_B.test.cpp
  - test/aoj/0560.test.cpp
  - test/aoj/GRL_1_B.test.cpp
  - test/aoj/DPL_5_A.test.cpp
  - test/aoj/DPL_5_E.test.cpp
  - test/aoj/GRL_2_A.test.cpp
documentation_of: lib/include.hpp
layout: document
redirect_from:
- /library/lib/include.hpp
- /library/lib/include.hpp.html
title: lib/include.hpp
---
