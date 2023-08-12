# UTN Ejercicio Tema 1 Ejercicio 6

## Planteo 
6. Hacer un programa que permita ingresar una lista de números que corta cuando se ingresa un 0. 
Se pide determinar e informar:
* El Mayor de los Números Pares
* Cantidad de los Números Impares
* El Menor de los Números Primos

## Resolucion
Funcion de ingreso de datos

#### input.h
```c++
int getNumber(char texto[])
{
    int data;
    cout << texto << endl;
    cin >> data;
    return data;
}
```
#### numbers.h

Funcion que devuelve un bool si el numero es un numero primo o si es par 

```c++
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
```
### Funcion de Lote 
Funcion que toma los datos, 0 para salir y que llama a las otras funciones para determinar las condiciones solicitadas 

```c++
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
```