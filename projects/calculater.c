#include<stdio.h>
 int sum(){
    int a,b,c,d;
    int Option;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Secound number:");
    scanf("%d",&b);
    c=a+b;
    printf("Your Result of addition %d and %d is:   %d\n",a,b,c);
    while (1)
    {
     
    
    printf("\nDo you want to Add another number please enter(0/1) \n--->Hints 0 for no  1 for yes\n enter :");
    scanf("%d",&Option);
     if (Option == 1)
     {
       printf("\nEnter a next number:");
       scanf("%d",&d);
       c=c+d;
       printf("Your new Result is: %d\n",c);
     }
     else if(Option == 0){
        printf("OK, Your result is:%d",c);
        return 0;
     }
     else{
        printf("sorry Your result is:%d",c);
        return 0;
     }}
     return 0;
     }
     
     
     
int sub(){
    int a,b,c,d,Option;
    
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Secound number:");
    scanf("%d",&b);
    c=a-b;
    printf("Your Result of Subtraction %d and %d is:   %d\n",a,b,c);
    while (1)
    {
     
    
    printf("\nDo you want to substract another number please enter(0/1) \n--->Hints 0 for no  1 for yes\n enter :");
    scanf("%d",&Option);
     if (Option == 1)
     {
       printf("\nEnter a next number:");
       scanf("%d",&d);
       c=c-d;
       printf("Your new Result is: %d\n",c);
     }
     else if(Option == 0){
        printf("OK, Your result is:%d",c);
        return 0;
     }
     else{
        printf("sorry Your result is:%d",c);
        return 0;
     }}
     return 0;
     }


int multi(){
    int a,b,c,d,Option;
    
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Secound number:");
    scanf("%d",&b);
    c=a*b;
    printf("Your Result of multiplecation %d and %d is:   %d\n",a,b,c);
    while (1)
    {
     
    
    printf("\nDo you want to substract another number please enter(0/1) \n--->Hints 0 for no  1 for yes\n enter :");
    scanf("%d",&Option);
     if (Option == 1)
     {
       printf("Enter a next number:");
       scanf("%d",&d);
       c=c*d;
       printf("Your new Result is: %d\n",c);
     }
     else if(Option == 0){
        printf("OK, Your result is:%d",c);
        return 0;
     }
     else{
        printf("sorry Your result is:%d",c);
        return 0;
     }}
     return 0;
     }


int divi(){
    int a,b,c,d,Option,modulas;
    
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Secound number:");
    scanf("%d",&b);
    c=a/b;
   modulas=a%b;
    printf("Your Result is: %d\n",c);
    printf("And modulas is:%d",modulas);
    while (1)
    {
     
    
    printf("\nDO you want to substract another number please enter(0/1) \n--->Hints 0 for no  1 for yes\n enter :");
    scanf("%d",&Option);
     if (Option == 1)
     {
       printf("Enter a next number:");
       scanf("%d",&d);
       c=c/d;
       modulas=c%d;
       printf("Your new Result is: %d\n",c);
       printf("And modulas is:%d",modulas);
     }
     else if(Option == 0){
        printf("OK, Your result is:%d",c);
        printf("And modulas is:%d",modulas);
        return 0;

     }
     else{
        printf("sorry Your result is:%d",c);
        printf("And modulas is:%d",modulas);
        return 0;
     }}
     return 0;
   }



int main(){
   int chosise;
    printf("\n\n\nWelcome to calculator!!!\n\n\n");
    printf("LIMITATION:--It's can be only performed on interger number\n\n\n");
    printf("To peforme the task Enter a number accordingly shown before the task");
do{
    printf("\n\n1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplection\n");
    printf("4. Divisation\n");
    printf("5. Exit\n");
    printf("Enter any no. and press enter for the task 1,2,3,4,5: ");
    scanf("%d",&chosise);
   switch (chosise)
    {
    case 1:
      sum();
      break;

   case 2:
      sub();
      break;

   case 3:
      multi();
      break;

   case 4:
      divi();
      break;


   case 5:printf("Developed By: **ABHISHEK KUMAR**");
      return 0;
    
    }}while(1);



    return 0;
}

