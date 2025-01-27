#include <stdio.h>
void swap(int *,int *);  //function prototyping

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);          //function calling
    printf("After swapping: num1 = %d, num2 = %d\n",num1,num2);

    return 0;
}

void swap(int *a, int *b)         //function definition
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Output-
Enter first number: 3
Enter second number: 2

Before swapping: num1 = 3, num2 = 2
After swapping: num1 = 2, num2 = 3  */
