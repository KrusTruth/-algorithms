/*
Подсчет компонент связности
На вход получаем граф в виде матрицы смежности
на выходе выводим число компонент связности
*/

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

void dfs(vector<vi> &graph, int v, vi &visited) {
    visited[v] = 1;

    for (auto to : graph[v]) {
        if (!visited[to])
            dfs(graph, to, visited);
    }
}

void solve() {
    int n;
    cin >> n;

    vector<vi> graph(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            if (k == 1 && i != j) {  // учитываем только рёбра (не петли)
                graph[i].pb(j);
            }
        }
    }

    vi visited(n, 0);  // visited размера n (количество вершин)

    int ans = 0;
    for (int i = 0; i < n; i++) {  // проходим по всем вершинам
        if (!visited[i]) {
            dfs(graph, i, visited);
            ans++;
        }
    }

    cout << ans;
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