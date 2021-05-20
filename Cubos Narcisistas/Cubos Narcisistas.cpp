using namespace std;
#include <iostream>

int main()
{
    int number = 0, cifras[3], i = 0, pos = 100, narcisista = 0;
    cout << "Los cubos narcisistas entre 100 y 999 son los siguientes:"<<endl;
    do
    {
        number = pos;
        while (number > 0)
        {
            cifras[i] = number % 10;
            number = number / 10;
            i++;
        }
        i = 0;
        
        narcisista = pow(cifras[2],3) + pow(cifras[1], 3) + pow(cifras[0], 3);
        
        if (narcisista == pos)
        {
            cout << narcisista << endl;
        }
        pos++;
    } while (pos <= 999);
}

