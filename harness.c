// CPE calculation test harness for polynomial evaluation code

#include <stdio.h>
#include <stdlib.h>
#include "cpe.h"

extern void fact(long len);

#define SAMPLES 200

#define MAX_SIZE 10000
#define INCR  1000


// call back from CPE calculation requires "passing" these two 
// variables as file globals

/* Used to make sure code doesn't get optimized away */
volatile long sink; 

/* purpose: initialize the polynomial's coefficients
 * input:   nothing
 * output:  coefficients a_i are given random values (either -1 or 1)
 */
static void setup()
{

  

}



/* purpose: call-back from the CPE calculating code
 * input:   the number of elements to use
 * output:  nothing 
 */
void run_it(long len) 
{
  fact(len);
}


int main () 
{

  setup();

  FILE *f = NULL;
  double cpe = find_cpe_full(run_it, MAX_SIZE, SAMPLES, f, RAN_SAMPLE, 0.3, 2);
  printf("CPE is %.2f cycles per element\n", cpe);
}
