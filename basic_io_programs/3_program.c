// 3. WAP to calculate simple interest
#include<stdio.h>
int main()
{
    float p,t,r,si;
    printf("Enter the priniple amount , time and interest:\n");
    scanf("%f %f %f",&p,&t,&r);
    si = (p * t * r) / 100;
    printf("The simple interest for the given principle amount is %f",si);
    return 0;
}
