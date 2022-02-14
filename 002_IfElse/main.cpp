#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int n1,n2,result;
    char opc;

    inicio:
        system("cls");

    cout <<"Digite o valor da sua nota 1: ";
    cin >> n1;
    cout <<"Digite o valor da sua nota 2: ";
    cin >> n2;

    result = (n1+n2)/2;

    if (result >= 60){
        cout <<"Aprovado";
    }

    else if (result >=40){
        cout <<"Recuperacao";
    } else{
        cout <<"Reprovado";
    }

    cout <<"\nDigitar outras notas?";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    }
    return 0;
}
