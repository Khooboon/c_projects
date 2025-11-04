#include <stdio.h>

void main(void)
{
    float area;
    int base = 5;
    int high = 10;
    printf("Enter Base");
    scanf("%d", &base);
    printf("Enter High");
    scanf("%d", &high);
    area = 0.5 * base * high;
    // printf("Base = %d \n", high);
    // printf("High = %d \n", base);
    // intf("Area = %.3f \n", area);
    printf("Base = %d, \nHigh = %d, \nArea = %.3f \n", base, high, area);
}