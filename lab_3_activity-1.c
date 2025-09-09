#include <stdio.h>
#include <string.h>
int main(){
    int UserAge;
    char UserNationality [15];
    printf("Enter your Age: ");
    scanf("%d",&UserAge);

    if (UserAge>18)
{printf("Enter Your Nationality: ");
scanf("%s",UserNationality);

if (strcmp(UserNationality,"Pakistani")==0) {
    printf("Your Are Eligible\n");  
}
else
printf("You Are Not Eligible ");

}
else 
printf("You Are Not Eligible ");

return 0;

}