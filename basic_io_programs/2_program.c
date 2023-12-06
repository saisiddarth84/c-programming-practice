// 2. WAP to calculate circumference of a circle
#include<stdio.h>
int main()
{
    int r;
    float circumference;
    printf("Enter the radius of a circle:\n");
    scanf("%d",&r);
    circumference = 2 * 3.14 *r;
    printf("The circumference of the circle is %f",circumference);
    return 0; 
}
