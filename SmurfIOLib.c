#include "SmurfIOLib.h"

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <windef.h>

int In() //ввод с защитой от юзера
{
    int RightNumber = 0 ;
    while(scanf( "%d" , &RightNumber ) != 1 )
    {
        printf( "Uncorect datatype, print once more_" ) ;
        while( getchar() != '\n' ) ;
    }
    return RightNumber ;
}

/*
 * чтение строки заранее заданной длинны
 */

void StringRead( char *string ,  int index )
{
    scanf( "%c" , *string ) ;
    *string ++ ;
    for( int i = 1 ; i < index ; i ++ , *string ++ ) string = getch() ;
}