//
// Решение задачи "Дороги" (https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=48&id_problem=625)
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


void solve() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            if (k == 1) ans++;
        }
    }

    cout << ans / 2;
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
