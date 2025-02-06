#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<11;i++)
    {
        int product=num*i;
        printf("%d x %d = %d\n",num, i, product);
    }
    return 0;
}