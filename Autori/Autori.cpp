#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char s[1000];
    char *k;
    cin>>s;
    k=strtok(s,"-");

    while(k!=NULL)
    {
        cout<<k[0];
        k=strtok(NULL,"-");
    }
    return 0;
}


