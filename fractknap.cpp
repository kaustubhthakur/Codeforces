#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<long long,long long>&a,pair<long long,long long> &b)
{
double f = (double)a.second/a.first;
double s = (double)b.second/b.first;
return (f>s);
}
void solve()
{
    long long n,capacity;
    cin>>n>>capacity;
    vector<pair<long long,long long>> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
sort(a.begin(),a.end(),cmp);
double profit =0;
int total_weight =0;
for(int i=0;i<n;i++)
{
    if(total_weight+a[i].first<capacity)
    {
        total_weight+=a[i].first;
        profit+=(double)a[i].second;
    }
    else 
    {
        long long remain = capacity - total_weight;
        profit+=(double)(a[i].second)*((double)(remain)/a[i].first);
        break;
    }
}
cout<<profit<<endl;
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