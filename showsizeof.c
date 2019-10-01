#include <stdio.h>

void showsizeof(void) {

// Datentypen
  char c;
  
  short int si;
  int i;
  long int li;
  long long int lli;
  
  float f;
  double d;
  long double ld;
  
  _Bool b;
  
  printf("Speicherplatz:\n**************\n$n");
  
  printf("char \t\t: %d Byte \n\n", sizeof(c));
  printf("short int \t: %d Byte \n", sizeof(si));
  printf("int \t\t: %d Byte \n", sizeof(i));
  printf("long int \t: %d Byte \n", sizeof(li));
  printf("long long int \t: %d Byte \n\n", sizeof(lli));
  printf("float \t\t: %d Byte \n", sizeof(f));
  printf("double \t\t: %d Byte \n", sizeof(d));
  printf("long double \t\t: %d Byte \n\n", sizeof(ld));
  printf("_Bool \t\t: %d Byte \n", sizeof(b));
  
 }