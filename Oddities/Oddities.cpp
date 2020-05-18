#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a%2==0)
        {
            cout<<a<<" is even"<<"\n";
        }
        else{
            cout<<a<<" is odd"<<"\n";
        }
    }

    return 0;
}


