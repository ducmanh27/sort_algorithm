#include <bits/stdc++.h>
using namespace std;
// Selection_sort
void merge(int arr[], int left, int mid, int right)
{
    vector<int> x(arr + left, arr + mid + 1);
    vector<int> y(arr + mid + 1, arr + right + 1);
    int i = 0, j = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] < y[i])
        {
            arr[left] = x[i];
            left++;
            i++;
        }
        else
        {
            arr[left] = y[j];
            left++;
            j++;
        }
    }
    while (i < x.size()) 
    {
        arr[left] = x[i];
        left ++;
        i++;
    }
    while (j < y.size()) 
    {
        arr[left] = y[j];
        left ++;
        j++;
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;
    else
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, left);
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    mergeSort(arr, 0, n-1); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
}