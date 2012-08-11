#include <stdio.h>

char alphabet[1000] = {0};
char alphabet125[125] = {0};
char alphabet248_1[248] = {0};
char alphabet248_2[248] = {0};
char alphabet124[124] = {0};

const int LIM1 = 125;
const int LIM2 = 248;
const int LIM3 = 124;

int c, i, i1, i2 = 0;

int main() {
  while ( ( c = getchar() ) != EOF )
    alphabet[i++] = c;

  for (i2 = 0 ; i2 < LIM1; i2++ )
    alphabet125[i2] = alphabet[i1++];

  for (i2 = 0 ; i2 < LIM2; i2++ )
    alphabet248_1[i2] = alphabet[i1++];

  for ( i2 = 0; i2 < LIM2; i2++ )
    alphabet248_2[i2] = alphabet[i1++];

  for ( i2 = 0; i2 < LIM3; i2++ )
    alphabet124[i2] = alphabet[i1++];

  for ( i2 = 0; i2 < LIM1; i2++ )
    printf("%c     ", alphabet125[i2]);

  printf("\n ");

  for ( i2 = 0; i2 < LIM2; i2++ )
    printf("%c   %c ", alphabet248_1[i2], alphabet248_1[++i2]);

  printf("\n  ");

  for ( i2 = 0; i2 < LIM2; i2++ )
    printf("%c %c   ", alphabet248_2[i2], alphabet248_2[++i2]);

  printf("\n   ");

  for ( i2 = 0; i2 < LIM3; i2++ )
    printf("%c     ", alphabet124[i2]);

  return 0;
}
