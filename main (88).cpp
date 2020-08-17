/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int sum=0;
      int a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
          sum+=a[i];
      }
      if(sum%5==0)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
}