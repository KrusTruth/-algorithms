//
// Решение задачи "Светофорчики" (https://acmp.ru/index.asp?main=task&id_task=124)
//

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<long long>
#define pb push_back
#define str string
#define vs vector<string>
#define all(x) (x).begin(), (x).end()

constexpr int mod = 1e9 + 7;
constexpr int MaxN = 1e5 + 1;

void dfs(vector<vi > &graph, int v, vi &visited) {
    visited[v] = 1;

    for (auto to: graph[v]) {
        if (!visited[to])
            dfs(graph, to, visited);
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    vi a(n);

    for (int i = 0; i < m * 2; i++) {
        int k;
        cin >> k;

        a[k - 1]++;
    }

    for (const auto i : a) cout << i << " ";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
        cout << endl;
    }
}
