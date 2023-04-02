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
    
int main()
{   
    fast_cin
    cin >> t;
    while(t--)
    {
        ll a[500] = {0}, res = 1e9, cnt = 0;
        string s;

        cin >> s;
        for(auto it : s) a[it]++;
        FOR(i,'a','z',1) if(a[i]) 
        {
            cnt ++;
            a[i] = 0;
        }

        ll l = 0, r = 0, c = 1;
        a[s[l]]++;
        n = s.size() - 1;

        while(r <= n) 
        {
            if(c == cnt) 
            {
                res = min(res, r-l+1);

                a[s[l]]--;
                if(a[s[l]] == 0) c--;
                l++;
            }
            else 
            {
                r++;
                if(a[s[r]] == 0) c++;
                a[s[r]]++;
            }
        }

        cout << res << '\n';
    }
    
    return 0;
}