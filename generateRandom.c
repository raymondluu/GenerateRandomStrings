// generateRandom.c

/* Program: Generate Random Text Strings
   Purpose: Exercise 1
   File: generateRandom.c
   Programmer: Raymond Luu
   Date: 10/9/2013
   Description: Generates 10,000 text strings with random characters and random lengths.
*/

#include <stdio.h>
#include <stdlib.h>

/* Function: main
   Uses library: stdio.h
   Recieves: int argc, char *argv[]
   Returns: int
*/

int main(int argc, char *argv[]){
  int errorCode = 0;

  FILE * randFile;
  int count = 10000, strLength = 0, i = 0;
  char buffer[33], randChar; 

  randFile = fopen("myRandFile", "w"); // opens up a new file named myRandFile
  while(count > 0){
    buffer[0] = 0; // resets buffer to clear the string
    strLength = (rand() % 28) + 5; // gives you a random string length between 5 and 32
    for(i=0; i<strLength; i++){
      randChar = (rand() % 26) + 97; // gives you a random number between 97 and 122 to represent the letters of the alphabet.
      buffer[i] = randChar; // concatenates the new character to end of String in buffer
    }
    buffer[i] = 0;
    fprintf(randFile, "%s\n", buffer); // write the string to file
    count--; // decrement the count variable
  }
  return errorCode;
}
