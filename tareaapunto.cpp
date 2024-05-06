#include <iostream>

using namespace std;
int main (){

char character;
cout <<"Elige una de las siguientes letras R Y B W C G:";
cin >> character;

switch (character)
{
case 'R':
    cout<< "Rojo";
    break;

case 'Y':
    cout << "Amarillo";
    break;

case 'B':
    cout << "Azul";
    break;

case 'W':
    cout << "Blanco";
    break;

case 'C':
    cout <<"Cian";
    break;

case 'G':
    cout<<"Verde";
    break;

default:
    cout<< "Opcion no valida";
}
return 0;
}