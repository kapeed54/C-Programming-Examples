#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%2==0)
        printf("The number is even");
    else
        printf("The number is odd");
    getch();
}
