#include <iostream>
using namespace std;

int main()
{
    int i, n, num, pos;
    int arr[20];
    cout << "enter the size of an array:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    if (n > 4)
    {
        cout << "4 index is:" << arr[4] << endl;
    }
    else
    {
        cout << "4 index not found" << endl;
    }
    cout << "enter the number or value for array:";
    cin >> num;

    cout << "enter the position of an array:";
    cin >> pos;
    for (int i = 0; i < pos; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[pos] = num;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}