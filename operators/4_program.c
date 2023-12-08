5.WAP to swap values of two int variables without using third variable.
#include<stdio.h>
int main(){
    int a,b;
    a=20, b=30;
    printf("a=%d, b=%d\n",a,b);
    a = a + b;           
    b = a - b;          
    a = a - b;               
    printf("a=%d, b=%d\n",a,b);
    return 0;
}
