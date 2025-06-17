#include<stdio.h>

int main()
{
    int a, b, choice
    printf("Enter your choice \n")
    printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Divission\n\n");
    scanf("%d, &choice");

    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);

    if(choice == 1)
    {
      printf("Addition of %d and %d is %d\n", a, b, (a+b));
    }
    else if(choice == 2)
    {
      printf("Subtraction of %d and %d is %d\n", a, b, (a-b)); 
    }
    else if(choice == 3)
    {
      printf("Multiplication of %d and %d is %d\n", a, b, (a*b)); 
    }else if(choice == 4)
    {
        if(b != 0)
           printf("Division of %d and %d is %d\n", a, b, (a/b)); 
        else
           printf("Number can not be divided by 0\n");
    }
    else
    {
        printf("You have entered the wrong choice\n");
    }

}  