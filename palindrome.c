#include <stdio.h>

int main() {
    int dn, d, n, temp=0, sum=0;
    printf("Enter the number- ");
    scanf("%d",&n);
    dn=n;
    while(dn!=0)
    {
        d=dn%10;
        sum=sum+d;
        temp=(temp*10)+d;
        dn=dn/10;
    }
    printf("\nSum of individual digits = %d",sum);
    
    if (temp==n)
        printf("\n%d is a palindrome",n);
    else
        printf("\n%d is not a palindrome",n);

    return 0;
}
/* Output 1-
Enter the number- 5357

Sum of individual digits = 20
5357 is not a palindrome
 Output 2-
Enter the number- 1221

Sum of individual digits = 6
1221 is a palindrome */
 
