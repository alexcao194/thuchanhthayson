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

ll t, n, k;
ll f[100] = {0}, cnt[100] = {0};

ll dem(ll n, ll k) 
{
    if(n == 0) return 1;
    if(n == 1) return 0;

    if(k <= f[n-1]) return dem(n-1,k);  
    else return cnt[n-1] + dem(n-2,k-f[n-1]);
}
    
int main()
{   
    fast_cin

    f[0] = 1;
    f[1] = 1;

    cnt[0] = 1;
    cnt[1] = 0;

    FOR(i,2,92,1) 
    {
        f[i] = f[i-1] + f[i-2];
        cnt[i] = cnt[i-1] + cnt[i-2];
    }

    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << dem(n,k) << '\n';
    }

    return 0;
}