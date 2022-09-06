#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char randToss() //Function for giving coin toss, result will be H or T
{
	int toss = rand() % 2;
	if (toss == 1) return 'H'; 
	else return 'T';
}

int coinTossGame(char player1[3], char player2[3], int *winner, int *numTosses)
{
	char *results = malloc(*numTosses * sizeof(char)); //Big array to put all the coin toss results in
	
	for (int i = 0; i < *numTosses; i++) //loop through coin tosses
	{
		results[i] = randToss(); //setting each toss to a random result
		
		printf(" %c", results[i]); //printing each toss
		
		char *foundP1 = strstr(results, player1); //finds if string 'HHT' exists in the results array
		char *foundP2 = strstr(results, player2); //finds if string 'THH' exists in the results array
		
		if(foundP1 != NULL) //if HHT is found first then alice wins
		{
			printf("\n%s\n", foundP1);
			printf("Alice Wins\n\n");
			*winner = 2;
			break; //break because once winner we terminate the tosses
		}
		else if (foundP2 != NULL) //if THH wins first then Bob Wins
		{
			printf("\n%s\n", foundP2);
			printf("Bob Wins\n\n");
			*winner = 3;
			break;
		}
	}
	return *winner;
	free(results);
}

int main(void)
{
	srand(time(0)); /*Every time you run the program if more than 1 second has passed
					  since you last ran it then you will get new set of random numbers each time.*/
	
	char Alice[4] = "HHT"; //HAS TO BE 4 SLOTS IDK WHY JUST TRUST
	char Bob[4] = "THH"; //HAS TO BE 4 SLOTS IDK WHY JUST TRUST
	int AliceW = 0; //Alice Wins
	int BobW = 0; //Bob Wins
	int numToss = 500; //Num of coin tosses can be any number
	int winner; //have to initialise winner
	
	for (int i = 0; i < 500; i++) //30 examples of 500 coin tosses and their winners
	{
		coinTossGame(Alice, Bob, &winner, &numToss);
		if (winner == 2) AliceW++; //Alice wins on 2
		else BobW++; //Bob wins on 3
	}
	printf("\nAlice W: %d\nBob W: %d\n\n", AliceW, BobW);
}