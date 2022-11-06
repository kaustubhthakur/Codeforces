#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
#include <cstdio>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include <sstream>
#include<set>
#include<map>
#include<cstring>
#include<numeric>
#include<bitset>
#include<cassert>
#include<deque>
#include<stack>
#include<queue>
#include <stdio.h>
#include<stdlib.h>
//#include<Windows.h>
#include<io.h>
#include<fcntl.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return (b,a%b);
}
void solve()
{
int n;
cin>>n;
vector<int> a(n);
ll sum =0;
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++)
sum +=a[i];

cout<<abs(sum)<<endl;

}
int main()
{

int t;
cin>>t;
while(t--)
{
    solve();
}
    return 0;

}