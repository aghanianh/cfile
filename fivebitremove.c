#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    num ^ (1<<5) ? num = num & ~(1 << 5): num;
        
        
    printf("Your number has became %d ", num);
    return 0;
}
