#include <iostream>
using namespace std;
int main()
{
    int i, n, pos, arr[20];
    cout << "enter the size of an array";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the position of an element to be deleted";
    cin >> pos;
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
