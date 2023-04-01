#include <bits\stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout<<*min_element(a, a+5);
    return 0;
}