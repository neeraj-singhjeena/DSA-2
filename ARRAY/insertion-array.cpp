#include <iostream>
using namespace std;

int main()
{
    int n, i, arr[45], pos, num;

    cout << "enter the size of an array:";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the num of an element:";
    cin >> num;
    cout << "enter the position of inserting the value in array:";
    cin >> pos;

    for (int i = n; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = num;

    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
