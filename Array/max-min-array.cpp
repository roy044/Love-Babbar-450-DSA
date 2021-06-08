#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxnum = a[0], minnum = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > maxnum)
            maxnum = a[i];
        if (a[i] < minnum)
            maxnum = a[i];
    }
    cout << "Maximum : " << maxnum << endl;
    cout << "Minimum : " << minnum << endl;
    return 0;
}
