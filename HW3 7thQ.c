#include <stdio.h>
double cube(double num);

int main()
{
    int num;
    double a;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    a = cube(num);

    printf("Cube of %d is %.2f", num, a); 
    
    return 0;
}

double cube(double num)
{
    return (num * num * num);
}
