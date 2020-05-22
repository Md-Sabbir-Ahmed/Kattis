#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    double n,k,a,b,sum=0;
    cin>>n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    	cin>>a>>b;
    	k=a*b;
    	sum=sum+k;
    }
    sum=sum*n;
    cout<<fixed<<setprecision(7)<<sum;
    return 0;
}

