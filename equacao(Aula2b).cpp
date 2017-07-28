/*
AUTOR:      Milena S. Carmona
RA:         171634
DATA:       26/07/2017
DESCRIÇÃO:  Programa em c++ que resolve uma equação 3bx + 6bc / x-b>>.
*/
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
    //Variaveis da equação, em real.
    float b,c,x, eq;

    // Implementação para usuario visualizar Equação
    cout<<" Equação     3bx + 6bc" <<endl;
    cout<<"            -----------"<<endl;
    cout<<"                x-b"<< endl;


    cout<<"Digite um nº b:";
    cin>> b ;
    cin.sync();
    system("cls");

    //
    cout<<"Digite um nº c:";
    cin>> c ;
    cin.sync();
    system("cls");
    //

    cout<<"Digite um nº x:";
    cin>> x ;
    cin.sync();
    system("cls");

     cout<<" Equação     3bx + 6bc"<<endl;
    cout<<"             ----------- = "<<((3*b*x)+(6*b*c))/(x-b)<<endl;
    cout<<"                x-b"<< endl;

    cout <<"resultado ="<<((3*b*x)+(6*b*c))/(x-b);

}
