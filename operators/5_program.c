// 5. WAP to swap values of two int variables without using third variable without arthematic operators.
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d, b=%d\n",a,b);
    a = a ^ b;  
    b = a ^ b;      
    a = a ^ b;  
    printf("a=%d, b=%d",a,b);
    return 0;
}
