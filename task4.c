#include <stdio.h>
#include <math.h>
void display_result(float x, float y,float res);
float add(float a, float b);
float sqrroot(float a);
float div(float numerator, float denomenator);
int main(void)
{
    float x,y;
    printf("Enter two numbers x and y : ");
    scanf("%f %f",&x,&y);
    display_result(x,y,sqrroot(div(add(x,y),2)));
    return 0;
}

void display_result(float x, float y,float res){
    printf("sqrt( ( %.2f + %.2f ) / 2 ) ) = %.3f",x,y,res);
}
float add(float a, float b)
{
    return (a + b);
}
float sqrroot(float a)
{
    return sqrt(a);
}
float div(float numerator, float denomenator)
{
    return numerator / denomenator;
}