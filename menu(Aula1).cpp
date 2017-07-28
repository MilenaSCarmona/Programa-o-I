/*
AUTOR:      Milena S. Carmona
RA:         171634
DATA:       19/07/2017
DESCRI��O:  Programa em c++ de um menu com dois metos pra pula linha o \n e o endl.
*/
#include<iostream> // Incluir biblioteca

using namespace std; // Pr� determina que o programa coloque std antes do cout<<" ";

int main (){ // Inicio do Algoritmo

    /*Caso n�o tiver (using namespace std)
    colocar std antes do cout (std cout<<" ";)*/

    // 1 Metodo pula linha com \n
    cout<<"|--------------------|\n";
    cout<<"|        MENU        |\n";
    cout<<"|                    |\n";
    cout<<"|1  Cafe da manha    |\n";
    cout<<"|2  Almo�o           |\n";
    cout<<"|3  Janta            |\n";
    cout<<"|--------------------|\n";

    // 2 Metodo pula linha com <<endl o recomendado pelo professor Carlos.
    cout<<"|--------------------|"<<endl;
    cout<<"|        MENU        |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"|1  Cafe da manha    |"<<endl;
    cout<<"|2  Almo�o           |"<<endl;
    cout<<"|3  Janta            |"<<endl;
    cout<<"|--------------------|"<<endl;


}// Fim do Algoritmo
