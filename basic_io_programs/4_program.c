// 4. WAP to calculate the volume of cuboid.
#include<stdio.h>
int main()
{
    float l,w,h,v;
    printf("Enter the length,width,height of a cuboid:\n");
    scanf("%f %f %f",&l,&w,&h);
    v = l * w * h;
    printf("The volume of cuboid is %f",v);
    return 0;
}
