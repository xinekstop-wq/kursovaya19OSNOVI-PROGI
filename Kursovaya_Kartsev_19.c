#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#define N 5

int main(void)
{
    int a[N][N] = {
        {  1, -2,   3,   0,   5 },
        {  4,  5,  -6,   7,  -8 },
        {  9, 10,  11, -12,  13 },
        { -1,  2,   3,   4,  -5 },
        {  6,  7,   8,   9,  10 }
    };
    int i, j;
    int sum = 0, count = 0, other = 0;

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    printf("КУРСОВОЙ ПРОЕКТ\n");
    printf("Основы программирования и алгоритмизации\n");
    printf("Карцев Иван Игоревич, группа бОТИ-262\n");
    printf("Вариант 19\n");
    printf("Тема: сумма и число положительных элементов\n");
    printf("матрицы A над главной диагональю.\n\n");

    printf("Исходная матрица:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (a[i][j] > 0) {
                sum = sum + a[i][j];
                count++;
            }
            else {
                other++;
            }
        }
    }

    if (count == 0) {
        printf("\nНад диагональю нет положительных элементов\n");
    }
    else {
        printf("\nСумма положительных элементов над диагональю: %d\n", sum);
        printf("Количество положительных элементов над диагональю: %d\n", count);
    }
    printf("Остальных элементов над диагональю: %d\n", other);

    system("pause");
    return 0;
}