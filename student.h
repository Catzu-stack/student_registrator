#ifndef STUDENT_H
#define STUDENT_H

#include <stdlib.h>
#include <stdio.h>

#define MAX_CHARACTER 125
#define MAX_ENTRY 10

typedef struct StudentList
{
    char name[MAX_CHARACTER];
    int age;
    char subject[MAX_CHARACTER];
    float grade;
} StudentList;



#endif
