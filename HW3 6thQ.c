#include <stdio.h>
int sum(int n);
int main()
{
    int a, num, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (a = 2; a <= num / 2; ++a)
    {
        if (sum(a) == 1)
           {
            if (sum(num - a) == 1){
                printf("%d can be expressed as sum of %d and %d.\n", num, a, num - a);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("cannot be expressed as sum of two prime numbers.");
        return 0;
    }
}
    int sum(int n)
    {
        int a, isPrime = 1;
        for (a = 2; a <= n / 2; ++a){
            if (n % a == 0){
                isPrime = 0;
                break;
            }
        }
        return isPrime;
     }
