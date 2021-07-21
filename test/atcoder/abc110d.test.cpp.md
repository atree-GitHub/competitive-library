---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: lib/include.hpp
    title: lib/include.hpp
  - icon: ':heavy_check_mark:'
    path: lib/math/prime_factorize.hpp
    title: "Prime Factorize($O(\u221AN)$)"
  - icon: ':heavy_check_mark:'
    path: lib/modulus/combination.hpp
    title: Combination on mod
  - icon: ':heavy_check_mark:'
    path: lib/modulus/modint.hpp
    title: Finite Field
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://atcoder.jp/contests/abc110/tasks/abc110_d
    links:
    - https://atcoder.jp/contests/abc110/tasks/abc110_d
  bundledCode: "#line 1 \"test/atcoder/abc110d.test.cpp\"\n#define PROBLEM \"https://atcoder.jp/contests/abc110/tasks/abc110_d\"\
    \n\n#line 2 \"lib/modulus/modint.hpp\"\n\n#line 2 \"lib/include.hpp\"\n\n#include\
    \ <bits/stdc++.h>\n#include <experimental/iterator>\nusing namespace std;\n#define\
    \ overload3(_1, _2, _3, name, ...) name\n#define rep1(n) for (decltype(n) _tmp\
    \ = 0; _tmp < n; _tmp++)\n#define rep2(i, n) for (decltype(n) i = 0; i < n; i++)\n\
    #define rep3(i, a, b) for (decltype(b) i = a; i < b; i++)\n#define rep(...) overload3(__VA_ARGS__,\
    \ rep3, rep2, rep1)(__VA_ARGS__)\nstruct IOSetup { IOSetup() noexcept { ios::sync_with_stdio(false);\
    \ cin.tie(nullptr); cout << fixed << setprecision(10); cerr << fixed << setprecision(10);\
    \ } } iosetup;\ntemplate <class T> bool chmax(T &a, const T &b) { return a < b\
    \ and (a = b, true); }\ntemplate <class T> bool chmin(T &a, const T &b) { return\
    \ a > b and (a = b, true); }\nusing i64 = long long;\nusing u64 = unsigned long\
    \ long;\nusing f64 = long double;\n#line 4 \"lib/modulus/modint.hpp\"\n\n/**\n\
    \ * @brief  Finite Field\n * @note Since Fermat's little theorem is used for division,\
    \ the modulo must be prime.\n */\n\ntemplate<int MOD> struct Modint {\n    using\
    \ mint = Modint<MOD>;\n    int value;\n    Modint(i64 value_ = 0):\n        value((value_\
    \ % MOD + MOD) % MOD) {}\n    mint val() const { return *this; }\n    mint operator-()\
    \ const { return mint(-value); }\n    mint operator++() const { return *this +=\
    \ 1; }\n    mint operator--() const { return *this -= 1; }\n    mint operator+(mint\
    \ arg) const { return mint(*this) += arg; }\n    mint operator-(mint arg) const\
    \ { return mint(*this) -= arg; }\n    mint operator*(mint arg) const { return\
    \ mint(*this) *= arg; }\n    mint& operator+=(mint arg) {\n        value += arg.value;\n\
    \        if (value >= MOD) value -= MOD;\n        return *this;\n    }\n    mint&\
    \ operator-=(mint arg) {\n        value -= arg.value;\n        if (value < 0)\
    \ value += MOD;\n        return *this;\n    }\n    mint& operator*=(mint arg)\
    \ {\n        value = (long long)value * arg.value % MOD;\n        return *this;\n\
    \    }\n    bool operator==(mint arg) const { return value == arg.value; }\n \
    \   bool operator!=(mint arg) const { return value != arg.value; }\n    mint pow(long\
    \ long k) const {\n        Modint ret = 1, a(*this);\n        while (k > 0) {\n\
    \            if (k & 1) ret *= a;\n            k >>= 1;\n            a *= a;\n\
    \        }\n        return ret;\n    }\n    mint inv() const { return pow(MOD\
    \ - 2); }\n    mint operator/(mint arg) const { return *this * arg.inv(); }\n\
    \    mint& operator/=(mint arg) { return *this *= arg.inv(); }\n    friend mint\
    \ operator+(i64 value, Modint<MOD> a) { return Modint<MOD>(value) + a; }\n   \
    \ friend mint operator-(i64 value, Modint<MOD> a) { return Modint<MOD>(value)\
    \ - a; }\n    friend mint operator*(i64 value, Modint<MOD> a) { return Modint<MOD>(value)\
    \ * a; }\n    friend mint operator/(i64 value, Modint<MOD> a) { return Modint<MOD>(value)\
    \ / a; }\n    friend ostream& operator<<(ostream& os, Modint<MOD> a) { return\
    \ os << a.value; }\n};\n#line 2 \"lib/modulus/combination.hpp\"\n\n#line 5 \"\
    lib/modulus/combination.hpp\"\n\n/**\n *@brief Combination on mod\n * @note construct\
    \ in $O(N)$, return $nCr$, $nHr$, $nPr$ in $O(1)$.\n */\n\ntemplate<int MOD> struct\
    \ CombinationTable {\n    vector<Modint<MOD>> fact, ifact;\n    CombinationTable<MOD>(int\
    \ n):\n        fact(n + 1), ifact(n + 1) {\n        assert(1 <= n and n < MOD);\n\
    \        fact[0] = 1;\n        for (int i = 1; i <= n; i++) fact[i] = fact[i -\
    \ 1] * i;\n        ifact[n] = fact[n].inv();\n        for (int i = n; i >= 1;\
    \ i--) ifact[i - 1] = ifact[i] * i;\n    }\n    Modint<MOD> operator()(int n,\
    \ int r) { return r < 0 or r > n ? 0 : fact[n] * ifact[r] * ifact[n - r]; }\n\
    \    Modint<MOD> H(int n, int r) { return operator()(n + r - 1, r); }\n    Modint<MOD>\
    \ P(int n, int r) { return r < 0 or r > n ? 0 : fact[n] * ifact[n - r]; }\n};\n\
    #line 2 \"lib/math/prime_factorize.hpp\"\n\n#line 4 \"lib/math/prime_factorize.hpp\"\
    \n\n/**\n * @brief Prime Factorize($O(\u221AN)$)\n */\n\ntemplate<class T = u64>\
    \ map<T, int> prime_factorize(T n) {\n    map<T, int> factor;\n    for (auto p\
    \ = 2; p * p <= n; p++) {\n        if (n % p != 0) continue;\n        int ex =\
    \ 0;\n        while (n % p == 0) {\n            ex++;\n            n /= p;\n \
    \       }\n        factor[p] = ex;\n    }\n    if (n != 1) factor[n] = 1;\n  \
    \  return factor;\n}\n#line 6 \"test/atcoder/abc110d.test.cpp\"\n\nconstexpr int\
    \ MOD = 1000000007;\nconstexpr int M = 200000;\nusing mint = Modint<MOD>;\n\n\
    int main() {\n    ios::sync_with_stdio(false);\n    cin.tie(nullptr);\n    long\
    \ long n, m;\n    cin >> n >> m;\n    map<long long, int> factor = prime_factorize(m);\n\
    \    mint ans = 1;\n    CombinationTable<MOD> ct(M);\n    for (const auto &[_,\
    \ ex] : factor) ans *= ct.H(n, ex);\n    cout << ans.val() << \"\\n\";\n    return\
    \ 0;\n}\n"
  code: "#define PROBLEM \"https://atcoder.jp/contests/abc110/tasks/abc110_d\"\n\n\
    #include \"../../lib/modulus/modint.hpp\"\n#include \"../../lib/modulus/combination.hpp\"\
    \n#include \"../../lib/math/prime_factorize.hpp\"\n\nconstexpr int MOD = 1000000007;\n\
    constexpr int M = 200000;\nusing mint = Modint<MOD>;\n\nint main() {\n    ios::sync_with_stdio(false);\n\
    \    cin.tie(nullptr);\n    long long n, m;\n    cin >> n >> m;\n    map<long\
    \ long, int> factor = prime_factorize(m);\n    mint ans = 1;\n    CombinationTable<MOD>\
    \ ct(M);\n    for (const auto &[_, ex] : factor) ans *= ct.H(n, ex);\n    cout\
    \ << ans.val() << \"\\n\";\n    return 0;\n}\n"
  dependsOn:
  - lib/modulus/modint.hpp
  - lib/include.hpp
  - lib/modulus/combination.hpp
  - lib/math/prime_factorize.hpp
  isVerificationFile: true
  path: test/atcoder/abc110d.test.cpp
  requiredBy: []
  timestamp: '2021-07-21 10:45:19+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/atcoder/abc110d.test.cpp
layout: document
redirect_from:
- /verify/test/atcoder/abc110d.test.cpp
- /verify/test/atcoder/abc110d.test.cpp.html
title: test/atcoder/abc110d.test.cpp
---