#include <stdio.h>
#include <stdbool.h>

int posOfsetBit(int n){
    if (!n) return 1;
    return log2(n)+1;
}

int main()
{
    int n  = 4;
    int res = posOfsetBit(4);
    printf("%d", res);
    return 0;
}
