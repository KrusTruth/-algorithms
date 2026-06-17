#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve() {
    int n;
    cin >> n;

    ll a, x, b, y;
    cin >> a >> x >> b >> y;

    ll lenX = a * (x * 2 + 1), lenY = b * (y * 2 + 1);
    vector<pair<ll, ll> > ans;
    if (lenX + lenY < n) cout << -1;
    else {
        if (y < x) {
            swap(x, y);
            swap(a, b);
        }
        ll curr = 1;
        int a_left = a, b_left = b;
        while (curr <= n) {
            if (a_left > 0) {
                int pos = min((ll) n, curr + x);
                ans.push_back({pos, a});
                curr = pos + x + 1;
                a_left --;
            } else if (b_left > 0) {
                int pos = min((ll) n, curr + y);
                ans.push_back({pos, b});
                curr = pos + y + 1;
                b_left--;
            }
        }
    }

    for (auto i : ans) {
        cout << i.first << " " << i.second << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
