#include<bits/stdc++.h>
using namespace std;
#define ll long long
int T,n,a[200005];
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return (b,a%b);
}
int main() {
	cin>>T;
	while(T--) {
		cin>>n;
		int p=0,ans=3;
		for(int i=1;i<=n;i++)cin>>a[i],
        p=gcd(p,a[i]);
		if(p==1)ans=0;
		for(int i=1;i<=n;i++)
        if(gcd(i,p)==1)
        ans=min(ans,n-i+1);
		cout<<ans<<endl;
	}
	return 0;
}