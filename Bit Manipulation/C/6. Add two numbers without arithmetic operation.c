#include<stdio.h>

int add(int a, int b){
    if (a < b) add(b, a);

    while (b){
        int t = (a&b)<<1;
        a = a^b; 
        b = t;
    }

    return a;
}

int main()
{
    int a = 3, b = 1;
    int result = add(a, b);
    printf("Result: %d", result);
    return 0;
}
 
