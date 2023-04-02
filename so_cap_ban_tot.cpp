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
ll a[1000001];
unordered_map<ll,ll> m;
string s;
    
int main()
{   
    fast_cin
    //cin >> t;
    //while(t--)
    {
        cin >> n >> k;
        FOR(i,1,n,1) 
        {
            cin >> s;
            a[i] = s.size();
        }

        ll l = 1, r = k+1, res = 0;

        FOR(i,l,r,1) m[a[i]]++;
        for(auto it : m) 
        {
            res += it.second * (it.second - 1) / 2;
        }

        while(r < n) 
        {
            m[a[l]]--;
            l++;

            r++;
            res += m[a[r]];
        
            m[a[r]]++;
        }

        cout << res << '\n';
    }
    
    return 0;
}