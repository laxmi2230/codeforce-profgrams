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
        int n;
        cin>>n;
        int a[3];
        for(int i=0;i<3;i++)
        {
            int value;
            cin>>a[i];
            a[i]=value;
        }
        sort(a,a+3);
        n-=(a[2]-a[1]);
        n-=(a[2]-a[0]);
        
        if((n>=0) && (n%3==0))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}