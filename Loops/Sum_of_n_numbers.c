#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("The sum of numbers till %d is %d",num, sum);
    return 0;
}