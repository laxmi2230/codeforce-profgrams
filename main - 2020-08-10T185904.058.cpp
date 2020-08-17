/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        int count=0;
        for(i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                char a;
                cin>>a;
                if(a=='C')continue;
                if(i==n && a=='D')count++;
                if(j==m && a=='R')count++;
            }
        }
       cout<<count<<endl; 
    }
}