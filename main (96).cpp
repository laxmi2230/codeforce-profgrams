/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
   // int diff=INT_MAX;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
     //int ans;
     ll flag=0;
      ll a[n];
      for(ll i=0;i<n;i++)
      cin>>a[i];
      //sort(a,a+n);
      for(ll i=1;i<n;i++)
          //cin>>a[i];
          if((a[i]-a[i-1])>1)
          flag=1;
          
      if(flag)
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
    }
}