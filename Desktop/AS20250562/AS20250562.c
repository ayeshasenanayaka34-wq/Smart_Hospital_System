
#include <stdio.h>

int main(){
    
    float mathematics, science, english, total, average;//Handlig Fractional marks
    char grade, result; 
    
    printf("Enter Mathematics Marks(out of 100): ");
    scanf("%f", &mathematics);

    printf("Enter Science Marks(out of 100): ");
    scanf("%f", &science);

    printf("Enter English Marks(out of 100): ");
    scanf("%f", &english);

    //calculation part
    total= mathematics + science + english;
    average= total / 3.0; //average calculation

    printf("Totel: %.2f\n", total);
    printf("Average: %.2f\n", average);
    if(average >= 80.0){
        printf("Grade: A\n");
    } 
    else if(average >= 70.0){
        printf("Grade: B\n");
    }
    else if(average >= 60.0){
        printf("Grade: C\n");
    }
    else if(average >= 50.00){
        printf("Grade: D\n");
    }
    else{
        printf("Grade: F\n");
    }    
    if (average >=40.0){
        printf("Result: PASS\n");
    }
    else{
        printf("Result: FAIL\n");
    }

    return 0;
}