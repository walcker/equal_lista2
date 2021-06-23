#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Definindo variáveis
    int cont = 0, tamanho;
    cout << "Entre com o tamanho dos vetores: " << endl;
    cin >> tamanho;

    //Definindo vetores
    char vetor1[tamanho], vetor2[tamanho];

    //Requisitando ao usuário o primeiro vetor
    for(int i = 0; i < tamanho; i++){
        cout << "Entre com o elemento " << i << " do primeiro vetor: " << endl;
        cin >> vetor1[i];
    }

    //Requisitando ao usuário o segundo vetor
    for(int i = 0; i < tamanho; i++){
        cout << "Entre com o elemento " << i << " do segundo vetor: " << endl;
        cin >> vetor2[i];
    }

    for(int i = 0; i < tamanho; i++){
        if(vetor1[i] == vetor2[i]){
            cont++;
        }
    }

    if( cont == tamanho){
        cout << "Os dois vetores são iguais." << endl;
    }else{
        cout << "Os dois vetores são diferentes" << endl;
    }

    return 0;
}