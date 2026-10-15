#include <stdio.h>
#define MAX 50

int marks[MAX];
int count = 0;
float average;

void addMarks() {
    int mark;

    if (count >= MAX) {
        printf("Student limit reached!\n");
        return;
    }

    printf("Enter student marks(0-100): ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100) {
        printf("Invalid marks!\n");
        return;
    }

    marks[count] = mark;
    count++;
    printf("Student added successfully!\n");
}

void displayStudents() {
    if (count == 0) {
        printf("No records are available in this system!\n");
        return;
    }

    printf("__student results__\n");

    for (int i = 0; i < count; i++) {
        printf("Student %d: %d marks\n", i + 1, marks[i]);

        if (marks[i] >= 90) {
            printf("Grade: A\n");
        } else if (marks[i] >= 75) {
            printf("Grade: B\n");
        } else if (marks[i] >= 60) {
            printf("Grade: C\n");
        } else if (marks[i] >= 40) {
            printf("Grade: D\n");
        } else {
            printf("Grade: F, FAIL.\n");
        }
    }
}

void averageMarks() {
    int sum = 0;

    if (count == 0) {
        printf("No records are available in this system!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        sum += marks[i];
    }

    average = (float)sum / count;
    printf("Class Average marks: %.2f\n", average);
}

int main() {
    int choice;

    do {
        printf("\n===========================\n");
        printf("Student Management System\n");
        printf("\n===========================\n");
        printf("1. Add Student Marks\n");
        printf("2. Display Student Results\n");
        printf("3. Calculate class average marks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                addMarks();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                averageMarks();
                break;
            case 4:
                printf("THANK YOU ! .\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
