//Trading with a Traveling Merchant
#include <iostream> //for cout and cin
#include <string> //WHY ISNT THIS INCLUDED BY DEFAULT?
#include <vector>

void clearScreen() {
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}


int main()
{
	bool walkAway = false;
	int userBalance = 157;
	std::string userChoice = "";
	//Player Inventory
	std::vector<std::string> userInv;
	userInv.push_back("Worn Copper Shortsword");

	//NPC Inventory
	std::vector<std::string> npcInv;
	npcInv.push_back("[1] Ruby Goblet - $33");

	//Startup dialogue
	clearScreen();
	std::cout << "A travelling merchant seems to approach you.\n";
	std::cout << "\"Hello Traveler, please have a look at my wares.\"\n";


	//Gameplay loop
	while (walkAway == false) {

		std::cout << "\n\n";
		std::cout << "bend over and shake your shit dont lie i know you gyatt a dumpy..\n";
		std::cin >> userChoice;


		if (userChoice == "walk") {
			clearScreen();
			walkAway = true;
		}
	} //END GAMEPLAY LOOP




	//End dialogue via walking away
	if (walkAway == true) {
		std::cout << "\n\n\n";
		std::cout << "\"Right, I'll be on my way then.\"\n";
		std::cout << "You pass by the merchant and continue your adventure.\n\n\n\n\n";
	}
}