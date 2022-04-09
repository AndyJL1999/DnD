
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <fstream>
#include "Player.h"

int main()
{
	std::ofstream scoreFile("Score.txt");
	int playerID = 0;
	char playAgain = ' ';

	do {

		Player player;
		player.Move();
		playerID++;
		scoreFile << "Player: " << playerID << " | XP: " << player.getXP() << std::endl;
		std::cout << "\nWould you like to play again? ('y' for Yes. Press any key for No.)\n";
		std::cin >> playAgain;

	} while (playAgain == 'y');

	scoreFile.close();

	std::cout << "\nGood Bye!";

	return 0;
}
