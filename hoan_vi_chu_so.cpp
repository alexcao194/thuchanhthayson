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

ll t;
ll a[10];
string s;

void Solve()
{
    ll n = s.size();

    FOR(i,0,n-1,1) a[i+1] = s[i] - '0';
    sort(a+1,a+1+n);

    do 
    {
        if(a[1] != 0) cout << a[1];

        FOR(i,2,n,1) cout << a[i];
        cout << '\n';
    }
    while(next_permutation(a+1,a+1+n));
}
    
int main()
{   
    fast_cin
    cin >> t;
    while(t--)
    {
        cin >> s;
        Solve();
    }
    
    return 0;
}