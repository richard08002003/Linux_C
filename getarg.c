#include <stdio.h>
#include "getarg.h"

int getarg( int argc , char* argv[] ) {
    int i ;
    printf("<<< get argument list >>>\n") ;
    for ( i = 0 ; i < argc ; i++ ) {
        printf("argv[%d] = %s \n" , i , argv[i] ) ;
    }
    return 0 ;
}
