#include <stdio.h>

int main() {

    int choice;

    printf("====================================\n");
    printf("   SMART HOSPITAL SYSTEM\n");
    printf("====================================\n");

    printf("1. Register Patient\n");
    printf("2. Display Patients\n");
    printf("3. Generate Report\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    return 0;
}