#include <iostream>
using namespace std;

int main()
{
   int r, c, i, j, a[100][100], b[100][100], sum[100];
   cout << "Enter a numbers of rows : ";
   cin >> r;

   cout << "Enter a numbers of columns : ";
   cin >> c;

   cout << "Enter elements of first matrix : " << endl;
   // Storing element of first matrix entered by user //
   for (i = 0; i <= r; ++i)
   {
      for (j = 0; j <= c; ++j)
      {
         cout << "Enter element a" << i + 1 << j + 1 << " : ";
         cin >> a[i][j];
      }
   }
   cout << "Enter elements of first matrix : " << endl;
   // Storing element of first matrix entered by user //
   for (i = 0; i <= r; ++i)
   {
      for (j = 0; j <= c; ++j)
      {
         cout << "Enter element b" << i + 1 << j + 1 << " : ";
         cin >> b[i][j];
      }
   }

   // Addition of two matrix
   for (i = 0; i <= r; ++i)
   {
      for (j = 0; j <= c; ++j)
      {
         sum[i][j] = a[i][j] + b[i][j];
      }
   }

   //  Displaying the resultant sum matrix //
   cout << "Sum of two matrix is :" << endl;
   for (i = 0; i <= r; ++i)
   {
      for (j = 0; j <= c; ++j)
      {
         cout << sum[i][j] << " ";
         if (j == c - 1)
         {
            cout << endl;
         }
      }
   }

   return 0;
}
