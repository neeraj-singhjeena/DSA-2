#include <iostream>
using namespace std;
int main()
{
    int i, n, num, pos;
    int arr[20];
    cout << "enter the size of an array:";
    cin >> n;

    cout << "enter the elements of an array:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the num or value to be insert:";
    cin >> num;

    cout << "enter the position of an array:";
    cin >> pos;

    for (int i = 0; i > pos; i++)
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