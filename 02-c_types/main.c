#include <stdio.h>

int main(void) {
  // Main primitive data types:
  int size_int = sizeof(int);       // 4 bytes
  int size_char = sizeof(char);     // 1 byte
  int size_float = sizeof(float);   // 4 bytes
  int size_double = sizeof(double); // 8 bytes
  void justAnExample(void);         // it's used to represent nothingness

  // Note: The long, short, signed and unsigned are datatype
  // modifier that can be used with some primitive data types
  // to change the size or length of the datatype.

  int size_short_int = sizeof(short int);             // 2 bytes
  int size_u_short_int = sizeof(unsigned short int);  // 2 bytes
  int size_u_int = sizeof(unsigned int);              // 4 bytes
  int size_u_ll_int = sizeof(unsigned long long int); // 8 bytes
  int size_ll_int = sizeof(long long int);            // 8 bytes
  int size_u_char = sizeof(unsigned char);            // 1 byte
  int size_l_double = sizeof(long double);            // 16 bytes

  printf("size int in bytes: %d\n", size_int);
  printf("size char in bytes: %d\n", size_char);
  printf("size float in bytes: %d\n", size_float);
  printf("size double in bytes: %d\n", size_double);
  printf("size short int in bytes: %d\n", size_short_int);
  printf("size unsigned short int in bytes: %d\n", size_u_short_int);
  printf("size unsigned int in bytes: %d\n", size_u_int);
  printf("size unsigned long long int in bytes: %d\n", size_u_ll_int);
  printf("size long long int in bytes: %d\n", size_ll_int);
  printf("size unsigned char in bytes: %d\n", size_u_char);
  printf("size long double in bytes: %d\n", size_l_double);
}
