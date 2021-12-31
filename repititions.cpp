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


void solve()
{

	string s;cin>>s;
	s.push_back('1');
	int a=0,ss=1;
	int sz=len(s);
	bool fg=0;
	f(i,1,sz)
	{
		if(s[i]==s[i-1]) a++;
		else ss=max(ss,a+1),a=0;
	}

	cout<<ss<<endl;
}


int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

 //    #ifndef ONLINE_JUDGE
	// freopen("input.txt" , "r" , stdin);
	// freopen("output.txt", "w", stdout);
 //    #endif

	// int t;cin>>t;
	// while(t--)
	{
		solve();
	}
	return 0;
}