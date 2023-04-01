#include <bits\stdc++.h>
using namespace std;
int main()
{
    // Bai toan doi cho truc tiep
    int n;
    cin >> n;
    int arr[n];
    for (int &x : arr)
    {
        cin >> x;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
        cout<<"Buoc thu "<<i+1<<" :";
        for (int x : arr)
            cout << x << " ";
        cout<<endl;
    }
    return 0;
}