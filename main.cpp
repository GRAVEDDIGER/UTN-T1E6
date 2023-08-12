#include <iostream>
#include "numbers.h"
#include "input.h"
using namespace std;
void processBatch()
{
    int salida = 1;
    int menorPrimo = 999997;
    int mayorPares = 0;
    int contadorImpares;
    while (salida != 0)
    {
        salida = getNumber("Ingrese el numero (0 para salir)");
        if (salida != 0)
        {
            if (menorPrimo == 999997)
                menorPrimo = salida;
            if (primos(salida) && salida < menorPrimo)
            {
                menorPrimo = salida;
            }
            if (pares(salida) && salida > mayorPares)
            {
                mayorPares = salida;
            }
            if (!pares(salida))
                contadorImpares++;
        }
    }
    cout << "Menor numero Primo " << menorPrimo << " Mayor Par " << mayorPares << " numero de impares " << contadorImpares << endl;
}
int main()
{
    processBatch();
    system("pause");
    return 0;
}
