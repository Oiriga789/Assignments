#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50
#define MAX_COURSES 3

// Structure to represent a student
struct Student {
    int regNumber;
    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
    char courses[MAX_COURSES][MAX_NAME_LENGTH];
};

// Function to save student information to a file
void saveToFile(struct Student students[], int numStudents, const char *filePath) {
    FILE *file = fopen(filePath, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < numStudents; ++i) {
        fprintf(file, "Student %d:\n", i + 1);
        fprintf(file, "Registration Number: %d\n", students[i].regNumber);
        fprintf(file, "Name: %s %s\n", students[i].firstName, students[i].lastName);
        fprintf(file, "Courses:\n");
        for (int j = 0; j < MAX_COURSES; ++j) {
            fprintf(file, "%d. %s\n", j + 1, students[i].courses[j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Student information saved to file: %s\n", filePath);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;
    
    // Input number of students
    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);
    if (numStudents > MAX_STUDENTS) {
        printf("Exceeded maximum number of students.\n");
        return 1;
    }

    // Input student information
    for (int i = 0; i < numStudents; ++i) {
        printf("\nEnter information for Student %d:\n", i + 1);
        printf("Registration Number: ");
        scanf("%d", &students[i].regNumber);
        printf("First Name: ");
        scanf("%s", students[i].firstName);
        printf("Last Name: ");
        scanf("%s", students[i].lastName);
        printf("Courses (at least %d):\n", MAX_COURSES);
        for (int j = 0; j < MAX_COURSES; ++j) {
            printf("Course %d: ", j + 1);
            scanf("%s", students[i].courses[j]);
        }
    }

    // Edit information for a student
    int regNumberToEdit;
    printf("\nEnter the registration number of the student to edit: ");
    scanf("%d", &regNumberToEdit);
    
    int studentIndex = -1;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].regNumber == regNumberToEdit) {
            studentIndex = i;
            break;
        }
    }

    if (studentIndex == -1) {
        printf("Student with registration number %d not found.\n", regNumberToEdit);
        return 1;
    }

    // Editing student information
    printf("\nEnter new information for Student %d:\n", students[studentIndex].regNumber);
    printf("First Name: ");
    scanf("%s", students[studentIndex].firstName);
    printf("Last Name: ");
    scanf("%s", students[studentIndex].lastName);
    printf("Courses (at least %d):\n", MAX_COURSES);
    for (int j = 0; j < MAX_COURSES; ++j) {
        printf("Course %d: ", j + 1);
        scanf("%s", students[studentIndex].courses[j]);
    }

    // Ask for file path to save the student information
    char filePath[100];
    printf("\nEnter the file path to save student information: ");
    scanf("%s", filePath);

    // Save student information to file
    saveToFile(students, numStudents, filePath);

    return 0;
}
