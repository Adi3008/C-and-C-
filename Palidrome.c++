#include<iostream>
using namespace std;

int main ()
{
   int N, dn, temp = 0, d;
   clearerr;
   cout << "Enter a Number : ";
   cin >> N;
   dn = N;
   while (dn!= 0)
   {
       d = dn %10;
       temp = ( temp *10) +d;
       dn = dn/10;
   }
   if (N==temp)
   {
       cout << "The Number " << N << " is Palidrome";
   }
   else
   {
       cout << "The Number " << N << " is Not Palidrome";
   }

    return 0;
}