#include <stdio.h>
// This is a simple C program that prompts the user for their name and age,
int main() {
    char Name[50] ;
    int  Age = 0 ;
    printf( "Enter your name: " ) ;
    scanf( "%s", Name ) ;
    printf( "Enter your age: " ) ;
    scanf( "%d", &Age ) ; 
    printf( "- - - - - -\n" ) ;
    printf( "Hello %s \n",Name ) ; 
    printf( "Age = %d\n", Age ) ; 
    
}//end main function $ pacman -s --needed base-devel mingw-w64-ucrt-x86_64-toolchain`
 // end of program