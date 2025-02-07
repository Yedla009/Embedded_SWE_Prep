#include<stdio.h>
int setallbitgivenrange(int n, int l, int r)
{
    int range = (((1 << (l - 1)) - 1) ^   ((1 << (r)) - 1)); // Remember this
    return (n | range);
}
int main()
{
    // here, l, r are indexed from 1, not from 0
    int n = 17, l = 2, r = 3;
    printf("%d", setallbitgivenrange(n, l, r));
    return 0;
}
