#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)

#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))


#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define bg begin()
#define en end()
#define ff first
#define ss second
#define ll long long
#define endl "\n"
#define len(s) (int)s.size()
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define vi vector<int>
#define vll vector<ll>

using namespace std;

// ll power(ll b,ll p,ll md)
// {
// 	ll ans=1;
// 	for(ll i=0;i<p;i++) ans = (ans*b) % md;
// 		return ans;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n;cin>>n;
    ll ans=1;
    ll c=1e9+7;
    //property ( a * b) % c = ( ( a % c ) * ( b % c ) ) % c
    for(ll i=0;i<n;i++) ans = ans*2 % c;
    cout<<ans; 


 
    return 0;
}
