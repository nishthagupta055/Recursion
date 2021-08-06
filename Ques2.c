#include<stdio.h>
int gcd(int number1, int number2)
{   if(number2==0)
    return number1;

    gcd( number2 , number1 % number2 );
}
int main()
{
    int number1 ,number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1 , &number2);
    printf("%d\n", gcd( number1 , number2 ));
}