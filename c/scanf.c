#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++) scanf("%d", &A[i]);

    int m = 0;
    for (int i = 0; i < N; i++)
        for (int k = i + 1; k < N; k++)
            if (A[i] * A[k] % 26 == 0) m++;

    printf("%d\n", m);

    return 0;
}