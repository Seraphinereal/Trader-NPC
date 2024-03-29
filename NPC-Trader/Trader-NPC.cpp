//Trading with a Traveling Merchant
#include <iostream> //for cout and cin
#include <string> //WHY ISNT THIS INCLUDED BY DEFAULT?
#include <vector>
//No github commits other than some brief tests and the final build, because I was learning visual studio and figuring out how to use github with it.
//In the future, I'll have better commit history on vistual studio 2022 projects.

void clearScreen() {
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}


int main()
{
	bool walkAway = false;
	int userBalance = 30;
	std::string userChoice = "";
	std::vector<std::string>::const_iterator iter; //I have no idea what an iterator is yet.
	//Player Inventory
	std::vector<std::string> userInv;
	userInv.push_back("Worn Copper Shortsword - $11");
	userInv.push_back("Ancient Ceramic Debris - $13");
	userInv.push_back("Goblin Trousers - $6");
	userInv.push_back("Bundle of Arrows - $17");
	bool canSellWorn = true;
	bool canSellAncient = true;
	bool canSellGoblin = true;
	bool canSellBundle = true;

	//NPC Inventory
	std::vector<std::string> npcInv;
	npcInv.push_back("[1] Ruby Goblet - $43");
	npcInv.push_back("[2] Bronze Longsword - $32");
	npcInv.push_back("[3] x3 Caltrops - $8");
	npcInv.push_back("[4] x2 Envigorating Potion - $24");
	bool canBuyRuby = true;
	bool canBuyBronze = true;
	int canBuyCaltrops = 3;
	int canBuyEnvigorating = 2;

	//Startup dialogue
	clearScreen();
	std::cout << "A travelling merchant approaches you on your travels.\n";
	std::cout << "\"Hello Traveler, please have a look at my wares.\"\n";





	//Gameplay loop
	while (walkAway == false) {
		std::cout << "\n\n";
		std::cout << "\"Fine weather for roadside trading, wouldn\'t you agree?\"\n";
		std::cout << "\"If you're having trouble, just say \'controls\'.\"\n\n";
		std::cin >> userChoice;
		for (char& i : userChoice) {
			i = std::tolower(i); 
		}

		//Exit
		if (userChoice == "walk") {
			clearScreen();
			walkAway = true;
		}
		//Controls
		else if (userChoice == "controls") {
			clearScreen();
			std::cout << "[walk] - Leave encounter.\n";
			std::cout << "[view] - View shop.\n";
			std::cout << "[inv] - View inventory.\n";
			std::cout << "First word of an item in inventory to sell it.\n";
			std::cout << "Number of an item in shop to buy it.\n";
		}
		//User inventory
		else if (userChoice == "inv") {
			clearScreen();
			std::cout << "You check your storage, and find you hold $" << userBalance << ", as well as:\n";
			for (int i = 0; i < userInv.size(); i++) {
				std::cout << userInv[i] << std::endl;
			}
		}
		//Selling Worn Copper Shortsword
		else if (canSellWorn == true && userChoice == "worn") {
			clearScreen();
			std::cout << "\"Hmm... I\'ll take that off your hands for $11. No refunds!\"\n";
			userInv[0] = "SOLD";
			canSellWorn = false;
			userBalance = userBalance + 11;
			std::cout << "-1 Worn Copper Shortsword\n";
			std::cout << "Balance: $" << userBalance << ".";
		}
		//Selling Ancient Ceramic Debris
		else if (canSellAncient == true && userChoice == "ancient") {
			clearScreen();
			std::cout << "\"Hmm... I\'ll take that off your hands for $13. No refunds!\"\n";
			userInv[1] = "SOLD";
			canSellAncient = false;
			userBalance = userBalance + 13;
			std::cout << "-1 Ancient Ceramic Debris\n";
			std::cout << "Balance: $" << userBalance << ".";
		}
		//Selling Goblin Trousers
		else if (canSellGoblin == true && userChoice == "goblin") {
			clearScreen();
			std::cout << "\"Hmm... I\'ll take that off your hands for $6. No refunds!\"\n";
			userInv[2] = "SOLD";
			canSellGoblin = false;
			userBalance = userBalance + 6;
			std::cout << "-1 Goblin Trousers\n";
			std::cout << "Balance: $" << userBalance << ".";
		}
		//Selling Bundle of Arrows
		else if (canSellBundle == true && userChoice == "bundle") {
			clearScreen();
			std::cout << "\"Hmm... I\'ll take that off your hands for $17. No refunds!\"\n";
			userInv[3] = "SOLD";
			canSellBundle = false;
			userBalance = userBalance + 17;
			std::cout << "-1 Bundle of Arrows\n";
			std::cout << "Balance: $" << userBalance << ".";
		}
		//Merchant shop
		else if (userChoice == "view") {
			clearScreen();
			std::cout << "The merchant reveals his wares to you, including:\n";
			for (int i = 0; i < npcInv.size(); i++) {
				std::cout << npcInv[i] << std::endl;
			}
		}
		//Buying Ruby Goblet
		else if (canBuyRuby == true && userChoice == "1" && userBalance >= 43) {
			clearScreen();
			std::cout << "\"Sure thing, It\'s all yours for $43. No refunds!\"\n";
			npcInv[0] = "[1] SOLD OUT";
			canBuyRuby = false;
			userBalance = userBalance - 43;
			userInv.push_back("Ruby Goblet");
			std::cout << "+1 Ruby Goblet\n";
			std::cout << "Balance: $" << userBalance << ".";
		}
		//Buying Bronze Longsword
		else if (canBuyBronze == true && userChoice == "2" && userBalance >= 32) {
			clearScreen();
			std::cout << "\"Sure thing, It\'s all yours for $32. No refunds!\"\n";
			npcInv[1] = "[2] SOLD OUT";
			canBuyBronze = false;
			userBalance = userBalance - 32;
			userInv.push_back("Bronze Longsword");
			std::cout << "+1 Bronze Longsword\n";
			std::cout << "Balance: $" << userBalance << ".";
		}
		//Buying Caltrops
		else if (canBuyCaltrops == 3 && userChoice == "3" && userBalance >= 8) {
			clearScreen();
			std::cout << "\"Sure thing, It\'s all yours for $8. No refunds!\"\n";
			npcInv[2] = "[3] x2 Caltrops - $8";
			canBuyCaltrops = canBuyCaltrops - 1;
			userBalance = userBalance - 8;
			userInv.push_back("Caltrops");
			std::cout << "+1 Caltrops\n";
			std::cout << "Balance: $" << userBalance << ".";
		}
		//Buying Caltrops again
		else if (canBuyCaltrops == 2 && userChoice == "3" && userBalance >= 8) {
			clearScreen();
			std::cout << "\"Sure thing, It\'s all yours for $8. No refunds!\"\n";
			npcInv[2] = "[3] Caltrops - $8";
			canBuyCaltrops = canBuyCaltrops - 1;
			userBalance = userBalance - 8;
			userInv.push_back("Caltrops");
			std::cout << "+1 Caltrops\n";
			std::cout << "Balance: $" << userBalance << ".";
			}
		//Buying Caltrops for last time
		//I KNOW THIS IS UGLY BUT ITS LATE AND I DONT WANNA SPEND 3 HOURS FIGURING OUT ITERATORS RIGHT NOW. IVE BEEN CODING FOR 16 HOURS STRAIGHT.
		else if (canBuyCaltrops == 1 && userChoice == "3" && userBalance >= 8) {
			clearScreen();
			std::cout << "\"Sure thing, It\'s all yours for $8. No refunds!\"\n";
			npcInv[2] = "[3] SOLD OUT";
			canBuyCaltrops = canBuyCaltrops - 1;
			userBalance = userBalance - 8;
			userInv.push_back("Caltrops");
			std::cout << "+1 Caltrops\n";
			std::cout << "Balance: $" << userBalance << ".";
		}
		//Buying Envigorating Potion first time
		else if (canBuyEnvigorating == 2 && userChoice == "4" && userBalance >= 24) {
			clearScreen();
			std::cout << "\"Sure thing, It\'s all yours for $24. No refunds!\"\n";
			npcInv[3] = "[4] Envigorating Potion - $24";
			canBuyEnvigorating = canBuyEnvigorating - 1;
			userBalance = userBalance - 24;
			userInv.push_back("Envigorating Potion");
			std::cout << "+1 Envigorating Potion\n";
			std::cout << "Balance: $" << userBalance << ".";
			}
		//Buying Envigorating Potion last time
		else if (canBuyEnvigorating == 1 && userChoice == "4" && userBalance >= 24) {
			clearScreen();
			std::cout << "\"Sure thing, It\'s all yours for $24. No refunds!\"\n";
			npcInv[3] = "[4] SOLD OUT";
			canBuyEnvigorating = canBuyEnvigorating - 1;
			userBalance = userBalance - 24;
			userInv.push_back("Envigorating Potion");
			std::cout << "+1 Envigorating Potion\n";
			std::cout << "Balance: $" << userBalance << ".";
			}
		//Out of stock for multiple purchase items
		else if (canBuyCaltrops == 0 && userChoice == "3" || canBuyEnvigorating == 0 && userChoice == "4") {
			clearScreen();
			std::cout << "\"Sorry, I\'m all out of those now.\"";
		}
		//Out of stock
		else if (canBuyRuby == false && userChoice == "1" || canBuyBronze == false && userChoice == "2") {
			clearScreen();
			std::cout << "\"Sorry, I don\'t have any more.\"";
		}
		//Cant afford item
		else if (canBuyRuby == true && userChoice == "1" && userBalance < 43 ||
			canBuyBronze == true && userChoice == "2" && userBalance < 32 ||
			canBuyCaltrops >= 1 && userChoice == "3" && userBalance < 8 ||
			canBuyEnvigorating >= 1 && userChoice == "4" && userBalance < 24) {
				clearScreen();
				std::cout << "\"You can\'t afford that.\"";
			}
		//Already sold this item
		else if (canSellWorn == false && userChoice == "worn" ||
			canSellAncient == false && userChoice == "ancient" ||
			canSellGoblin == false && userChoice == "goblin" ||
			canSellBundle == false && userChoice == "bundle") {
				clearScreen();
				std::cout << "\"No refunds, that belongs to me now.\"";
		}
		//Invalid phrase
		else {
			clearScreen();
			std::cout << "\"Is that common tongue? Maybe I misheard you?\"";
		}
	} //END GAMEPLAY LOOP


	//End dialogue via walking away
	if (walkAway == true) {
		clearScreen();
		std::cout << "\"Right, I'll be on my way then. Good day.\"\n";
		std::cout << "You pass by the merchant and continue your adventure.\n\n";
	}
}