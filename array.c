#include <stdio.h>
#include <stdlib.h>

int main() {
  int m[9];                          //создание простого одномерного массива целочисленного типа
  int i;                             //элемент массива

  for (i = 0; i < 9; i++) {
    m[i] = i + 1;                    // массив должен начинатся с 1, тут добовляем еденицу
    printf("%d\t", m[i]);            //вывод на экран
  }
  return 0;
}