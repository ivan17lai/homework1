#include <stdio.h>

int getGCD_recursion(int a, int b) {
    
    return 0;
}

int getGCD_loop(int a, int b) {
    
    int gcd = 0;
    
    gcd = getGCD_recursion(a, b);
    
    return gcd;
}

int main()
{
    int n1, n2, gcd;
    
    printf("Number 1: ");
    scanf("%d", &n1);
    printf("Number 2: ");
    scanf("%d", &n2);
    
    gcd = getGCD_loop(n1, n2);
    
    printf("GCD: %d", gcd);

    return 0;
}
