#include <stdio.h>
#include <stdlib.h>

int main() {
  int m[9][9]; //создание простого двухмерного массива (матрицы) целочисленного
               //типа
  m[2][5] = 3;
  int i, k; //элемент массива

  for (k = 0; k < 9; k++) {

    for (i = 0; i < 9; i++) {
      m[k][i] = 7;
      printf("%d ", m[k][i]);
    }
    printf("\n");
  }
  return 0;
}