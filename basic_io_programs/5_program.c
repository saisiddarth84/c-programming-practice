// 5. WAP to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter the cost price and selling price of banana per dozen:\n");
    scanf("%d %d",&cp,&sp);
    float profit = (sp - cp)/12.0 * 25;
    printf("Profit or loss occured is %f",profit);  // -ve means loss and +ve means profit
    return 0;
}
