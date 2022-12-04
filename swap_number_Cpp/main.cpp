#include <iostream>

using namespace std;

void swap1(float *m, float *n);
void swap2(float *m, float *n);
void swap3(float &m, float &n);

int main()
{
    std::cout << "Swap number!\n";
    float a, b, *p1, *p2;
    a = 3.0;
    b = 5.0;
    p1 = &a;
    p2 = &b;

    swap1(p1, p2);
    std::cout << "After swap1, a = " << a << ", b = " << b << std::endl;

    swap2(p1, p2);
    std::cout << "After swap2, a = " << a << ", b = " << b << std::endl;

    float x = 7.0;
    float y = 8.0;
    swap3(x, y);
    std::cout << "After swap3, x = " << x << ", y = " << y << std::endl;
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

void swap3(float &m, float &n)
{
    float temp;
    temp = m;
    m = n;
    n = temp;
}

