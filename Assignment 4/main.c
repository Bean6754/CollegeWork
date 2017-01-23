/* 
  File name: main.c
  Creator: Matthew Dean.
  Date: 23/01/2017.
*/ 

// Headers.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Code.
int main(void) {
    float l, f;
    FILE *filelux;
    FILE *filefootcandle;
    
    filelux = fopen("lux.txt", "w");
    filefootcandle = fopen("footcandle.txt", "w");
  
  printf("Please enter lux: ");
  if (scanf("%f", &l) == 1) {
    printf("No number inputed.\n");
  }
  if (isalpha(l)) {
    printf("Please enter number.\n");
  } else {
    
  }
  
  //printf("Please enter footcandle: ");
  //scanf("%f", &f);
  
  printf("Lux entered: %f\n", l);
  fprintf(filelux, "%f", &l);
  fclose(filelux);
  
  float footcandle;
  footcandle = l*2;
  printf("Footcandle = %f\n", footcandle);
  
  //printf("Footcandle entered: %f\n", f);
  //fprintf(filefootcandle, "%f", &f);
  //fclose(filefootcandle);
  
  return 0;
}
