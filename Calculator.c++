#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    
    int ch;
    float number1, number2, Result;
    cout << "Enter two oprands: \n";
    cin >> number1 >> number2;
    cout << " 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division" << endl;
    cout << "Choose any one : \n";
    cin >> ch;
    
    switch (ch)
    {
    case 1 : 
                Result = number1 + number2 ;
                cout << "Sum is : " << Result;    
        break;

    case 2 : 
                Result = number1 - number2 ;
                cout << "Difference is : " <<Result ;
        break;

    case 3 : 
                Result = number1 * number2 ;
                cout << "Product is : " << Result ;           
        break;

    case 4 : 
                Result = number1 / number2 ;
                cout << "Division is : "<< Result ;          
        break;
    
    default:
                cout << "Error ! operator is not correct.";
        break;
    }

    return 0;
}