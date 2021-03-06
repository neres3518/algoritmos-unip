
#include <stdio.h>
#include <stdlib.h>
#define tamanho 50

void Bubble_Sort( int * v, int tam ){
  int i, j = tam, k;
  int trocou;
  do{
    tam--;
    trocou = 0;
    for(i = 0; i < tam ; i++){
      if(v[i] > v[ i + 1 ]){
        int aux = 0;
        aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
        trocou = 1;
        for( k = 0; k < j; k++)
          printf("%d ", v[k]);
        printf("\n");
      }
    }
  }while(trocou);

}

int main() {
  int i;
  int vbs[tamanho];
  // vbs[0] = -54;
  // vbs[1] = -32;
  // vbs[2] = -33;
  // vbs[3] = -76;
  // vbs[4] = -87;
  // vbs[5] = -11;
  // vbs[6] = -8;
  // vbs[7] = -3;
  // vbs[8] = -6;
  // vbs[9] = -66;

  //--> Vetor sendo preenchido somente com valores positivos
  // for (i = 0; i < tamanho; i++) {
  //   vbs[i] = rand();
  //
  // }
  //--> Vetor sendo preenchido com valores aleatorios positivos e negativos
  for (i = 0; i < tamanho; i++) {
    if( (i % 2) == 0){
      vbs[i] = rand();
    }else{
      vbs[i] = (rand()) * -1;

    }
  }
  /*Ordenação com InsertionSort*/
  printf("\n\n\n===================================\n");
  printf("ordenacao com Bubble Sort: \n");
  printf("\n\n\n===================================\n");
  printf("Vetor original: \n");
  printf("---------------------------------------\n");
  for(i = 0; i < tamanho; i++){
    printf("%d ", vbs[i]);
  }
  printf("\n-------------------------------------------------------\n");
  printf("Passos da ordenacao: \n");
  printf("-----------------------------\n");
  Bubble_Sort(vbs, tamanho);
  return 0;
}
