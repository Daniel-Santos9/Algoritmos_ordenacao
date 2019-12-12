#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

// --------------------------------------- Bubble Sort --------------------------------------------------\\
// Resumo:
//
//-------------------------------------------------------------------------------------------------------//
void bubble_sort_crescente( float *src, int n){ //recebendo vetor float e o numero de valores no vetor
    float aux=0;

    for(int i = 0; i<n; i++){ //for indo de 0 ate n-1
        //for para inversão das posições
        for(int j = 0; j<n-1;j++){ //for indo de 0 ate n-2
            if(src[j]>src[j+1]){ // verificando se o valor do indice atual é maior que o do proximo, caso seja:
                aux = src[j]; // guarda o valor do indice atual na varivel aux
                src[j] = src[j+1];// guarda o valor da proxima posição na posição atual do vetor
                src[j+1] = aux;//guarda o valor de aux(posição atual) na posição do proximo
            }
        }
    }
    //Mostrando valores ordenados
    cout<<"[ ";
    for(int i = 0; i<n;i++){
        cout<<src[i]<<" ";
    }
      cout<<" ]";
}

void bubble_sort_decrescente( float *src, int n){ //recebendo vetor float e o numero de valores no vetor
    float aux=0; //

    for(int i = 0; i<n; i++){ //for indo de 0 ate n-1
        //for para inversão das posições
        for(int j = 0; j<n-1;j++){ //for indo de 0 ate
            if(src[j]<src[j+1]){ // verificando se o valor do indice atual é menor que o do proximo, caso seja:
                aux = src[j]; // guarda o valor do indice atual na varivel aux
                src[j] = src[j+1];// guarda o valor da proxima posição na posição atual do vetor
                src[j+1] = aux;//guarda o valor de aux(posição atual) na posição do proximo
            }
        }
    }
    //mostrando vetor ordenado
    cout<<"[ ";
    for(int i = 0; i<n;i++){
        cout<<src[i]<<" ";
    }
      cout<<" ]";
}

// --------------------------------------------------------------------------------------------------------\\
// -------------------------------------------- Selection Sort ---------------------------------------------\\
// Resumo: Esse algoritmo possui dois for sendo o primeiro para passar de valor em valor, e o segundo para
// verificação dos menores. Sempre o primeiro numero pego(menor = i) vai ser o menor até que va verificando
// com os outros valores, assim guardando o indice do menor, ate chegar no total de numeros. Após ele achar o
// indice do menor valor, faz a troca do valor inicial com o valor do menor. Repetindo isso até o vetor está
// ordenado.
//---------------------------------------------------------------------------------------------------------//
void selection_sort_crescente(float *src, int n) {
    float aux =0;
    for (int i = 0; i < n; ++i) { //for para ir do primeiro numero do vetor ate o ultimo
        int menor = i; // a variavel menor está sendo atribuido o valor do indice atual
        for (int j = i+1; j < n; j++) { // for começando no proximo valor em relação ao indice i
            if (src[j] < src[menor]) {// caso a posição da proxima posição seja menor que a "posivel posição do menor"
                menor = j;// o indice do proximo passa a ser o menor
            }
        }
        //isso so faz a troca do menor valor com o valor da posição atual
        aux = src[i]; // o aux recebe o valor do vetor no indice i (atual)
        src[i] = src[menor];//o menor valor encontrado é colocado na posição indice i(atual)
        src[menor] = aux; // o valor do aux(que tem armazenado o valor do indice i [valor atual]) é colocado no indice onde constava o menor
    }
    //Mostrando vetor ordenado
    cout<<"[ ";
    for(int i = 0; i<n;i++){
        cout<<src[i]<<" ";
    }
      cout<<" ]";
}

void selection_sort_decrescente(float *src, int n) {
    float aux =0;
    for (int i = 0; i < n; ++i) {
        int menor = i;
        for (int j = i+1; j < n; j++) {
            if (src[j] > src[menor]) { //so mudou isso do crescente, em vez de comparar se o proximo é menor do que o possivel menor, ele ver se  proximo é maior
                menor = j;
            }
        }
        aux = src[i];
        src[i] = src[menor];
        src[menor] = aux;
    }
    cout<<"[ ";
    for(int i = 0; i<n;i++){
        cout<<src[i]<<" ";
    }
      cout<<" ]";
}

// -----------------------------------------------------------------------------------------------------//
//--------------------------------------- Insertion Sort ------------------------------------------------//
// Resumo: A ordenação insertion sort consiste em ordenar os vetores pegando o indice atual e comparando
// se ele é menor que os indices anteriores, guardando o valor do atual para trocar no final da interação
//
//------------------------------------------------------------------------------------------------------
void insertion_sort_crescente(float *src , int n){
    float aux =0;
    int j=0;
    for (int i = 1; i < n; ++i) { // for indo ate o total de valores, começa em um pq o primeiro teoricamente está ordenado, pois não tem nenhum anterior
        aux = src[i]; // guarda o valor da posição atual
        j = i-1 ;// o j começa na posição anterior do i
        while((j>=0) && aux < src[j]){ // o while vai repetir enquanto o j for igual ou maior a 0,  E o valor atual ser menor que o anterior
            src[j+1] = src[j];
            j--;
        }
        src[j+1]=aux;
    }
    cout<<"[ ";
    for(int i = 0; i<n;i++){
        cout<<src[i]<<" ";
    }
      cout<<" ]";
}

void insertion_sort_decrescente(float *src , int n){
    float aux =0;
    int j=0;
    for (int i = 1; i < n; ++i) {
        aux = src[i];
        j = i-1;
        while((j>=0) && aux > src[j]){
            src[j+1] = src[j];
            j--;
        }
        src[j+1]=aux;
    }
    cout<<"[ ";
    for(int i = 0; i<n;i++){
        cout<<src[i]<<" ";
    }
      cout<<" ]";
}
