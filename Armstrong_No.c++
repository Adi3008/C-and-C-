#include <iostream>
using namespace std;

int main()
{
    int N, dn, temp, d;
   
    cout << "Enter a Number : ";
    cin >> N;
    dn = N;
    while (dn != 0)
    {
        d = dn % 10;
        temp = temp + (d * d * d);
        dn = dn / 10;
    }
    if (N == temp)
    {
        cout << "The Number " << N << " is Armstrong";
    }
    else
    {
        cout << "The Number " << N << " is Not Armstrong";
    }

    return 0;
}