#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	while(T--){
		int n;
		string s;
		cin>>n>>s;s+='2';
		long long ans=0,cnt=1,C[2]={0,0};
		for(int i=0;i<n;i++){
			if(s[i]!=s[i+1])
				ans=max(1ll*cnt*cnt,ans),
				cnt=1;
			else
				cnt++;
			C[s[i]-'0']++;
		}
		cout<<max(1ll*C[0]*C[1],ans)<<'\n';
	}
}
