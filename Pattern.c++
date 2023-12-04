#include <iostream>
using namespace std;

int main()
{
    int i, j, row, col;
    cout << "Enter a no. of row and col : ";
    cin >> row >> col;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}