#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, arr[20];

    cout << "enter the size of array:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}