#include<stdio.h>
int main()
{
    int year;
    float price;
    char letter;
    char name[15];
    printf("Enter a year: ");
    scanf("%d", &year);

    printf("Enter the price: ");
    scanf("%f",price);

    printf("Enter a letter: ");
    scanf("%c",letter);

    printf("Enter a name: ");
    scanf("%s",name);

    return 0;
}