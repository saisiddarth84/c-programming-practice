// 4. WAP to print last digit of a given number.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    num = num % 10;
    printf("The last digit of a given number is %d",num);
    return 0;
}
