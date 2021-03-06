//Mark XXX
#include<bits/stdc++.h>

#define big(x)  greater<x>()
#define int     long long
#define mp      make_pair
#define pb      push_back
#define lb      lower_bound
#define ub      upper_bound
#define all(x)  x.begin(), x.end()

#define IOS()         ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)        cerr<<#x<<" : "<<x<<"\n";
#define deball(x)    for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define rep(i,b,c)    for(i=b; i<c; ++i)
#define rrep(i,b,c)   for(i=b; i>=c; --i)

#define PI      3.14159265
#define M       998244353
#define LINF    LONG_MAX
#define INF     INT_MAX

using namespace std;

//Code begins from here!!

void solve(void) {
  int n;
  cin >> n;
  vector<int> lpos(n + 1, 0), maxd(n + 1, -1);
  for (int i = 1; i <= n; ++i) {
    int temp;
    cin >> temp;
    maxd[temp] = max(maxd[temp], i - lpos[temp]);
    lpos[temp] = i;
  }

  vector<int> ans(n + 2, INF);

  for (int i = 1; i <= n; ++i) {
    maxd[i] = max(maxd[i], n + 1 - lpos[i]);
    ans[maxd[i]] = min(ans[maxd[i]], i);
  }
  int val = INF;
  for (int i = 1; i <= n; ++i) {
    val = min(val, ans[i]);
    if (val == INF) cout << "-1 ";
    else cout << val << " ";
  }
  cout << endl;
}

signed main()
{

#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
  IOS()
  int t = 1;
  cin >> t;

  while (t--)
    solve();

}