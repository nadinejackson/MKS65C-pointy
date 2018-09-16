#include <stdio.h>
int main()
{
  unsigned int tester = 3456789123;
  char * pointy = &tester;
  
  int i;
  char * m = pointy;

  printf("this is the int in hex: %x\n", tester);
  printf("this is the int in decimal: %u\n", tester);
  for (i = 0; i < 4; i++){
    printf("this is byte %d in hex: %hhx\n", i,  *m);
    printf("this is byte %d in decimal: %hhu\n", i, *m);
    m ++;
  }
  printf("~~~~~~~~~~~~~~~~~~ADDING ONE ~~~~~~~~~~~~~~~~~\n");
  m = pointy;
  for (i = 0; i < 4; i++){
    *m += 1;
    printf("this is byte %d in hex: %hhx\n", i, *m);
    printf("this is byte %d in decimal: %hhu\n", i, *m);
    m ++;
  }
  printf("~~~~~~~~~~~~~~~~~~ADDING 16~~~~~~~~~~~~~~~~~~\n");
  m = pointy;
  for (i = 0; i < 4; i++){
    *m += 16;
    printf("this is byte %d in hex: %hhx\n", i, *m);
    printf("this is byte %d in decimal: %hhu\n", i, *m);
    m++;}
  return 0;
}
