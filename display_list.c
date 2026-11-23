#include "student.h"

void display_list(StudentList *registration, int student_count)
{
    if (student_count == 0)
    {
        print("There is Entry for the moment.\n");
        return;
    }

    printf("\n========== STUDENT LIST ============\n");

    int i = 0;

    while (i < student_count)
    {
        printf("Student N: %d\n", i + 1);
        printf("Student Name: %d\n", registration[i].name);
        printf("Student Age: %d\n", registration[i].age);
        printf("Student Subject: %s\n", registration[i].subject);
        printf("Student Grade: %.2f\n", registration[i].grade);
        
        i++;
    }
    
    
}