 4. WAP to swap values of two int variables.
#include<stdio.h>
int main()
{
    int a,b,;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf(" Before swapping: a = %d , b = %d\n",a,b);
    x = b;
    b = a;
    a = x;
    printf(" After swapping: a = %d , b = %d",a,b);
    return 0;
}
