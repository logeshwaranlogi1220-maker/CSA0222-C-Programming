#include <stdio.h>

unsigned long original_count = 0;
unsigned long improved_count = 0;

int original_prime(unsigned long n)
{
    original_count = 0;

    if (n < 2)
        return 0;

    for (unsigned long i = 2; i < n; i++)
    {
        original_count++;

        if (n % i == 0)
            return 0;
    }

    return 1;
}

int improved_prime(unsigned long n)
{
    improved_count = 0;

    if (n < 2)
        return 0;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
    {
        improved_count++;
        return 0;
    }

    improved_count++;

    for (unsigned long i = 3; i <= n / i; i += 2)
    {
        improved_count++;

        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    unsigned long numbers[] = {
        97, 100, 7919, 1000003
    };

    printf("Number\tOriginal\tImproved\n");

    for (int i = 0; i < 4; i++)
    {
        unsigned long n = numbers[i];

        int a = original_prime(n);
        int b = improved_prime(n);

        printf("%lu\t%s (%lu)\t%s (%lu)\n",
               n,
               a ? "Prime" : "Not Prime",
               original_count,
               b ? "Prime" : "Not Prime",
               improved_count);
    }

    return 0;
}
