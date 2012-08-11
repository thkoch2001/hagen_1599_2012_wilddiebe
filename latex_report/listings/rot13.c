#include <stdio.h>
#include <ctype.h>

int rot13( int c );

int main() {
  int c;
  while ( ( c = getchar() ) != EOF ) {
    putchar( rot13( c ) );
  }

  return 0;
}

int rot13( int c ) {
  return ( isalpha(c) )
         ? (( tolower(c) > 'm' )
           ? ( c - 13 )
           : ( c + 13 ))
         : c;
}
