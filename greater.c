#include<stdio.h>
 
{
  unsigned count = 0;
 
  if (n && !(n&(n-1))
  while( n != 0)
  {
    n  >>= 1;
    count += 1;
  }
 
  return 1 << count;
}
 
int main()
{
  printf("%d", nextPowerOf2(n));
  return 0;
}
