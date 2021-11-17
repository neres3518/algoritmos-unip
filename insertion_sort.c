
#include <stdio.h>
#include <stdlib.h>
#define tamanho 10

void InsertionSort(int * v, int tam){
  int i, j, k, chave;
  for(j = 1; j < tam; j++){
    chave = v[j];
    i = j - 1;
    while(( i >= 0 ) && ( v[i] > chave )) {
      v[ i + 1 ] = v[i];
      i--;
    }
    v[ i + 1 ] = chave;
    for(k = 0; k < j; k++)
      printf("%d ", v[k]);
    printf("\n");
  }
  for( k = 0; k < j; k++)
    printf("%d ", v[k]);
  printf("\n");
}

int main() {
  int i;
  int vis[tamanho];
  // vis[0] = -8874;
  // vis[1] = -9832;
  // vis[2] = -872;
  // vis[3] = -908;
  // vis[4] = -5361;
  // vis[5] = -763;
  // vis[6] = -1342;
  // vis[7] = -1432;
  // vis[8] = -142;
  // vis[9] = -8971;


  // for (i = 0; i < tamanho; i++) {
  //   vis[i] = rand();
  // }
  //--> Vetor sendo preenchido com valores aleatorios positivos e negativos
  for (i = 0; i < tamanho; i++) {
    if( (i % 2) == 0){
      vis[i] = rand();
    }else{
      vis[i] = (rand()) * -1;

    }
  }
  /*Ordenação com InsertionSort*/
  printf("\n\n\n===================================\n");
  printf("ordenacao com Insertion Sort: \n");
  printf("\n\n\n===================================\n");
  printf("Vetor original: \n");
  printf("---------------------------------------\n");
  for(i = 0; i < tamanho; i++){
    printf("%d ", vis[i]);
  }
  printf("\n-------------------------------------------------------\n");
  printf("Passos da ordenacao: \n");
  printf("-----------------------------\n");
  InsertionSort(vis, tamanho);
  return 0;
}
