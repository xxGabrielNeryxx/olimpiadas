#include <bits/stdc++.h>
using namespace std;
void quicksort(int arr[], int inicio,int fim);
int particiona(int arr[], int inicio, int fim);

int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    quicksort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
void quicksort(int arr[], int inicio,int fim){
    int pos_pivo;
    if(fim>inicio){
        pos_pivo = particiona(arr,inicio,fim);
        quicksort(arr,inicio,pos_pivo-1);
        quicksort(arr,pos_pivo+1,fim);
    }
}
int particiona(int arr[], int inicio,int fim){
    int esq,dir,pivo,aux;
    pivo=arr[inicio];
    esq=inicio;
    dir =fim;
    while(esq<dir){
        while(arr[esq]<=pivo)esq++;
        while(arr[dir]>pivo)dir--;
        if(esq<dir){
            int aux=arr[esq];
            arr[esq]=arr[dir];
            arr[dir]=aux;
        } 
    }
    arr[inicio]=arr[dir];
    arr[dir]=pivo;
    return dir;
}


