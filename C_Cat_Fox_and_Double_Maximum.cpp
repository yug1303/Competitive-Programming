#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        vector<int> ans(n);
        for (int i = 0; i < n; i++) ans[i] = (n + 1) - a[i];
        
        int pp = 0;
        for (int i = 0; i < n; i++) {
            if (ans[i] == n) pp = i;
        }
        
        vector<pair<int, int>> ind;
        ind.push_back({n, pp});
        
        for (int i = 0; i < n; i++) {
            if (i % 2 != pp % 2) ind.push_back({ans[i], i});
        }
        
        sort(ind.rbegin(), ind.rend());
        
        for (int i = 1; i < (int)ind.size(); i++) {
            ans[ind[i].second] = ind[i - 1].first;
        }
        
        ans[ind[0].second] = ind.back().first;
        
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}