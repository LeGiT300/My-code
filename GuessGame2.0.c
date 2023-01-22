#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random, guess, level, count;
char again;
//functions

void levels(){
	printf("\t   [1] EASY                             - [1-50] \n");
	printf("\t   [2] HARD                             - [1-200] \n");
	printf("\t   [3] VERY-HARD                        - [1-500] \n");
}

void easy(){
		srand(time(NULL));
  		random = rand()%50;
  		count = 5;
  		while(random != guess && count != -1){ // limit set to five trials make the count be equal to 5 then for each iteration decrement displaying to the user how many is left
  			scanf(" %d", &guess);
			if(guess < random){
				printf("\n\n \t Your guess is too low!\n\n \t Try again(trials left %d): ", count);
				count--;
			}
			else if(guess > random){
				printf("\n\n \t Your guess is too high!\n\n \t Try again(trials left %d): ", count);
				count--;
			}
			else if( guess == random){
				printf("\n\n \t Congratulations, you are correct! Your Trials left: %d", count);
				count--;
			}
			else{
				//printf("Wrong guess!, the last correct number is: %d\n\n", random);
				printf("\n\n \t try again: ");
				count--;
			}
		}
}
void hard(){
		srand(time(NULL));
  		random = rand()%200;
  		count = 10;
  		while(random != guess && count != -1){
  			scanf("%d", &guess);
			if(guess < random){
				printf("\n\n \t Your guess is too low!\n\n \t Try again(trials left %d): ", count);
				count--;
			}
			else if(guess > random){
				printf("\n\n \t Your guess is too high!\n\n \t Try again(trials left %d): ", count);
				count--;
			}
			else if( guess == random){
				printf("\n\n \t Congratulations, you are correct! Your Trials(trials left %d): ", count);
			}
			else{
				//printf("Wrong guess!, the last correct number is: %d\n\n", random);
				printf("\n\n \t try again: ");
				count--;
			}
		  }
}

void veryhard(){
		srand(time(NULL));
  		random = rand()%500;
  		count = 15;
  		while(random != guess && count != -1){
  			scanf("%d", &guess);
			if(guess < random){
				printf("\n\n \t Your guess is too low!\n\n \t Try again(trials left %d): ", count);
				count--;
			}
			else if(guess > random){
				printf("\n\n \t Your guess is too high!\n\n \t Try again(trials left %d): ", count);
				count--;
			}
			else if( guess == random){
				printf("\n\n \t Congratulations, you are correct! Your Trials(trials left %d): ", count);
				count--;
			}
			else{
				//printf("Wrong guess!, the last correct number is: %d\n\n", random);
				printf("\n\n \t try again: ");
				count++;
			}
		  }
}


int main(){
  printf("             ==============================          \n");
  printf("                        LEVEL MENU                    \n");
  printf("             ==============================          \n\n");
  levels();
  
  level: ;
  printf("\n\n \t Select a level: ");
  scanf("%d", &level);
  switch(level){
  	case 1:
  		printf("\n\n \t THE FIRST ONE IS A BONUS FROM AFTER THAT YOU HAVE FIVE(5) TRIALS!");
  		printf("\n\n \t Guess a number: ");
  		easy();
  		Again: ;
  		printf("\n\n \t Would you like to start again, [Y/N]?\n\n \t");
	scanf(" %c", &again);
	switch(again){
		case 'Y':
		case 'y':
			system("cls");
			levels();
			goto level;
		break;
		case 'N':
		case 'n':
			printf("\n\n \t ~==~~==~~==~~==~~==~~==~~==~~==~ Thank you for playing our game ~==~~==~~==~~==~~==~~==~~==~~==~");
		break;
		default:
			system("cls");
			printf("\n\n \t INVALID INPUT");
			goto Again;
		break;
	}
  	break;
	case 2:
		printf("\n\n \t THE FIRST ONE IS A BONUS AFTER THAT YOU HAVE TEN(10) TRIALS!");
  		printf("\n\n \t Guess a number: ");
		hard();
		Again2: ;
		printf("\n\n \t Would you like to start again, [Y/N]?\n\n \t");
	scanf(" %c", &again);
	switch(again){
		case 'Y':
		case 'y':
			system("cls");
			levels();
			goto level;
		break;
		case 'N':
		case 'n':
			printf("\n\n \t ~==~~==~~==~~==~~==~~==~~==~~==~ Thank you for playing our game ~==~~==~~==~~==~~==~~==~~==~~==~");
		break;
		default:
			printf("\n\n \t Invalid Input!");
			goto Again2;
		break;
	}
  	break;
  	case 3:
  		printf("\n\n \t THE FIRST ONE IS A BONUS AFTER THAT YOU HAVE FIFTEEN(15) TRIALS!");
  		printf("\n\n \t Guess a number: ");
  		veryhard();
  		AgainW: ;
  		printf("\n\n \t Would you like to start again, [Y/N]?\n\n \t");
	scanf(" %c", &again);
	switch(again){
		case 'Y':
		case 'y':
			levels();
			goto level;
		break;
		case 'N':
		case 'n':
			printf("\n\n \t ~==~~==~~==~~==~~==~~==~~==~~==~ Thank you for playing our game ~==~~==~~==~~==~~==~~==~~==~~==~");
		break;
		default:
			printf("\n\n \t Invalid Input!");
			goto AgainW;
		break;
	}
  	break;
  	default:
  		printf("INVALID!");
  		goto level;
  }
  return 0;
}

