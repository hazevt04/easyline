// C++ File for main
#include <climits>
#include <sstream>

#include "utils.h"
#include "easyline.h"


void usage( const char* prog_name ) {
   ullong max_num = find_max_factorial_for_ullong();
   std::cout << "Usage: " << prog_name << " <num values>\n";
   std::cout << "Num_values must be less than " << max_num << "\n";
   std::cout << "Otherwise, the result will overflow.\n";
   std::cout << "\n";
}

int main( int argc, char** argv ) {
   bool debug = false;
   ullong num = 2;
   std::ostringstream err_msg_stream( std::ostringstream::ate );

   ullong max_num = find_max_factorial_for_ullong();

   try {
      if ( argc > 1 ) {
         debug_cout( debug, "argv[1] = ", argv[1], "\n" ); 
         char* end_ptr = nullptr;
         num = strtoul( argv[1], &end_ptr, 10 );
         if  ( end_ptr == nullptr ) {
            err_msg_stream << "Invalid input: " << argv[1];
            throw std::invalid_argument( err_msg_stream.str() );
         }
         if ( num > max_num ) {
            err_msg_stream << "Input out of range for this platform: " << argv[1];
            throw std::invalid_argument( err_msg_stream.str() );
         }
      }
      
      ullong result = easyline( num, debug );
      std::cout << "Sum of the squares of row " << num << " in Pascal's Triangle is " << result << "\n"; 
      return EXIT_SUCCESS;
   
   } catch( std::exception& ex ) {
      printf( "ERROR: %s\n", ex.what() ); 
      return EXIT_FAILURE;
   }
   
}

