#include <stdio.h>

void swap1(float *m, float *n);
void swap2(float *m, float *n);


int main()
{
    printf("Swap number!\n");
    float a, b, *p1, *p2;
    a = 3.0;
    b = 5.0;
    p1 = &a;
    p2 = &b;

    swap1(p1, p2);
    printf("After swap1, a = %f, b = %f\n", a, b);

    swap2(p1, p2);
    printf("After swap2, a = %f, b = %f\n", a, b);
    return 0;
}

void swap1(float *m, float *n)
{
    float temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

void swap2(float *m, float *n)
{
    float *t;
    t = m;
    m = n;
    n = t;
}
