#include <stdio.h>
#include <stdlib.h>

int main() {
    int width = 5;
    int height = 3;
    int **mass = 0;

    mass = malloc(sizeof(*mass) * width);

    for (int i = 0; i < width; i++) mass[i] = malloc(sizeof(**mass) * height);

    for (int j = 0; j < height; j++)
        for (int i = 0; i < width; i++) mass[i][j] = 100 * j + i;

    for (int j = 0; j < height; j++)
        for (int i = 0; i < width; i++) printf("%d\t%s ", mass[i][j], (i == width - 1) ? "\n" : "");

    for (int i = 0; i < width; i++) free(mass[i]);
    free(mass);

    return 0;
}