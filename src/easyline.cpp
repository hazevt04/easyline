// C++ File for easyline

#include <climits>

#include "utils.h"
#include "factorial.h"
#include "easyline.h"


ullong easyline( const ullong num, const bool debug = false ) {
   if ( num == 0 ) {
      return 1;
   } else {
      ullong sum = 1;
      ullong fact_n = factorial( num );

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
