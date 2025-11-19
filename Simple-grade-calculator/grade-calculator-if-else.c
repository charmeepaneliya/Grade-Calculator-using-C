#include<stdio.h>

int main()
{
    int marks,i,subject;
    float total,average;
    char grade;

    printf("Enter number of subjects:");
    scanf("%d",&subject);

    for(i=1; i<=subject; i++)
    {
        printf("enter marks of subject %d:",i);
        scanf("%d",&marks);

        total += marks;


    }

    average=total/subject;

    if(average >=90){
        printf("grade= A");
    }else if(average >= 75){
        printf("grade= B");
    }else if(average >= 60){
        printf("grade= C");
    }else if(average >= 40){
        printf("grade= D");
    }else{
        printf("grade = F");
    }

    printf("\nTotal marks=%.2f\n",total);
    printf("\nAvrage=%.2f\n",average);
    

return 0;
}