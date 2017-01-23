/* 
  File name: main.c
  Creator: Matthew Dean.
  Date: 23/01/2017.
*/ 

// Headers.
#include <stdio.h>
#include <stdlib.h>

// Code.
int main(void) {
  float l;
  float f;
  FILE *filelux;
  FILE *filefootcandle;
  
  filelux = fopen("lux.txt", "w");
  filefootcandle = fopen("footcandle.txt", "w");
  
  printf("Please enter lux: ");
  scanf("%f", &l);
  
  printf("Please enter footcandle: ");
  scanf("%f", &f);
  
  printf("Lux entered: %f\n", l);
  fprintf(filelux, "%f", &l);
  fclose(filelux);
  
  printf("Footcandle entered: %f\n", f);
  fprintf(filefootcandle, "%f", &f);
  fclose(filefootcandle);
  
  return 0;
}
