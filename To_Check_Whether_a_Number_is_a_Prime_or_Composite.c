//To Check whether a Number is a Prime Number or a Composite Number
#include <stdio.h>
int main()
{
    int n;

    printf("Enter the Number to be checked:");
    scanf("%d", &n);//Taking the Input of N

    for (int i = 1; i; i++)
    {
        if (n % i == 0 && i != n)
        {
            printf("The Number %d is a Composite Number\n", n);
            break;
        }
        else
        {
            printf("The Number %d is a Prime Number\n", n);
            break;
        }
    }

    return 0;
}
