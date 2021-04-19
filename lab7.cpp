
#include <iostream>
#include <math.h>

using namespace std;

class Abs
{
public:
    double x;
    double y;
    double z;

    void getResult()
    {
        cout << "Модуль вектора равен: \n" << sqrt(x * x + y * y + z * z);
    }
};

double getValue(char n)
{
    while (true)
    {
        double value;
        cout << "Введите координату " << n << ": ";
        cin >> value;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << n << " - число. \n";
        }
        else
        {
            cin.ignore(32767, '\n');
            return value;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");
    Abs n;

    n.x = getValue('x');
    n.y = getValue('y');
    n.z = getValue('z');

    n.getResult();
    return 0;
}
