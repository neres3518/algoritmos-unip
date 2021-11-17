
#include <stdio.h>
#include <stdlib.h>
#define tamanho 50
void QuickSort(int * v, int tam){
  int j = tam, k;
  if(tam <= 1)
    return;
  else{
    int x = v[0];
    int a = 1;
    int b = tam - 1;
    do{
      while ( ( a < tam ) && (  v[a] <= x ) )
        a++;
      while(v[b] > x)
        b--;
      if(a < b) {
        int temp = v[a];
        v[a] = v[b];
        v[b] = temp;

        a++;
        b--;
      }
      for (k = 0; k < j; k++)
          printf("%d ", v[k]);
      printf("\n");

    } while ( a <= b );
    v[0] = v[b];
    v[b] = x;
    QuickSort( v, b );
    QuickSort(&v[a], tam - a);
    for( k = 0; k < j; k++)
      printf("%d ", v[k]);
    printf("\n");
  }
}
int main() {
  int i;
  int vqs[tamanho];
  // vqs[0] = -8765;
  // vqs[1] = -323;
  // vqs[2] = -491;
  // vqs[3] = -5431;
  // vqs[4] = -9999;
  // vqs[5] = -6894;
  // vqs[6] = -576;
  // vqs[7] = -3698;
  // vqs[8] = -491;
  // vqs[9] = -9821;
  //
    //--> Vetor sendo preenchido com valores aleatorios positivos e negativos
  for (i = 0; i < tamanho; i++) {
    if( (i % 2) == 0){
      vqs[i] = rand();
    }else{
      vqs[i] = (rand()) * -1;

    }
  }
  /*ORDENAÇÃO POR QUICKSORT*/
  printf("\n\n\n==========================\n");
  printf("ORDENAÇÃO POR QUICKSORT: \n");
  printf("---------------------------\n");
  printf("VETOR ORIGINAL: \n");
  printf("--------------------\n");
  for( i = 0; i < tamanho; i++){
    printf("%d ", vqs[i]);
  }
  printf("\n----------------------\n");
  printf("Passos da ordenacao: \n");
  printf("------------------------------------ \n");
  QuickSort(vqs, tamanho);
  return 0;
}
