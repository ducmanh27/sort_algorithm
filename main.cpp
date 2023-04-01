#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	// int n;
	// cin >> n;
	// int a[1000];
	// for (int i = 0; i < n; i++)
	// {
	// 	cin >> a[i];
	// }
	// sort(a, a + n); // sort increase
	// cout<<"Array follows by increase: ";
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << a[i]<<" ";
	// }
	// cout<<endl;
	// sort(a, a + n,greater<int>());
	// cout<<"Array follows by decrease:";
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << a[i]<<" ";
	// }
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
