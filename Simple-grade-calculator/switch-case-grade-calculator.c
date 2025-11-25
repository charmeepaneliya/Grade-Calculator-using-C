#include <stdio.h>

int main(){
    int subjects, marks, i;
    float total = 0, avg;
    char grade;

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for (i = 1; i <= subjects; i++) {
        printf("Enter marks of subject %d: ", i);
        scanf("%d", &marks);
        total += marks;
    }

     avg = total / subjects;

     if(avg >=90){
       printf("Grade = %c", grade = 'A');
    }else if(avg >= 75){
         printf("Grade = %c", grade = 'B');
    }else if(avg >= 60){
        printf("Grade = %c", grade = 'C');
    }else if(avg >= 40){
        printf("Grade = %c", grade = 'D');
    }else{
       printf("Grade = %c", grade = 'F');
    }

    printf("\nTotal marks=%.2f\n",total);
    printf("\nAvrage=%.2f\n",avg);

    switch(grade){
        case 'A':
        printf("Excellent!\n");
        break;
        case 'B':
        printf("Very Good\n");
        break;
        case 'C':
        printf("Good\n");
        break;
        case 'D':
        printf("Needs Improvement\n");
        break;
        case 'F':
        printf("sorry you Failed\n");
        break;

        default:
        printf("Invalid Grade\n");

    }

    return 0;
}






























