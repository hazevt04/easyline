// C++ File for easyline

#include "utils.h"
#include <gmpxx.h>
#include "easyline.h"

mpz_class easyline( const mpz_class num, const bool debug = false ) {
   if ( num == 0 ) {
      return 1;
   } else {
      mpz_class sum = 1;
      mpz_class fact_n = factorial( num );

      for( mpz_class index = 1; index < num; ++index ) {
         mpz_class fact_i = factorial( index );
         mpz_class fact_n_minus_i = factorial( num - index );
         mpz_class temp = fact_n / ( fact_i * fact_n_minus_i );
         sum += temp * temp;
      }
      return sum + 1;
  }
}

// end of C++ file for easyline
