#include<stdio.h>
#include<math.h>

int posRmB(int n){
  return n > 0 : (log2(n & ~(n - 1)) + 1) : 0;
}

int main()
{
  printf("Pos Res = %d", posRmB(12);  // Pos Res = 3
  return 0;
}
