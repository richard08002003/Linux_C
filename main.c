#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "getarg.h"
#include "writeinfo.h"

char ro_data[1204] = {"ReadOnly Data"} ;
static char rw_data[1024] = {"ReadWrite Data"} ;
static char bss_data[1024] ;

int main( int argc , char* argv[] ) {
    int sum ;
    printf("========== main begain ==========\n") ;

    //Call getarg
    getarg(argc,argv) ;
    //Call writeinfo
    sum = writeinfo(argv[0],1234) ;
    printf("write sum : %d\n", sum ) ;

    strcpy( bss_data , "BSS Data") ;
    printf("ro_data : %p, %s\n", ro_data , ro_data ) ;
    printf("rw_data : %p, %s\n", rw_data , rw_data ) ;
    printf("bss_data : %p, %s\n", bss_data , bss_data ) ;

    printf("==========  main end ==========\n") ;
    return 1;
}


