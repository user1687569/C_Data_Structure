#include <stdio.h>

#define NUM 3

int main()
{
    int matrix_a[NUM][NUM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix_b[NUM][NUM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix_c[NUM][NUM] = {0};

    for(int i = 0; i < NUM; i++)
        for(int j = 0; j < NUM; j++){
            matrix_c[i][j] = 0;
            for(int k = 0; k < NUM; k++)
                matrix_c[i][j] = matrix_c[i][j] +
                        matrix_a[i][k] * matrix_b[k][j];
        }

    for(int i = 0; i < NUM; i++)
    {
        for(int j = 0; j < NUM; j++)
            printf("%5d", matrix_c[i][j]);
        printf("\n");
    }

    return 0;
}
