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

ll t, n, cnt, k;
ll a[10000];

ll prime[1000001] = {0};
void Sieve(ll n)
{
    prime[2] = 1;
    FOR(i,3,n,2) prime[i] = 1;
    FOR(i,3,n,2)
    {
        if(prime[i]) 
        {
            FOR(j,i*3,n,i*2) prime[j] = 0;
        }
    }
}

void Solve(ll i, ll k, ll st)
{
    FOR(j,st,n,1) 
    {
        a[i] = j;
        if(i == k) 
        {
            cnt++;
            if(prime[cnt]) 
            {
                cout << cnt << ": ";
                FOR(i,1,k,1) cout << a[i] << " ";
                cout << '\n';
            }
        }
        else Solve(i+1,k,j+1);
    }
}
    
int main()
{   
    fast_cin
    Sieve(1e6);
    //cin >> t;
    //while(t--)
    {
        cin >> n >> k;
        Solve(1,k,1);     
    }
    
    return 0;
}