//Mark XXXIII
#include<bits/stdc++.h>

#define ll              long long
#define mp              make_pair
#define pb              push_back
#define lb              lower_bound
#define ub              upper_bound
#define all(x)          x.begin(), x.end()
#define big(x)          greater<x>()

#define sp              fixed<<setprecision
#define vi              vector<int>
#define vvi             vector<vi>
#define pi              pair<int,int>

#define endl			"\n"
#define PI              3.14159265
#define M               998244353
#define LINF            LONG_MAX
#define NL              LONG_MIN
#define INF             INT_MAX
#define NI              INT_MIN

#define IOS()           ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)          cerr<<#x<<" : "<<x<<"\n";
#define deball(x)       for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)      for(i=b; i<c; ++i)
#define rrep(i,b,c)     for(i=b; i>=c; --i)

using namespace std;

struct HASH {
	size_t operator()(const pair<int, int>&x)const {
		return (size_t) x.first * 37U + (size_t) x.second;
	}
};

//Code begins from here!!
ll n, m;
ll gcd(ll a, ll b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

ll findGCD(vector<ll> a, int n)
{
	ll result = a[0];
	for (int i = 1; i < n; ++i)
	{
		result = gcd(a[i], result);

		if (result == 1)
		{
			return 1;
		}
	}
	return result;
}

void solve() {
	cin >> n >> m;
	vector<ll> a(n), b(m);
	for (auto &it : a) cin >> it;
	for (auto &it : b) cin >> it;
	sort(all(a));

	if (n == 1) {
		for (int i = 0; i < m; ++i) cout << a[0] + b[i] << " ";
		cout << endl;
		return;
	}

	vector<ll> c;
	for (int i = 1; i < n; i++) c.pb(a[i] - a[i - 1]);
	ll x = findGCD(c, n - 1);
	for (int i = 0; i < m; i++) {
		ll ans = gcd(x, a[0] + b[i]);
		cout << ans << " ";
	}
	cout << endl;
}

signed main() {

#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
	IOS()
	ll t = 1;
	// cin >> t;

	for (int i = 0; i < t; ++i)
		solve();
}
