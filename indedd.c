#include <stdio.h>
int main()
{
    int n, prime = 0;
    printf("Enter a num: ");
    scanf("%d", &n);
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            prime++;
        }
    }
    if (prime > 0)
    {
        printf("Not a prime number");
    }
    else if (prime == 0)
    {
        printf("Prime number");
    }
    // if(n%n == 0 && n%1 ==0)
    // {
    //     printf("Prime number");
    // }
    // else{
    //     printf("NOt a Prime number"); 
    // }
    return 0;
}