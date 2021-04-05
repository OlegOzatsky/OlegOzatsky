#include <math.h>
#include <iostream>
using namespace std;

int getValue()
{
    while (true)
    {
        int i;
        cin >> i;
        if (cin.fail())
        {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "Please input a number. \n";
        }
        else
        {
            cin.ignore(11111, '\n');
            return i;
        }
    }
}

double composition(double masA[],double masB[])
{
    //double aLength = sqrt(masA[0] * masA[0] + masA[1] * masA[1] + masA[2] * masA[2]);
    //double bLength = sqrt(masB[0] * masB[0] + masB[1] * masB[1] + masB[2] * masB[2]);
    //double cosAB = (masA[0] * masB[0] + masA[1] * masB[1] + masA[2] * masB[2]) / (aLength * bLength);

    //return aLength * bLength * cosAB;

    double result = masA[0] * masB[0] + masA[1] * masB[1] + masA[2] * masB[2];
    return result;
}

int main()
{
    double masA[3];
    double masB[3];
    char letters[] = { 'x', 'y', 'z' };

    cout << "Enter the A, B coordinates" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "A(" << letters[i] << "): ";
        masA[i] = getValue();
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "B(" << letters[i] << "): ";
        masB[i] = getValue();
    }


    cout << "Result is: " << composition(masA, masB); 

    return 0;
}

