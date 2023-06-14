#include <stdio.h>

int main() {
    int RollNo, physicsMarks, mathsMarks, chemistryMarks;
    char name[50];
    printf("Enter Roll No: ");
    scanf("%d", &RollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Marks in Physics: ");
    scanf("%d", &physicsMarks);

    printf("Enter Marks in Math: ");
    scanf("%d", &mathsMarks);

    printf("Enter Marks in Chemistry: ");
    scanf("%d", &chemistryMarks);


    int totalMarks = physicsMarks + mathsMarks + chemistryMarks;
    float percentage = (float)totalMarks / 3;

    printf("\n Summary \n");
    printf("Roll No: %d\n", RollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physicsMarks);
    printf("Math Marks: %d\n", mathsMarks);
    printf("Chemistry Marks: %d\n", chemistryMarks);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
