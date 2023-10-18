#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int choose_winner(int i, int j);

int main(int argc, char **argv) {
	int computer_choice;
	int user_choice;
	int result;
	bool next_game;

	int user_wins;
	int computer_wins;
	int ties;
	user_wins = 0;
	computer_wins = 0;
	ties = 0;

	next_game = true;
	srand(time(NULL));

	while (next_game) {
		computer_choice = rand() % 3;
		
		printf("Choose (r)ock, (p)aper, (s)scissors: ");
		user_choice = getchar();
		getchar();
		switch (user_choice) {
		case 'r':
			result = choose_winner(0, computer_choice);
			break;
		case 'p':
			result = choose_winner(1, computer_choice);
			break;
		case 's':
			result = choose_winner(2, computer_choice);
			break;
		default:
			printf("Error: Invalid Option\n");
			return 1;
		}

		switch (result) {
		case 0:
			printf("You Loose! Better Luck Next Time!\n");
			++computer_wins;
			break;
		case 1:
			printf("You Win! Congrats!\n");
			++user_wins;
			break;
		case 2:
			printf("You Tied! Darn.\n");
			++ties;
			break;
		default:
			return 2;
		}
		printf("Play another game? ");
		user_choice = getchar();
		getchar();
		
		if (user_choice == 'n')
			next_game = false;
	}
	printf("\n\nPlayer wins: %d\nComputer wins: %d\nTies: %d\n",user_wins,computer_wins,ties);
	
	return 0;
}

int choose_winner(int player, int computer) {
	switch (player) {
	case 0:
		switch (computer) {
		case 0:
			return 2;
		case 1:
			return 0;
		case 2:
			return 1;
		default:
			printf("Error: invalid computer argument\n");
		}
		break;
	case 1:
		switch (computer) {
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		default:
			printf("Error: invalid computer argument\n");
		}
		break;
	case 2:
		switch (computer) {
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			printf("Error: invalid computer argument\n");
		}
		break;
	default:
		printf("Error: invalid player argument\n");
		return 3;
		break;
	}
}
