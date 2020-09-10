#include <stdio.h>

// Author: Joseph Pietroluongo
// PID: 5901749
// I affirm that I wrote this program myself without any help
// from any other people or sources from the internet
// Summary: This program is designed for C language, and it is a course gpa calculator using arrays

int main(void) {
  //Makes an Array of all courses hard coded, index [6], legnth [7 + \0]
  char courseName[6][8] = {"COP2010", "COP2020", "COP3030", "COP4040","MAD2030","MAC3080"};

  //Sets all credits to 3 for simplicity   
  int credits = 3;

  //Sets an Array of grades hardcoded
  float grade[6] = {2.00,2.67,3.00,2.65, 2.98, 3.25};

  //Sets up the variable to hold the gpa total
  float gpaTotal;

  //Sets up the variable to hold the credits total
  float creditsTotal;

  //Need to set i variable for for loops
  int i;

  //Uses a for loop to calculate the total Credits earned
  for(i = 0; i < 6; ++i){
    creditsTotal = (grade[i] * credits) + creditsTotal;
  }

  //Uses a for loop to calculate the current Gpa, based on inital 0 gpa
  for(i = 0; i < 6; ++i){
    gpaTotal = grade[i] + gpaTotal;
  }

//Output starts here is hardcoded, uses the creators PID and name.
printf("Student Name: Joseph Pietroluongo\n");    
printf("Panther ID: 5901749\n");                   
printf("_________________________________________________________________________\n");
printf("|Course \t | Credits \t | Grade \t | Grade Points Earned \t |\n");
printf("|------------------------------------------------------------------------|\n");

//Uses a loop to print out the Array to fit the hard coded datat used.
for (i = 0; i < 6; ++i){
printf("|%s \t |\t %d \t |\t     %.2f|\t\t     %.2f|\n" , courseName[i], credits, grade[i], (credits * grade[i]));
}

printf("|________________|_______________|_______________|_______________________|\n");
printf("|Total \t\t |\t 9 \t |\t  \t |\t\t    %.2f|\n" , creditsTotal);
printf("|________________|_______________|_______________|_______________________|\n");
//Prints current gpa at the bottom of the hard coded table
printf("Current GPA: %lf\n", (gpaTotal / 6));  
return 0;         
}