---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: lib/include.hpp
    title: lib/include.hpp
  - icon: ':heavy_check_mark:'
    path: lib/math/convert_base.hpp
    title: Convert base
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"lib/test/my_stress_test/convert_base.test.cpp\"\n#define\
    \ PROBLEM \\\n    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#line 2 \"lib/math/convert_base.hpp\"\n\n#line 2 \"lib/include.hpp\"\n#include\
    \ <bits/stdc++.h>\n#include <experimental/iterator>\nusing namespace std;\n#define\
    \ overload3(_1, _2, _3, name, ...) name\n#define rep1(n) for (auto _i = 0; _i\
    \ < n; _i++)\n#define rep2(i, n) for (auto i = 0; i < n; i++)\n#define rep3(i,\
    \ a, b) for (auto i = a; i < b; i++)\n#define rep(...) overload3(__VA_ARGS__,\
    \ rep3, rep2, rep1)(__VA_ARGS__)\ntemplate <class T> bool chmax(T &a, const T\
    \ &b) { return a < b ? a = b, true : false; }\ntemplate <class T> bool chmin(T\
    \ &a, const T &b) { return a > b ? a = b, true : false; }\nusing i64 = long long;\n\
    using f64 = long double;\n#line 4 \"lib/math/convert_base.hpp\"\n\n/**\n * @brief\
    \ Convert base\n * @note when base > 10, it will be used lower case letters\n\
    \ */\ni64 to_base10(string n, int base) {\n    i64 ret = 0;\n    int s = (n[0]\
    \ == '-' ? 1 : 0);\n    reverse(begin(n), end(n));\n    rep(i, s, size(n)) {\n\
    \        int d = (isdigit(n[i]) ? (n[i] - '0') : (n[i] - 'a' + 10));\n       \
    \ ret += pow(base, i) * d;\n    }\n    return ret * (s == 1 ? -1 : 1);\n}\n\n\
    string from_base10(i64 n, int base) {\n    assert(2 <= base and base <= 36);\n\
    \    const string table = \"0123456789abcdefghijklmnopqrstuvwxyz\";\n    bool\
    \ is_negative = (n < 0);\n    if (is_negative) n *= -1;\n    string ret;\n   \
    \ while (n >= base) {\n        ret.push_back(table[n % base]);\n        n /= base;\n\
    \    }\n    ret.push_back(table[n]);\n    reverse(begin(ret), end(ret));\n   \
    \ return (is_negative ? \"-\" : \"\") + ret;\n}\n\nstring convert_base(string\
    \ n, int from_base, int to_base) {\n    return from_base10((to_base10(n, from_base)),\
    \ to_base);\n}\n#line 5 \"lib/test/my_stress_test/convert_base.test.cpp\"\n\n\
    #line 7 \"lib/test/my_stress_test/convert_base.test.cpp\"\n\nvoid test() {\n \
    \   const int M = 1e5;\n    rep(i, M) {\n        stringstream ss;\n        ss\
    \ << oct << i;\n        assert(ss.str() == from_base10(i, 8));\n        assert(i\
    \ == to_base10(ss.str(), 8));\n    }\n    rep(i, M) {\n        stringstream ss;\n\
    \        ss << hex << i;\n        assert(ss.str() == from_base10(i, 16));\n  \
    \      assert(i == to_base10(ss.str(), 16));\n    }\n}\n\nint main() {\n    test();\n\
    \    cout << \"Hello World\\n\";\n    return 0;\n}\n"
  code: "#define PROBLEM \\\n    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../../math/convert_base.hpp\"\n\n#include \"../../include.hpp\"\
    \n\nvoid test() {\n    const int M = 1e5;\n    rep(i, M) {\n        stringstream\
    \ ss;\n        ss << oct << i;\n        assert(ss.str() == from_base10(i, 8));\n\
    \        assert(i == to_base10(ss.str(), 8));\n    }\n    rep(i, M) {\n      \
    \  stringstream ss;\n        ss << hex << i;\n        assert(ss.str() == from_base10(i,\
    \ 16));\n        assert(i == to_base10(ss.str(), 16));\n    }\n}\n\nint main()\
    \ {\n    test();\n    cout << \"Hello World\\n\";\n    return 0;\n}\n"
  dependsOn:
  - lib/math/convert_base.hpp
  - lib/include.hpp
  isVerificationFile: true
  path: lib/test/my_stress_test/convert_base.test.cpp
  requiredBy: []
  timestamp: '2021-07-10 14:38:09+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: lib/test/my_stress_test/convert_base.test.cpp
layout: document
redirect_from:
- /verify/lib/test/my_stress_test/convert_base.test.cpp
- /verify/lib/test/my_stress_test/convert_base.test.cpp.html
title: lib/test/my_stress_test/convert_base.test.cpp
---