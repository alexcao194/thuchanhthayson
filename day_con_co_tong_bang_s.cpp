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

ll n, s, res = 1e9;
ll a[10001];

void Solve(ll i, ll currentSum, ll currentNum) 
{
    FOR(j,0,1,1) 
    {
        ll tmpSum = currentSum + a[i]*j;
        ll tmpNum = currentNum + j;

        if(i == n) 
        {
            if(tmpSum == s) res = min(res, tmpNum);
        }
        else if(tmpNum < res) Solve(i+1,tmpSum,tmpNum);
    }
}
    
int main()
{   
    fast_cin
    
    cin >> n >> s;
    FOR(i,1,n,1) cin >> a[i];

    Solve(1,0,0);

    if(res != 1e9) cout << res;
    else cout << -1;
    
    return 0;
}