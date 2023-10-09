#include <stdio.h>
void Input_number(void);
void is_palindrome(int num);
int main(void)
{
    Input_number();
    return 0;
}
void Input_number(void)
{
    int number;
    printf("Enter a 3 digit Number : ");
    scanf("%d", &number);
    is_palindrome(number);
}
void is_palindrome(int num)
{
    int first_number = num / 100, third_number = num % 10;
    if (first_number == third_number)
    {
        printf("Yes! Number is Palindrome");
    }
    else
    {
        printf("No! Number is Not Palindrome");
    }
}