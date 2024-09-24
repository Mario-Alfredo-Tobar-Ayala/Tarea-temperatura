#include <iostream>

using namespace std;

int main()
{

    int temperatura;

    cout << "Consulta para saber que categoria es tu temperatura \n";
    cout << "Digite su temperatura: \n";
    cout << "Temperaturas validas: \n";
    cout << "30 \n";
    cout << "60 \n";
    cout << "75 \n";

    cin >> temperatura;

    if (temperatura == 30)
    {
        cout << "Usted tiene fiebre ";
    }

    else if (temperatura == 60)
    {
        cout << "Usted ha petado ";
    }

    else if (temperatura == 75)
    {
        cout << "Usted ya esta con San Pedro ";
    }

    else
    {

        cout << "Usted no ha ingresado un numero valido o un caracter que no es un numero ";
    }


    return 0;
}