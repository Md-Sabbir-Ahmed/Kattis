#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,a,b,r=0,x;
    while(1)
    {
    cin>>n;
    if(n==-1)
        {
            return 0;
        }
    for(int i=0; i<n; i++)
    {
        if(i==0)
        { cin>>a>>b;
          r=r+b*a;
          x=b;
        }
        else{
          cin>>a>>b;
          r=r+(b-x)*a;
          x=b;
        }

    }
    cout<<r<<" miles"<<"\n";
    r=0;

    }

    return 0;
}


