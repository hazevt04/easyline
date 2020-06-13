# easyline

# Description
For given positive integer n, calculate the sum of the squares in the n-th row of Pascals triangle

Each item of each row is a binomial coefficient computed by

For the n-th row, the k-th item is
"n choose k" = n!/(k!\*(n-k)!)

There is no big integer builtin for C++. Initially this should return

round( log( easyline(n) )

GMP (GNU Multi-Precision) Library offers big integer support and this could be added later.

# Usage
./easyline <n>

Due to C++ not having a big integer builtin, n is limited, depending on the platform's
max unsigned long long int (AKA ULLONG\_MAX in climits.h)


