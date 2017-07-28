/*
AUTOR:      Milena S. Carmona
RA:         171634
DATA:       26/07/2017
DESCRIÇÃO: Programa em c++ de uma leiruta de literal, caracter, inteiro e real, com metodo novo o cin
que ler variavel imprementada pelo usuario, entretanto é limitador com string. Implementando o "getline(cin,l);" para
solucionar problema leitura com string >>.
*/
#include<iostream> // Incluir biblioteca
#include<stdlib.h>// biblioteca do system ("cls");

using namespace std;
int main(){
    // Tipo da variavel declarada :
    int i; // Inteiro ex: 3
    char c;// Caracter ex: codigo
    string l;// Literal ex: comentando codigo
    float r;// Real ex: 3,568

    // Inteiro
    cout<<"Digite um nº inteiro:"; // leitura de uma declaração só colocar cout fora do <<
    cin>> i ;// O cin>> é o metodo ler variavel imprementada pelo usuario.
    cin.sync();//Sicronizar  o getline com outros cin.
    system("cls");// Metodo apaga texto imprimido após reposta do usuario.

    // Caracter
    cout<<"Digite um caracter:";
    cin>> c ;
    cin.sync();
    system("cls");

    // Literal
    cout<<"Digite um literal:";
    getline(cin,l);/* Metodo de ler variavel do tipo String em c++ seria "getLine " e
                      o cin entre parente para interliga ler variavel literal.*/
    cin.sync();
    system("cls");

    // Real
    cout<<"Digite um nº real:";
    cin>> r ;
    cin.sync();
    system("cls");

    //Imprimir na tela de comando
    cout<<"I ="<< i <<endl; // <<endl metodo pula linha.
    cout<<"Caracter  =" << c <<endl;
    cout<<"Literal  ="<< l<<endl;
    cout<<"Real  ="<< r<<endl;

}
