//code by tanvimuley
#include <stdio.h>

int main() {
    int i=2, n, f=0;
    printf("Enter the number to be checked: ");
    scanf("%d",&n);
    
    while(i<n)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
        i++;
    }
    if(f==0)
        printf("\nIt's a prime number");
    else 
        printf("\nIt's not a prime number");

    return 0;
}
/* Enter the number to be checked: 23

It's a prime number  */
