#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int e_number, g_number, attempt;
    srand(time(NULL));
    g_number=rand()%100+1;
    
    printf("\nWelcome to 'number gussing game'");
    printf("\nPlease enter any number between 1-100:   ");
    scanf("%d",&e_number);
    attempt=0;

    do{
        attempt++;
        if (g_number < e_number)
        {
           printf("Please Guss a smmaller number:");
           scanf("%d",&e_number);
        }
        else if (g_number > e_number)
        {
           printf("Please Guss a larger number:");
           scanf("%d",&e_number);
        }
        else {
           printf("Your are sussfully gussed number %d in %d attemped",g_number,attempt);
           return 0;
          
        }
        
    }while(1);
    
    printf("Developed By: ABHISHEK KUMAR");

    return 0;
}
