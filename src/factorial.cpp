// C++ File for factorial

#include "factorial.h"

unsigned long long factorial( unsigned long long num ) {
   unsigned long long result = 1;
   for( unsigned long long index = 1; index <= num; ++index ) {
      result = result * index;
   } 
   return result;
}

// end of C++ file for factorial
