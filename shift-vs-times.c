
#include "stdlib.h"
#include "stdio.h"

volatile int two = 2;
volatile int one = 1;

const long MAX = (long)1000*1000*1000*10;

int main()
{
  long i,j;
  long a = random() % 1000;
  long c = 0;
  for(i=0; i < MAX; i++)
  {
    a = a * 2;
    //a += a;
    //a = a << one;
    
    c++;
  }

  printf("c = %ld\n", c);
  printf("i = %ld\n", i);
  return a;
}
