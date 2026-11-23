#include "student.h"

void add_list(StudentList *registration, int *student_count)
{
    char answer;

    if (student_count >= MAX_ENTRY)
    {
        printf("The Student List is Full.\n");
        return;
    }
    

    printf("\n===== Please Fill The Inofrmation to Register a Student.\n");

    while (student_count < MAX_ENTRY)
    {
        printf("Please Enter The Student Name: \n");
        scanf("%124s", registration[*student_count].name);
        printf("Please Enter The Student Age: \n");
        scanf("%d", &registration[*student_count].age);
        printf("Please Enter The Student Subject: \n");
        scanf("%124s", registration[*student_count].subject);
        printf("Please Enter The Student Grade: \n");
        scanf("%.2f", &registration[*student_count].grade);

        
        printf("Continue Registering Student? (Y/N) \n");
        if (answer == 'N' || answer == 'n')
        {
            break;
        }

        (*student_count)++;

    }
}