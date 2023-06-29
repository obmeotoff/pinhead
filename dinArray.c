#include <stdio.h>
#include <stdlib.h>
int cnt = 9;

int main() {
  int *m = NULL;
  m = malloc(sizeof(int) * cnt);
  int i, k;
  for (k = 0; k < cnt; k++) {

    for (i = 0; i < cnt; i++) {
      m[k][i] = 7;
      printf("%d ", m[k][i]);
      free(m);
      m = NULL;
    }
    printf("\n");
  }
  return 0;
}