#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char* argv[])
{
	char user[32];
	int userValid = 0; 
	int newUser = 0;
	char password[12];  


/* User logging in */ 
	while (userValid == 0)
	{
		printf("Please enter a user id");
		scanf("%31s",user); 
		if(user name is between 4 and 32 characters)
		{
			userValid = 1; 
			if (user name is not database)
			{
				newUser = 1;
			}
		}
	}
/* New User Proccess */ 
	if(userValid == 1 && newUser == 1)
	{
		printf("Please enter a new password(Max length of 12)"); 
		scanf("%11s",password); 
	}
	if(sizeof(password)<12)
	{ 
		for(var i=sizeof(password);i<12;i++)
		{
			strcat(password,"\0");
		}
	}


	
}
	