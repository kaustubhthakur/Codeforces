#include<iostream>
using namespace std;
 
int main()
{
int t,n,i,last,ans;
char a;
string s;
 
	cin>>t;
	while(t--){
		cin>>n>>a;
		cin>>s;
		s=' '+s+s;
		last=0;
		ans=0;
		for(i=2*n;i>0;--i){
			if(s[i]=='g')
last=i;
			if(s[i]==a)
{
ans=max(ans,last-i);
}
		}
		cout<<ans<<endl;
	}
    return 0;
}