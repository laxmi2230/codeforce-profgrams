/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#define min(A, B) (((A) < (B)) ? A : B)
#define max(A, B) (((A) > (B)) ? A : B)
#define N 100000
 
const int mod = 1000000007;
 
using namespace std;
 
// 1294A
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a[3];
		for(int i = 0; i < 3; i++)
		{
			int temp;
			cin >> temp;
			a[i] = temp;
		}
		sort(a, a + 3);
		int n;
		cin >> n;
		n -= (a[2] - a[1]);
		n -= (a[2] - a[0]);
		cout << ((n >= 0 && (n % 3 == 0)) ? "YES" : "NO") << '\n';
	}
}
 
