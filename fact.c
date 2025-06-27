#include<stdio.h>
int main()
{
    
    int i,num;
    printf("Program to calculate the factorial of a number\n");
    printf("Enter a number: ");
    scanf("%d",&num);
    for (i=1; i<=num; i++)
    {
        printf("%d",i);
        if (i<num)
        printf(" x ");
    }
}