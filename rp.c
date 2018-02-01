#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a==0)
    printf("zero");
    else if(a<0)
    printf("Negative");
    else
    printf("Positive");
    
}
