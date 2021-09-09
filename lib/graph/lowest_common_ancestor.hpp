#pragma once

#include "../include.hpp"

/**
 * @brief Lowest Common Ancestor(Doubling, Binary Search) / 最近共通祖先
 * @docs docs/lowest_common_ancestor.md
*/

struct LCA {
    int n, height;
    vector<int> depth;
    vector<vector<int>> dp;
    explicit LCA(const vector<vector<int>>& tree, int root):
        n((int)size(tree)),
        height(32 - __builtin_clz(n)),
        depth(n, -1),
        dp(height, vector<int>(n, -1)) {
        depth[root] = 0;
        dfs(tree, root, -1);
        rep(k, height - 1) rep(v, n) {
            if (dp[k][v] == -1) dp[k + 1][v] = -1;
            else
                dp[k + 1][v] = dp[k][dp[k][v]];
        }
    }
    int operator()(int u, int v) {
        assert(0 <= u and u < n and 0 <= v and v < n);
        if (depth[u] < depth[v]) swap(u, v);
        for (int k = height - 1; k >= 0; k--)
            if (((depth[u] - depth[v]) >> k) & 1) u = dp[k][u];
        if (u == v) return u;
        for (int k = height - 1; k >= 0; k--)
            if (dp[k][u] != dp[k][v]) {
                u = dp[k][u];
                v = dp[k][v];
            }
        return dp[0][u];
    }
    int dist(int u, int v) { return depth[u] + depth[v] - depth[(*this)(u, v)] * 2; }

  private:
    void dfs(const vector<vector<int>>& tree, int v, int prev) {
        for (const auto& u: tree[v])
            if (u != prev) {
                assert(depth[u] == -1 and dp[0][u] == -1); // The graph may not be a tree Graph.
                dp[0][u] = v;
                depth[u] = depth[v] + 1;
                dfs(tree, u, v);
            }
    }
};