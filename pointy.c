#include <stdio.h>
int main()
{
  unsigned int tester = 3456789123;
  char * pointy = &tester;
  printf("this is the int in hex: %x\n", tester);
  printf("this is the int in decimal: %u\n", tester);
  printf("this is the first byte in storage %hhx\n", *pointy);
  int i;
  char * m = pointy;
  for (i = 0; i < 4; i++){
    *m += 1;
    printf("this is the int in hex: %x\n", tester);
    printf("this is the int in decimal: %u\n", tester);
    m ++;
  }
  m = pointy;
  for (i = 0; i < 4; i++){
    *m += 16;    
    printf("this is the int in hex: %x\n", tester);
    printf("this is the int in decimal: %u\n", tester);
    m++;}
  return 0;
}
