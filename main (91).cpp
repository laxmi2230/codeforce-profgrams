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
     //int ans;
     bool flag=0;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      sort(a,a+n);
      for(int i=1;i<n;i++)
      {
          //cin>>a[i];
          if((a[i]-a[i-1])>1)
          flag=1;
          
      }
      if(flag==1)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
}