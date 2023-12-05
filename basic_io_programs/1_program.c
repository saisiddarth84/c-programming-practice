// 1. Write a program to calculate average of three numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter three integers:\n");
    scanf("%d %d %d",&a,&b,&c);

    avg = (a + b + c) / 3.0;   

    printf("The average of three integers is %f",avg);
    return 0;
}

