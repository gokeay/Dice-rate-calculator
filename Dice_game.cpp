#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number_1, number_2;
int sum;
int x, y, l, c, a, b;                          	/* variables for for loops */
int number_of_dice;								/* variable to get choose of dice amount which will be roll from user */

int times = 10000;								/* how many times dice is going to roll */
int percentage = times/100;						/* variable for show percentage's of each number (I want to show result as a percentage) */

int result[20][11];								/* array for be able to show the number's amount by percentage */

int dice_1[1][11];								/* array for store the first dice's numbers' amount */
int dice_2[1][11];								/* array for store the sum of two dice's numbers' amount */

void show_result();
void roll_the_dice(int dice[][11]);

int main() {
	
	srand(time(NULL));
	while (1) {
	
		for (x=0; x<6; x++) { 						/* this will prepare the dice's variables for assignments */
			dice_1[0][x] = 0; }
	
		for (x=0; x<11; x++) { 						/* this will prepare the dice's variables for assignments */
			dice_2[0][x] = 0; }
		
		printf("\n\nHow many dice you want to calculate the rate?\nto calculate 1 dice's rate press '1'\nto calculate 2 dices' rate press '2'\nto exit press '0'\n");
		scanf("%d", &number_of_dice);
		
		if (number_of_dice == 1) {
			b = 6;
			roll_the_dice(dice_1);
		}
			
		else if (number_of_dice == 2) {
			b = 11;
			roll_the_dice(dice_2);
		}
			
		if (number_of_dice == 0) {
			break; }
	}
}

void show_result() {

	y = 0;
	while (y != 19) {
		printf("%d ", 19-y);
		if (y>9) {
			printf(" "); }
			
    	for (x=0; x<b; x++) {
			if (result[y][x] == 33) {
		    	printf("  * "); }
	    	else if (result[y][x] == 0) {
	    		printf("    "); }
		}
		y++;
		printf("\n");
	}
	printf("   ");
	
	a = 0;
	while (a<b) {								/* while loop for write getting result number to result */
		printf("  %d ", result[19][a]);
		a++;
	}
	printf("\n");
}

void roll_the_dice(int dice[][11]) { 			/* the dice rolling function */
	
	number_1 = 0;
	number_2 = 0;
	
	for (x=0; x<times; x++) {
	
		number_1 = rand()%6 + 1;
		
		if (number_of_dice == 2) {
			number_2 = rand()%6 + 1;
		}
		
		switch (number_1 + number_2) {			
			case 1:
				dice[0][0]++;
				break;
			case 2:
				dice[0][1]++;
				break;
			case 3:
				dice[0][2]++;
				break;
			case 4:
				dice[0][3]++;
				break;
			case 5:
				dice[0][4]++;
				break;
			case 6:
				dice[0][5]++;
				break;
			case 7:
				dice[0][6]++;
				break;
			case 8:
				dice[0][7]++;
				break;
			case 9:
				dice[0][8]++;
				break;
			case 10:
				dice[0][9]++;
				break;
			case 11:
				dice[0][10]++;
				break;
			case 12:
				dice[0][11]++; }
	}
	
	for (x=0; x<b; x++) { 						/* this loop will replace the quantities of numbers with percentages */
		dice[0][x] = dice[0][x] / percentage;
	}
	
	for (y=0; y<b; y++) {    					/* this loop will write each number's percentage */
		printf("The percentage for the result of %d is %d.\n", y+1, dice[0][y]);
	}
	
	sum = 0;
	for (x=0; x<b; x++) {						/* this loop will write total percentage with losing rasyonal amount less then 1 */
		sum+=dice[0][x];
	}
	printf("Total percentage is %d. \n\n", sum);

	for (y=0; y<20; y++) {						
		for (x=0; x<b; x++) {
			result[y][x] = 0;
		}
	}

	for (x=0; x<b; x++) {
		result[19][x] = x+1;
	}

	for (x=0; x<b; x++) {						
		for (y=0; y<dice[0][x]; y++) {
			result[18-y][x] = 33;                /* 33 will replace with '*' (33 is chosen by randomly) */
		}
	}
	
	show_result();
}

