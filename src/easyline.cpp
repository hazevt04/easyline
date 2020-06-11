// C++ File for easyline

#include <climits>

#include "utils.h"
#include "factorial.h"
#include "easyline.h"

ullong find_max_factorial_for_ullong() {
   ullong index = 1;
   ullong prev_test_result = 1;
   while( index < ULLONG_MAX ) {
      ullong test_result = factorial( index );
      if ( test_result < prev_test_result ) {
         --index;
         break;
      }
      prev_test_result = test_result;
      ++index;
   }
   return index; 
}

ullong easyline( const ullong num, const bool debug = false ) {
   if ( num == 0 ) {
      return 1;
   } else {
      ullong sum = 1;
      ullong fact_n = factorial( num );

      ullong check = find_max_factorial_for_ullong();

      for( ullong index = 1; index < num; ++index ) {
         ullong fact_i = factorial( index );
         ullong fact_n_minus_i = factorial( num - index );
         ullong temp = fact_n / ( fact_i * fact_n_minus_i );
         sum += temp * temp;
      }
      return sum + 1;
  }
}


// end of C++ file for easyline
