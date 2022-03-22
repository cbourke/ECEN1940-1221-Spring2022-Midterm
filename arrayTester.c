#include <stdlib.h>
#include <stdio.h>

#include "array_utils.h"

int main(int argc, char **argv) {

  int n = 7;
  int vectorA[] = {0,1,1,0,1,0,1};
  int vectorB[] = {0,1,1,1,0,0,0};

  int parity, hamDist;

  computeParity(vectorA, n, &parity);
  printf("Parity of vectorA is %d\n", parity);

  computeParity(vectorB, n, &parity);
  printf("Parity of vectorB is %d\n", parity);

  hammingDistance(vectorA, vectorB, n, &hamDist);
  printf("Hamming distance is %d\n", hamDist);

  int *vectorC = vectorMult(vectorA, vectorB, n);
  printf("Multiplication result: [");
  for(int i=0; i<n-1; i++) {
    printf("%d,", vectorC[i]);
  }
  printf("%d]\n", vectorC[n-1]);
  return 0;
}
