#include <iostream>
using namespace std;

int main()
{
    // define  n for enter the size of an array and     // define array
    int n;
    int arr[20];
    cout << "enter the size of an array:";
    cin >> n;
    // loop for array
    for (int i = 0; i < n; i++)
    {
        // cin for array
        cin >> arr[i];
    }
    // condition
    cout << "to check the random access an array:" << endl;
    if (n > 4)
    {
        cout << "4 index value is :" << arr[4] << endl;
    }
    else
    {
        cout << "4 index doesn't found" << endl;
    }
    // end condition
    cout << "traverse of array :";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}