#include<stdio.h>
 void sum(){
    int a,b,c,d;
    int Option;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Secound number:");
    scanf("%d",&b);
    c=a+b;
    while (1)
    {
     
    printf("Your Result of addition %d and %d is:   %d\n",a,b,c);
    printf("\nAre you want Add another number please enter(0/1) \nhints 0 for no  1 for yes\n enter :");
    scanf("%d",&Option);
     if (Option == 1)
     {
       printf("Enter a next number:");
       scanf("%d",&d);
       c=c+d;
       printf("Your Result of addition %d , %d and %d is: %d\n",a,b,d,c);
     }
     else if(Option == 0){
        printf("OK, Your result is:%d",c);
        return 0;
     }
     else{
        printf("sorry Your result is:%d",c);
        return 0;
     }}}
     
     
     
void sub(){
    int a,b,c,d,Option;
    
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Secound number:");
    scanf("%d",&b);
    c=a-b;
    while (1)
    {
     
    printf("Your Result of Subtraction %d and %d is:   %d\n",a,b,c);
    printf("\nAre you want substract another number please enter(0/1) \nhints 0 for no  1 for yes\n enter :");
    scanf("%d",&Option);
     if (Option == 1)
     {
       printf("Enter a next number:");
       scanf("%d",&d);
       c=c-d;
       printf("Your Result of Subtraction %d , %d and %d is: %d\n",a,b,d,c);
     }
     else if(Option == 0){
        printf("OK, Your result is:%d",c);
        return 0;
     }
     else{
        printf("sorry Your result is:%d",c);
        return 0;
     }}}
    
    
int main(){
    sum();
    sub();
    return 0;
}