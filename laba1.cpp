/*
Author: Олег Озацкий
Group: СБС-002-О-01 / 2
Task: 1.9
Description: написать программу, которая  определяет параметр T при условии,  что параметры омега и k вводятся пользователем.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "This program defines the parameter T, provided that the parameters omega and k are entered by the user "
             " fi0=arcsin(1/k) and T=(pi/2-fi0)/omega\n";
    double omega;
    double k;

    do
    {
        cout << "Enter the omega value: ";
        cin >> omega;
        if (cin.fail())
        {
            cout << "Input error: omega must be a number.\n";
            cin.clear();
            cin.ignore(32767, '\n');
            fflush(stdin);
        } else

            if (omega <= 0)
            {
                cout << "Input error: omega cannot be less than zero or equal to zero.\n";
                cin.clear();
                fflush(stdin);
            }
    } while (omega <= 0);
     do
     {
         cout << "Enter the k value: ";
         cin >> k;
         if (cin.fail())
         {
             cout << "Input error: k must be a number.\n";
             cin.clear();
             cin.ignore(32767,'\n');
             fflush(stdin);
         } else
         if (k <= 0)
         {
             cout << "Input error: k cannot be less than zero or equal to zero.\n";
             cin.clear();
             fflush(stdin);
         }
     }while (k <= 0);

    double fi0 = asin(1/k);
    const double PI = 3.141592653589793;
    double T = (PI/2 - fi0)/omega;
    cout << "The T parameter is " << T << ".";
    return 0;
}
