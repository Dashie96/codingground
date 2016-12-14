#include <stdio.h>
#include "employee.h"

unsigned int employee_get_num (struct employee* list)
{
    unsigned int i;

    for (i=0; list[i].name[0]; i++);

    return i;
}


void employee_print (struct employee* e)
{
    printf ("Name: %s\n", e->name);
    printf (" Age: %u\n", e->age);
    printf ("Wage: %u\n", e->wage);
}


void employee_print_all (struct employee* list)
{

}


void employee_sort (struct employee* list)
{

}


void employee_add (struct employee* list)
{
    char name[128];
    struct employee foo;
    unsigned int age;
    unsigned int wage;
    
    printf("First Name: ");
    scanf("%u", foo.name);
    
    printf("\n");
    
    printf("Last Name: ");
    scanf("%u", &name);
    strcpy(foo.name, name);
    
    printf("\n");
    
    printf("Age: ");
    scanf("%u", &age);
    foo.age = age;
    
    printf("\n");
    
    printf("Wage: ");
    scanf("%u", &wage);
    foo.wage = wage;
    
    printf("\n");
    
    
}


void employee_delete (struct employee* list)
{

}