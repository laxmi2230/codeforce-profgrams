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
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
       bool flag=1;
       int j;
       int ans;
       if(b>=a && b>=c)
       j=(b-c)+(b-a);
       else if(c>=a && c>=b)
       j=(c-b)+(c-a);
       else
       j=(a-b)+(a-c);
       
       ans=n-j;
       if(ans%3!=0 || ans<=0)
       {
           flag=0;
       }
       if(flag==1)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
}