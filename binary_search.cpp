#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int x)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        if (a[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[ ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a)/ sizeof(a[0]);

    int x;
    cin >> x;

    int result = binary_search(a, n, x);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }
    return 0;
}
