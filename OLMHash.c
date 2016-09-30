#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char* argv[])
{
	FILE * file;
	char user[32];
	int userValid = 0; 
	int newUser = 0;
	char password[12]; 
	int attempts = 0;


/* User logging in */ 
	userValid = login(newUser, user);
/*	while (userValid == 0)
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
	}*/
/* New User Proccess */ 
	if(userValid == 1 && newUser == 1)
	{
		newUserPass(password);
	}	
}

int login(int newUser, char user){
	printf("Please enter your User ID.");
	scanf("%31s",user); 
	if(strlen(user) => 4 && strlen(user) < 32)  
	{
		if (user name is not database)
		{
			newUser = 1;
		}
		return 1;
	}
	else
	{
		return login(newUser, user);
	}
}

int newUserPass(char password){
	
	int i;
	
	printf("Please enter a new password(Max length of 12)."); 
	scanf("%11s",password);
	
	if(strlen(password) < 12)
	{ 
		for(i = strlen(password); i < 12 ;i++)
		{
			strcat(password,"\0");
		}
	}
	else if (strlen(password) > 12)
	{
		return newUserPass(password);
	}
	else if (strlen(password) == 12)
	{
		return 1;
	}
}




	
