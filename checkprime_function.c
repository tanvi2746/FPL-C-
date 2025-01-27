#include <stdio.h>
int checkprime(int);

int main() {
    int n;
    printf("Enter the number to be checked: ");
    scanf("%d",&n);
    
    if(checkprime(n)==0)
        printf("\n%d is a prime number.",n);
    else
        printf("\n%d is not a prime number.",n);
   
    return 0;
}

int checkprime(int x)
{
    int i=2, f=0;
    while(i<x)
    {
        if(x%i==0)
        {
            f=1;
            break;
        }
        i++;
    }
    return f;
}

/* Output-
Enter the number to be checked: 17

17 is a prime number.  */

