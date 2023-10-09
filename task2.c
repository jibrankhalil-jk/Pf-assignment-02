#include <stdio.h>

void div_pizza(int n);
void div_drink_glasses(int n);
void div_amount(int n);

int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    div_pizza(n);
    printf("\n");
    div_drink_glasses(n);
    div_amount(n);
    return 0;
}

void div_pizza(int n)
{

    ++n; // adding yout to the total people in boys
    int piza_quantity = 3;
    int slices_per_piza = 8;
    int total_piza_slices = piza_quantity * slices_per_piza;

    if (n <= 0)
    {
        --n;
        printf("%d", n);
    }
    else
    {
        printf("%d", total_piza_slices / n);
    }
}
void div_drink_glasses(int n)
{
    ++n;
    int drink_quantity = 3;
    int glasses_per_drick = 5;
    int total_drink_glasses = drink_quantity * glasses_per_drick;

    if (n <= 0)
    {
        --n;
        printf("%d", n);
    }
    else
    {
        printf("%d", total_drink_glasses / n);
    }
}

void div_amount(int n)
{
    int total_amount = 5000;
    int restof50amount = total_amount / 2;

    int amountperPerson;
    if (n <= 0)
    {
        amountperPerson = 0;
    }
    else
    {

        amountperPerson = restof50amount / n;
    }

    printf("\nAmount per person %d", amountperPerson);
}