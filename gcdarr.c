#include <stdio.h>
int GCD(int a, int b)
{
    if(b == 0)
        return a;
    return GCD(b,a % b);
}
int GCDofArr(int*arr, int n)
{
    int common = arr[0];
    for(int i = 1; i < n; i++)
    {
        common = GCD(arr[i], common);
    }
    return common;
}

int main()
{   
    const int n = 3;
    int arr[n];
    for(int i = 0; i < n; i++)
        {
            printf("Enter your %d number  ", i + 1);
            scanf("%d", &arr[i]);
        
        }
    printf("GCD in array is %d", GCDofArr(arr, n));
    return 0;


   






}
