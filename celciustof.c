#include<stdio.h>

//°F = °C × (0.18) + 32
float tempf(float n);
int main()
{
printf("the farahenite:%f\n",tempf());
return 0;
}
float tempf(float n)
{
    float fahernite = n*(1.8)+ 32;
    return fahernite;
}
