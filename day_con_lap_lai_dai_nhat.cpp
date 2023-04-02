#include<bits/stdc++.h>
#define FOR(i,a,b,k) for (ll i=a;i<=b;i+=k)
#define FORD(i,a,b,k) for (ll i=a;i>=b;i-=k)
#define pb(i) push_back(i)
#define ll long long int
#define all(a) (a).begin(), (a).end()
#define fi first
#define se second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const ll MOD=1e9+7;

ll t, n;
string s;

void Solve()
{
    ll dp[105][105] = {0};

    FOR(i,0,n-1,1) 
    {
        FOR(j,0,n-1,1) 
        {
            if(s[i] == s[j] && i != j) dp[i+1][j+1] = dp[i][j] + 1;
            else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
        }
    }

    cout << dp[n][n] << '\n';
}
    
int main()
{   
    fast_cin
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        Solve();

    }
    
    return 0;
}