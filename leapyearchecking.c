#include <stdio.h>
int main()
{
    int year;
    printf("Enter year for checking if leap or not");
    scanf("%d", &year);
    ((year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0))) ? printf("Your typed year is leap"): printf("Your Typed year is not leap");






return 0;
}
