#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sort_number(const void *a, const void *b);
int sort_string(const void *a, const void *b);

int main() {
    int number_mass[] = {4, 8, 2, 6, 1, 9, 0, 5, 3, 7, 10};
    qsort(number_mass, 11, sizeof(int), sort_number);
    fprintf(stdout, "Вывожу отсортерованный массив:\n");
    for (int i = 0; i < 11; i++) {
        fprintf(stdout, "%d ", number_mass[i]);
    }
    fprintf(stdout, "\n");

    char *string_mass[] = {"Артем", "Екатерина", "Владлена", "Марина"};
    qsort(string_mass, 4, sizeof(char *), sort_string);
    fprintf(stdout, "Вывожу отсортерованный массив имен:\n");
    for (int i = 0; i < 4; i++) {
        fprintf(stdout, "%s ", string_mass[i]);
    }
    fprintf(stdout, "\n");
}

int sort_number(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    return x - y;
}

int sort_string(const void *a, const void *b) {
    char **x = (char **)a;
    char **y = (char **)b;
    return strcmp(*x, *y);
}