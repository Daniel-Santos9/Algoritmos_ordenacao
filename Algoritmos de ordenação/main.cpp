#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "ordenacao.h"

using namespace std;

int main(){

    int n;
    cout<<"Quantos numeros voce deseja ordenar ?"<<endl;
    cin>>n;
    system("cls");
    float *vet = (float*)malloc(n*sizeof(float));
    for(int i = 0; i< n; i++){
        cout<<"Digite o "<<"valor "<<i+1<<endl;
        cin>>vet[i];
    }
    int sair = 1;
   while(true){
       system("cls");
       int opc, opc2;
       cout<<"Por qual metodo voce deseja ordedar?"<<endl;
       cout<<"1 Bubble sort --  2 Selection Sort -- 3 Insertion Sort -- 0 sair";
       cin>>opc;
       system("cls");
       switch (opc) {
       case 1:
           cout<<"De qual forma quer ordenar?";
           cout<<"1 Crescente -- 2 Decrescente";
           cin>>opc2;
              system("cls");
           switch (opc2) {
           case 1:
               cout<<"Numeros Digitados:"<<endl;
               cout<<"[";
               for(int i = 0; i<n; i++){
                   cout<<vet[i]<<" ";
               }
               cout<<"]"<<endl;
               cout<<"Numeros ordenados:"<<endl;
               bubble_sort_crescente(vet,n);
               system("pause");

               break;
           case 2:
               cout<<"Numeros Digitados:"<<endl;
               cout<<"[";
               for(int i = 0; i<n; i++){
                   cout<<vet[i]<<" ";
               }
               cout<<"]"<<endl;
               cout<<"Numeros ordenados:"<<endl;
               bubble_sort_decrescente(vet,n);
               system("pause");
               break;
           default:
               cout<<"Não tem essa opção,  voce é retardado? Digite novamente";
               break;
           }

           break;
       case 2:
           cout<<"De qual forma quer ordenar?";
           cout<<"1 Crescente -- 2 Decrescente";
           cin>>opc2;
              system("cls");
           switch (opc2) {
           case 1:
               cout<<"Numeros Digitados:"<<endl;
               cout<<"[";
               for(int i = 0; i<n; i++){
                   cout<<vet[i]<<" ";
               }
               cout<<"]"<<endl;
               cout<<"Numeros ordenados:"<<endl;
               selection_sort_crescente(vet,n);
               system("pause");
               break;
           case 2:
               cout<<"Numeros Digitados:"<<endl;
               cout<<"[";
               for(int i = 0; i<n; i++){
                   cout<<vet[i]<<" ";
               }
               cout<<"]"<<endl;
               cout<<"Numeros ordenados:"<<endl;
               selection_sort_decrescente(vet,n);
               system("pause");
               break;
           default:
               cout<<"Não tem essa opção,  voce é retardado? Digite novamente";
               break;
           }
           break;

       case 3:
           cout<<"De qual forma quer ordenar?";
           cout<<"1 Crescente -- 2 Decrescente";
           cin>>opc2;
              system("cls");
           switch (opc2) {
           case 1:
               cout<<"Numeros Digitados:"<<endl;
               cout<<"[";
               for(int i = 0; i<n; i++){
                   cout<<vet[i]<<" ";
               }
               cout<<"]"<<endl;
               cout<<"Numeros ordenados:"<<endl;
               selection_sort_crescente(vet,n);
               system("pause");

               break;
           case 2:
               cout<<"Numeros Digitados:"<<endl;
               cout<<"[";
               for(int i = 0; i<n; i++){
                   cout<<vet[i]<<" ";
               }
               cout<<"]"<<endl;
               cout<<"Numeros ordenados:"<<endl;
               selection_sort_decrescente(vet,n);
               system("pause");
               break;
           default:
               cout<<"Não tem essa opção,  voce é retardado? Digite novamente";
               break;
           }
           break;
       default:
           cout<<"Nao tem essa opcao,  voce e retardado? Digite novamente"<<endl;
           cout<<"Aperte qualquer tecla para voltar para o inicio"<<endl;
           system("pause");
           break;

       case 0:
           cout<<"Até nunca mais. hahaha";
           exit(0);
       }
    }
}
