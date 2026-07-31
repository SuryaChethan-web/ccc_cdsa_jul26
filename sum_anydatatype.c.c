#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);

    long long int sum = a + b;

    if (a + b - sum != 0.0)
        printf("%lf", a + b);
    else
        printf("%lld", sum);

    return 0;
}