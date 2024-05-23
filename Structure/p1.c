#include <stdio.h>
#include <string.h>

struct Stu {
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    int stu_standard;
    char stu_school[20];
};

void main() {
	
	int n,i;
	
	printf("Enter The Students Number :");
	scanf("%d",&n);
	
    struct Stu stud[n];

    for( i=0; i<n; i++){
        printf("Enter details for Student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &stud[i].stu_id);
        printf("Name: ");
        scanf("%s", stud[i].stu_name);
        printf("Age: ");
        scanf("%d", &stud[i].stu_age);
        printf("Course: ");
        scanf("%s", stud[i].stu_course);
        printf("City: ");
        scanf("%s", stud[i].stu_city);
        printf("Standard: ");
        scanf("%d", &stud[i].stu_standard);
        printf("School: ");
        scanf("%s", stud[i].stu_school);
    }

    printf("\nStudent Records:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %d\n", stud[i].stu_id);
        printf("Name: %s\n", stud[i].stu_name);
        printf("Age: %d\n", stud[i].stu_age);
        printf("Course: %s\n", stud[i].stu_course);
        printf("City: %s\n", stud[i].stu_city);
        printf("Standard: %d\n", stud[i].stu_standard);
        printf("School: %s\n", stud[i].stu_school);
    }

}

