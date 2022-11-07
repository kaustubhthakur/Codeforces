#include <bits/stdc++.h>
using namespace std;
int _,n,t,ans,x,a[100001];
int main()
{
	cin>>_;
	while(_--)
	{
		cin>>n;
		for(int i=1;i<=n;++i)
		  cin>>a[i];
		for(int i=1;i<=n;++i)
		  cin>>x,a[i]-=x;
		sort(a+1,a+n+1);
		t=n,ans=0;
		for(int i=1;i<t;)
		  if(a[i]+a[t]<=0)ans++,t--,i++;else
		  t--;
		cout<<ans<<"\n";
	}
}
