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
ll a[100001];

void Solve(ll i, ll k) 
{
    FOR(j,0,1,1)
    {
        a[i] = j;
        if(i == k) 
        {
            FOR(i,1,k,1) cout << a[i];
            FORD(i,k,1,1) cout << a[i];
            cout << " ";
        }
        else Solve(i+1,k);
    }
}
    
int main()
{   
    fast_cin
    cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i,2,n,2) Solve(1,i/2);
        cout << '\n';
    }
    
    return 0;
}