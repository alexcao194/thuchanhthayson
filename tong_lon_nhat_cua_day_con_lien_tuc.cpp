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
ll a[1000001];
    
int main()
{   
    fast_cin
    cin >> t;
    while(t--)
    {
        ll res = 0;
        cin >> n;
        FOR(i,1,n,1) cin >> a[i];

        deque<ll> d;
        FOR(i,1,n,1) 
        {
            res += a[i];

            while(!d.empty()) 
            {
                if(a[i] >= a[d.front()]) 
                {
                    ll mid = d.front(), l, r;
                    d.pop_front();

                    if(d.empty()) l = 1;
                    else l = d.front()+1;

                    r = i-1;

                    ll cnt = 0;
                    cnt += (mid-l)*(r-mid) + (mid-l) + (r-mid);
                    res += a[mid]*cnt;
                }
                else break;
            } 

            d.push_front(i);            
        }

        while(!d.empty())
        {
            ll mid = d.front(), l, r;
            d.pop_front();

            if(d.empty()) l = 1;
            else l = d.front()+1;

            r = n;

            ll cnt = 0;
            cnt += (mid-l)*(r-mid) + (mid-l) + (r-mid);
            res += a[mid]*cnt;
        }

        cout << res << '\n';
    }
    
    return 0;
}