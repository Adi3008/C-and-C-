#include<iostream>
using namespace std;

int main ()
{
  system("clr");
    int n,i;
    cout << "Enter a Positive integer : ";
    cin >> n;
    for ( i = 1; i <= 10; i++)
    {
      cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}