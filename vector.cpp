#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int, int>
#define pb push_back

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  // int t;cin>>t;while(t--)
  {
    int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
    std::vector<int> v;
    cin >> n;
    for (i = 0; i < n; ++i) {
      cin >> m;
      v.pb(m);
    }
    for (i = 0; i < n; ++i) {
      cout << v[i] << "\n";
    }
  }
}