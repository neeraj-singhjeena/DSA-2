
#include <iostream>
using namespace std;
int main()
{
    int i, n, num, pos;
    int arr[50];

    cout << "enter the size of an array:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the num of an element:";
    cin >> num;

    cout << "enter the position of an array";
    cin >> pos;
    // arr[pos]=num in there number will delete the position of an element it will store the give value of element
    for (int i = 0; i > pos; i--)
    {
        arr[i] = arr[i + 1];
    }

    // arr[pos] = num;

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}