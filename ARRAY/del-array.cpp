#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i, n, arr[20], pos;
    cout << "enter the size of an array";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the position of deleting element in array";
    cin >> pos;
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    i++;
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}