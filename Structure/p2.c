#include <stdio.h>
#include <string.h>

struct Emp {
    int emp_id;
    char emp_name[100];
    int emp_age;
    char emp_role[100];
    char emp_city[100];
    int emp_experience;
    char emp_company_name[100];
};

int main() {
    int n,i;

    printf("Enter the number of empl: ");
    scanf("%d", &n);

    struct Emp empl[n];

    for (i = 0; i < n; ++i) {
        printf("\nEnter details for employee %d:\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &empl[i].emp_id);
        printf("Name: ");
        scanf(" %[^\n]s", empl[i].emp_name);
        printf("Age: ");
        scanf("%d", &empl[i].emp_age);
        printf("Role: ");
        scanf(" %[^\n]s", empl[i].emp_role);
        printf("City: ");
        scanf(" %[^\n]s", empl[i].emp_city);
        printf("Experience (in years): ");
        scanf("%d", &empl[i].emp_experience);
        printf("Company Name: ");
        scanf(" %[^\n]s", empl[i].emp_company_name);
    }

    printf("\nEmployee Records:\n");
    for (i = 0; i < n; ++i) {
        printf("\nEmployee %d details:\n", i+1);
        printf("Employee ID: %d\n", empl[i].emp_id);
        printf("Name: %s\n", empl[i].emp_name);
        printf("Age: %d\n", empl[i].emp_age);
        printf("Role: %s\n", empl[i].emp_role);
        printf("City: %s\n", empl[i].emp_city);
        printf("Experience (in years): %d\n", empl[i].emp_experience);
        printf("Company Name: %s\n", empl[i].emp_company_name);
    }

}

