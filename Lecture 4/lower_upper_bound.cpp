#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 100005;

int32_t main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// int t;cin>>t;while(t--)
	{
		int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
		cin >> n;
		int a[n];
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		for (i = 0; i < n; i++) {
			cout << a[i] << " ";
		} cout << '\n';
		int id = lower_bound(a, a + n, 5) - a;
		cout << "lower bound of 5 is-> " << id << '\n';
		int id1 = upper_bound(a, a + n, 5) - a;
		cout << "upper bound of 5 is-> " << id1 << '\n';
		cout << "occurences of 5 are-> " << id1 - id << '\n';
	}
}