/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        ll a[n],b[n];
        ll minA=INT_MAX;
        ll minB=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            minA=min(a[i],minA);
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
            minB=min(b[i],minB);
        }
        for(ll i=0;i<n;i++)
        {
            ans+=max(a[i]-minA,b[i]-minB);
        }
        cout<<ans<<endl;
    }
}