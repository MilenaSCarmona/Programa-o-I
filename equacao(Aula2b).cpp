/*
AUTOR:      Milena S. Carmona
RA:         171634
DATA:       26/07/2017
DESCRI��O:  Programa em c++ que resolve uma equa��o 3bx + 6bc / x-b>>.
*/
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
    //Variaveis da equa��o, em real.
    float b,c,x, eq;

    // Implementa��o para usuario visualizar Equa��o
    cout<<" Equa��o     3bx + 6bc" <<endl;
    cout<<"            -----------"<<endl;
    cout<<"                x-b"<< endl;


    cout<<"Digite um n� b:";
    cin>> b ;
    cin.sync();
    system("cls");

    //
    cout<<"Digite um n� c:";
    cin>> c ;
    cin.sync();
    system("cls");
    //

    cout<<"Digite um n� x:";
    cin>> x ;
    cin.sync();
    system("cls");

     cout<<" Equa��o     3bx + 6bc"<<endl;
    cout<<"             ----------- = "<<((3*b*x)+(6*b*c))/(x-b)<<endl;
    cout<<"                x-b"<< endl;

    cout <<"resultado ="<<((3*b*x)+(6*b*c))/(x-b);

}
