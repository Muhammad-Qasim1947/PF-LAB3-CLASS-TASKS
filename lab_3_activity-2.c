#include <stdio.h>
#include <string.h>
int main(){
    char Userpassword [15];
    char Useremail [20] ;
printf("Enter your email ");
scanf("%s",&Useremail);

if (strcmp(Useremail,"admin@gmail.com")==0)
{printf("Enter Your Password: ");
  scanf("%s",Userpassword);
if (strcmp(Userpassword,"admin1234")==0)
{printf("The Access Has Been Granted");
}
  else
  printf("Your Password Is Wrong"); 
    
}
else
printf("The Email Is Not Registered");

return 0;

}