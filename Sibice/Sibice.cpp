#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,x,z;
    cin>>n>>a>>b;
    z=sqrt((pow(a,2)+pow(b,2)));
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<=z)
        {
            cout<<"DA\n";
        }
        else{
            cout<<"NE\n";
        }


    }
    return 0;
}


