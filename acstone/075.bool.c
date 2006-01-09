/**********************************************************************
 It is a simple main function that uses various boolean operators.
**********************************************************************/

/* The file begin.h is included if compiler flag -DBEGINCODE is used */
#ifdef BEGINCODE
#include "begin.h"
#endif

int main() {

  unsigned long long int a,b;
  
  a=0xAAAAAAAAAAAAAAAAULL;
  b=a|0xF0F0F0F0F0F0F0F0ULL;
  /* Before b must be 18085043209519168250 */ b=0;
  b=a&0xF0F0F0F0F0F0F0F0ULL;
  /* Before b must be 11574427654092267680 */ b=0;
  b=a^0xF0F0F0F0F0F0F0F0ULL;
  /* Before b must be 6510615555426900570 */ b=0;
  b=~(a|0xF0F0F0F0F0F0F0F0ULL);
  /* Before b must be 361700864190383365 */ b=0;
  b=~(a&0xF0F0F0F0F0F0F0F0ULL);
  /* Before b must be 6872316419617283935 */ b=0;
  b=~(a^0xF0F0F0F0F0F0F0F0ULL);
  /* Before b must be 11936128518282651045 */ b=0;
  b=~0xF0F0F0F0F0F0F0F0ULL;
  /* Before b must be 1085102592571150095 */ b=0;

  return 0; 
  /* Return 0 only */
}

/* The file end.h is included if compiler flag -DENDCODE is used */
#ifdef ENDCODE
#include "end.h"
#endif
