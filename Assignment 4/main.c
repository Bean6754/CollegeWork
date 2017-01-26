/*
  File name: main.c
  Creator: Matthew Dean.
  Date modified: 26/01/2017.
*/

// Headers.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

// Code.
int main(void) {
    // Assign 'l' and 'f' to a floating point data type. (In order to allow the user to use decimals and to allow the calculation to use decimals also).
    float l, f;
    // Assign a char to 'c'. This will be used for user input. It needs to be a char for a user to input a string.
    char c;
    // Set files to save the results of the calculation.
    FILE *filelux;
    FILE *filefootcandle;

    // Name the files and give them append permissions so that multiple calculations can be saved for future reference.
    filelux = fopen("lux_results.txt", "a");
    filefootcandle = fopen("footcandle_results.txt", "a");

inputrestart:
    printf("Type 'l' to input lux, 'f' to input footcandle or 'e' to exit the program.\n"); // Ask for user input.
    scanf("%c", &c);
    getchar(); // Pause.
    if (c == 'l') { // Checks if the user has entered 'l' as their choice.
    	goto luxstart; // Go to 'luxstart.
    } else if (c == 'f') { // Checks if the user has entered 'f' as their choice.
	    goto footcandlestart; // Go to 'footcandlestart'.
    } else if (c == 'e') {
        return 0; // Exit.
    } else {
	    printf("You have entered an invalid answer, please try again.\n"); // Ask for the user to reinput the answer.
	    goto inputrestart; // Go to the beginning of the choice selection again.
    }

luxrestart:
    getchar(); // Pause.
luxstart:
  printf("Please enter lux: "); // Ask user to enter lux value.
  if (scanf("%f", &l) == 0) { // Checks if the user has inputed a valid character for calculation.
    printf("Please enter a real number.\n"); // Ask the user to enter a real number if the user entered a character.
    goto luxrestart; // Go to the 'luxrestart' restart point.
}
  goto luxresult; // Go to the 'luxresult'.

footcandlerestart:
    getchar(); // Pause.
footcandlestart:
  printf("Please enter footcandle: "); // Ask user to enter footcandle value.
  if (scanf("%f", &f) == 0) { // Checks if the user has inputed a valid character for calculation.
    printf("Please enter a real number.\n"); // Ask the user to enter a real number if the user entered a character.
    goto footcandlerestart; // Go to the 'footcandlerestart' restart point.
 }
  goto footcandleresult; // Go to the 'footcandleresult'.

luxresult:
  printf("Lux entered: %f\n", l); // Display the float 'l' (which is the lux entered by the user).
  float footcandle; // Set 'footcandle' to a floating point data type.
  footcandle = l / 0.0929; // Calculate 'footcandle' by dividing the float 'l' (lux entered by the user) by 0.0929.
  fprintf(filefootcandle, "%f\n", footcandle); // Append the result to the file 'lux_results.txt'.
  fclose(filefootcandle); // Close this file as it is no longer required by the program.
  printf("Footcandle = %f\n", footcandle); // Print the calculated float 'footcandle' value.
  goto end;

footcandleresult:
  printf("Footcandle entered: %f\n", f); // Display the float 'f' (which is the footcandle entered by the user).
  float lux; // Set 'lux' to be a floating point data type.
  lux = f / 10.764; // Calculate 'lux' by dividing the float 'f' (footcandle entered by the user) by 10.764.
  fprintf(filelux, "%f\n", lux); // Append the result to the file 'footcandle_results.txt'.
  fclose(filelux); // Close this file as it is no longer required by the program.
  printf("Lux = %f\n", lux); // Print the calculated float 'lux' value.

end:
  printf("Press any key to exit.\n"); // Tell the user to 'press any key to exit' the program.
  getchar(); // Pause for Linux.
  getch(); // Pause for Windows.
  return 0; // Exit.
}
