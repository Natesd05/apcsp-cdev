#include <stdio.h>


// student structure
//struct Student...
struct Student {
	char firstName[50];
	char lastName[50];
	int age;
};

void printStudent(struct Student* student)
{
	printf("----- student -----\n");
	printf("Student: %s %s\n", student->firstName, student->lastName);
	printf("Age: %d\n", student->age);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
	for(int i = 0; i < num; i++){
		printStudent(&students[i]);
	}
}


int main()
{

struct Student students[100];

  int numStudents = 0;
  while (1)
  {
    char c;
    char input[256];
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {

      char input2[256];

      // enter a new student
      printf("First Name?\n");
      fgets(input2, 256, stdin);
      sscanf(input2, "%s", students[numStudents].firstName);

      printf("Last Name?\n");
      fgets(input2, 256, stdin);
      sscanf(input2, "%s", students[numStudents].lastName);
     
      printf("Age?\n");
      fgets(input2, 256, stdin);
      sscanf(input2, "%d", &students[numStudents].age);

 numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
