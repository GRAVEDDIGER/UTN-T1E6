#include <iostream>
using namespace std;

bool primos(int numero)
{
    for (int i = 0; i < numero; i++)
    {
        if (numero % i == 0)
            return false;
    }
    return true;
}

bool pares(int numero)
{
    if (numero % 2 == 0)
        return true;
    else
        return false;
}