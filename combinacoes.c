//programa para printar todas as compinaçoes de um array com elementos distintos
#include <stdio.h>

void ordena_array(int arr[], int n);

/**
 * @brief cria uma das varias combinaçoes de tamanho r do array arr[] de tamanho n
 * 
 * @param arr array de entrada
 * @param data array temporario que armazena a combinação atual  
 * @param start indice do começo do array
 * @param end indice do fim do array
 * @param index indice atual em data
 * @param r tamanho da combinação que vai ser printada
 */
void fazCombinacoes(int arr[], int data[], int start, int end, int index, int r);


/**
 * @brief printa todas as combinaçoes de arr[] de tamanho r
 * 
 * @param arr array de entrada
 * @param n tamanho do array de entrada
 * @param r tamanho da combinação que vai ser printada
 */
void printaCombinacoes(int arr[], int n, int r);
    

int main(){
    int n,r,i;
    
    printf("Quantos elementos? ");
    scanf("%d",&n);
    int arr[n];
    
    printf("Quantos numeros a serem combinados? ");
    scanf("%d",&r);
    
    printf("Quais os numeros?\n");
    for (i = 0; i < n; i++) scanf("%d",&arr[i]);
    
    printaCombinacoes(arr, n, r);

    return 0;
}

void fazCombinacoes(int arr[], int data[], int start, int end, int index, int r){
    int i;
    
    //A combinação está pronta para ser printada 
    
    if(index == r){
        for (i=0; i<r; i++)

            printf("%d ", data[i]);

        printf("\n");

        return;
    }

    //insere as combinaçoes em ordem dentro de data
    for(i= start; i<=end ; i++){
        
        data[index]=arr[i];
        fazCombinacoes(arr,data,i+1,end,index+1,r);

    }


}

void printaCombinacoes(int arr[], int n, int r){
    //array temporario que armazena a combinação atual
    int data[r];

    fazCombinacoes(arr, data, 0, n-1,0,r);
}

