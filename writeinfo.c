#include <stdio.h>
#include <string.h>
#include "writeinfo.h"

#define FILENAME "logfile.txt"

static const char info [ ] = {"write information to file . . . "} ;

int writeinfo(const char * string , int number) {
    FILE *file ;
    char writestring[1024] ;
    int sum = 0 ;

    file = fopen( FILENAME , "wb" ) ;
    if ( file == NULL ) {
        return -1 ;
    }
    sprintf (writestring , "%s\nstring : %s, number : %d\n", info , string , number ) ;
    sum = fwrite ( writestring , 1 , strlen(writestring) , file ) ;
    fclose(file) ;
    return sum ;
}
