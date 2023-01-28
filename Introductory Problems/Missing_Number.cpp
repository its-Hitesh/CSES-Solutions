#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define pb            push_back
#define ld            long double
#define sz            size()
#define foo(i,a,b)    for (ll i=a;i<b;i++)
#define pll           pair<ll,ll>
#define ed            "\n"
#define m_p           make_pair
#define mod           998244353
#define int long long


void solve(){
    int n; cin>>n;
    int total = 0;
    int a[n]; foo(i,0,n-1) cin>>a[i], total += a[i];
    int tt = (n*(n+1))/2;
    cout<<tt-total<<ed;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  int tt =1; //cin>>tt;

  while(tt--){

    solve();
  }
  return 0;
}