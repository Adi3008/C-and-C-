#include <iostream>
using namespace std;

int main()
{
    int n, T1 = 0, T2 = 1, nextTerm, i;
    cout << "Enter the number of term : \n";
    cin >> n;
    cout << "Fabonacci series is : ";
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << T1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << T2 << ", ";
            continue;
        }
        nextTerm = T1 + T2;
        T1 = T2; 
        T2 = nextTerm;
        cout << nextTerm << ", ";
    }
    return 0;
}