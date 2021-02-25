#include <stdio.h>

int main(){

float sub1, sub2, sub3, sub4, sub5, avg;

printf("Enter Subject 1 Grade! \n");
scanf("%f", &sub1);

printf("Enter Subject 2 Grade! \n");
scanf("%f", &sub2);

printf("Enter Subject 3 Grade! \n");
scanf("%f", &sub3);

printf("Enter Subject 4 grade! \n");
scanf("%f", &sub4);

printf("Enter Subject 5 grade! \n");
scanf("%f", &sub5);

avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
printf("avg = %0.2f", avg);

if (avg == 75 ){
   printf("\nRemarks: PASSED!");
}
    else if (avg > 75){
        printf("\nRemarks: PASSED!");
    }
        else if(avg < 75 ){
            printf("\nRemarks: FAIL!");
        }

return 0;

}

