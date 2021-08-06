#include<stdio.h>
const int maxN=1e5;

int memo[100000];

void fibbonacci(int index, int n)
{
    memo[index] = memo[index - 1] + memo[index - 2];

    if(index == n * 3){

      printf("%d",memo[index]);
      return;
      }
    if(index % 3 == 0)  {

      printf("%d,",memo[index]);
      
      }
    fibbonacci(index + 1 , n);
}

void fib(int n) {
   
    memo[1] = 1;
    memo[2] = 1;
    fibbonacci(3,n);
}

int main()
{
    int n ;
    printf("Enter n = ");
    scanf("%d",&n);
    fib(n);

}