#include <stdio.h>
int checkArmstrong(int a);
int checkPerfect(int a);
 
int main()
{
    int a;
	printf("\n\n Function : check Armstrong and perfect numbers :\n"); 	
     
    printf(" Enter any number: ");
    scanf("%d", &a);
     
    if(checkArmstrong(a))
    {
        printf(" The %d is an Armstrong number.\n", a);
    }
    else
    {
        printf(" The %d is not an Armstrong number.\n", a);
    }
    
    if(checkPerfect(a))
    {
        printf(" The %d is a Perfect number.\n\n", a);
    }
    else
    {
        printf(" The %d is not a Perfect number.\n\n", a);
    }
    return 0;
}

int checkArmstrong(int a) 
{
    int ld, sum, num;
    sum = 0;
    num = a;
    while(num!=0)  
    {  
        ld = num % 10;   
        sum += ld * ld * ld;
        num = num/10;  
    }
    return (a == sum);
}
 
int checkPerfect(int a) 
{
    int i, sum, num;
    sum = 0;
    num = a;
    for(i=1; i<num; i++)  
    {   
        if(num%i == 0)  
        {  
            sum += i;  
        }  
    }
    return (a == sum);
}
