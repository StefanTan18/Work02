#include <stdio.h>

int main(){
  unsigned int my_int = 2345678900;
  char *c = &my_int;
  printf("My integer in hexadecimal is... %x\n", my_int);
  for(int i = 0; i < 4; i++){
    printf("Byte %d... %hhx\n", i, *c);
    c++;
  }

  c = &my_int;
  for(int i = 0; i < 4; i++){
    *c++;
    c++;
  }
  printf("The decimal value after incrementing each byte by 1 is... %d\n", my_int);
  printf("The hex value after incrementing each byte by 1 is... %x\n", my_int);

  c=&my_int;
  for(int i = 0; i < 4; i++){
    *c+=16;
    c++;
  }
  printf("The decimal value after incrementing each byte by 16 is... %d\n", my_int);
  printf("The hex value after incrementing each byte by 16 is... %x\n", my_int);
  return 0;
}


  
  
