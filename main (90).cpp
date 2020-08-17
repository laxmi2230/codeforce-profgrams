/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
   // int diff=INT_MAX;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
     int ans;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=0;i<n-1;i++)
      {
          //cin>>a[i];
          for(int j=i+1;j<n;j++)
          {
              if((abs(a[i]-a[j])<=1) && i!=j)
              {
                  ans=abs(a[i]-a[j]);
              }
          }
      }
      if(ans==1)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
}