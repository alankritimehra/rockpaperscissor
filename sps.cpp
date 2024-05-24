#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
//function to implement the game
int game(char you,char comp)
{
	//if both users has chosen same inout
	if(you==comp)
	return-1;
	
	//if users choice is paper and 
	//computers choice is scissors
	if(you=='p'&&comp=='z')
	return 0;
	
	//if users choice is scissors
	//and comp has chosen paper
	if(you=='z'&&comp=='p')
	return 1;
	
	//if user has chosen stone
	//while comps choice is paper
	if(you=='s'&&comp=='p')
	return 0;
	
	//if user has chosen paper
	//and comp ha chosen stone 
	if(you=='p'&&comp=='s')
	return 1;
	//if usser stone 
	//comp=sci
	if(you=='s'&&comp=='z')
	return 1;
	//if user=sci
	//comp=stone
	if(you=='z'&&comp=='s')
	return 0;
	
}
int main()
{
	//random no
	int n;
	
	char you,comp,result;
	//choosing a random noz
	srand(time(NULL));
	//random no less than 100
	//divide by 100
	n=rand()%100;
	//divided into stone,sci,paper
	if(n<33)
	comp=='p';
	else if(n<33&&n>66)
	comp='s';
	else 
	comp='z';
	printf("\n\t s for stone , p for paper and z for scissors\t\n");
	//input
	scanf("%c",&you);
	result=game(you,comp);
	if (result=-1)
	{
			printf("draw\n");
	}

    else if(result ==1)
    {
    	  printf("you won");
	}
  
    else
    {
    	 printf("youve lost \n");
	}
   printf("you choose: %c and comp choose:%c");
   return 0;
    
}
