#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Marks;

    // USER INPUTS
    printf("\n\t\t\t\t CGPA Calculator with switch statements \n");
    printf("\n\n\t\t Please Enter Marks\n");
    scanf("%d",&Marks);

switch(Marks){

case 85 ... 100:
    printf("\t\tGrade: A+ \n\t\t\t\tCGPA:4.0");
    break;

case 80 ... 84 :
    printf("\t\tGrade: A \n\t\t\t\tCGPA:3.7");
    break;

case 75 ... 79:
    printf("\t\tGrade: B+ \n\t\t\t\tCGPA:3.5");;
    break;

case 70 ... 74:
    printf("\t\tGrade: B \n\t\t\t\tCGPA:3.0");
    break;

case 65 ... 69:
      printf("\t\tGrade: C+ \n\t\t\t\tCGPA:2.5");
    break;
case 60 ... 64:
   printf("\t\tGrade: C \n\t\t\t\tCGPA:2.0");
    break;
case 55 ... 59:
   printf("\t\tGrade: D+ \n\t\t\t\tCGPA:1.5");
    break;

case 50 ... 54:
   printf("\t\tGrade: D \n\t\t\t\tCGPA:1.0");
    break;

case 0 ... 49:
  printf("\t\tGrade: F \n\t\t\t\tCGPA:0.0");
    break;
default:
//ELSE STATEMENT
    printf("Please Enter Correct Marks");

}

    return 0;
}
