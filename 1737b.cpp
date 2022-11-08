#include<bits/stdc++.h>
using namespace std;
#define int long long 
main(){
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		int l1 = sqrt(1.0L*l), r1 = sqrt(1.0L*r);
		cout<<(r1-l1)*3+(r-r1*r1)/r1-(l-l1*l1)/l1+((l-l1*l1)%l1==0)<<endl;
	}
}