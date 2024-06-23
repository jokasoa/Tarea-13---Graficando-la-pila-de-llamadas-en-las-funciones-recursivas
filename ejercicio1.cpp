//Autor:Jeremy Novoa
//Fecha:22/6/2024
#include <iostream>
using namespace std;
int Suma(int n)
{
    int Suma = 0;
    int i = 1;
    while (i <= n)
    {
        Suma = Suma + i;
        i++;
    }
    return Suma;
}

int Sumarecursiva(int i, int n)
{
    if (i<=n)
      return Sumarecursiva(i+1, n) + i;
    else
      return 0;  
}
int main()
{
    cout<<endl<<"La suma de los 5 primeros numeros: "<<Suma(6);
    cout<<endl<<"La suma de los 5 primeros numeros: "<<Suma(6);
}