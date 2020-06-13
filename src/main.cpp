// C++ File for main
#include <climits>
#include <sstream>

#include "utils.h"
#include "easyline.h"
#include <gmpxx.h>

void usage( const char* prog_name ) {
   std::cout << "Usage: " << prog_name << " <num values>\n";
   std::cout << "\n";
}

int main( int argc, char** argv ) {
   bool debug = false;
   mpz_class num = 2;
   std::ostringstream err_msg_stream( std::ostringstream::ate );

   try {
      if ( argc > 2 ) {
         debug_cout( debug, "argv[2] = ", argv[2], "\n" ); 
         if ( ( strcmp( argv[2], "-d" ) == 0 ) ||
               ( strcmp( argv[2], "--debug" ) == 0 ) ) {
            debug = true;
         }
      }
      if ( argc > 1 ) {
         debug_cout( debug, "argv[1] = ", argv[1], "\n" ); 
         num = argv[1];
      }
      
      mpz_class result = easyline( num, debug );
      std::cout << "Sum of the squares of row " << num << " in Pascal's Triangle is " << result << "\n"; 
      return EXIT_SUCCESS;
   
   } catch( std::exception& ex ) {
      std::cout << "ERROR: " << ex.what() << "\n"; 
      return EXIT_FAILURE;
   }
   
}

