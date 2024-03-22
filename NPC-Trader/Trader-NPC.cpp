//Trading with a Traveling Merchant
#include <iostream> //for cout and cin
#include <string> //WHY ISNT THIS INCLUDED BY DEFAULT?

void clearScreen() {
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

int main()
{

	std::string userChoice = "";
	std::string angelGifts[10] = { "[1] Wealth", "[2] Fame", "[3] Power", "[4] Rejuvination", "[5] Wisdom", "[6] Blade of Midas", "[7] Scroll of Flame Enlightenment", "[8] Index of Body Transfiguration", "[9] Crown of Fell Gob", "[10] Subspace Domain Key" };
	std::string inventory[2] = { "One", "Two" };
	int itemsRemaining = 2;
	int patience = 0;

	// This is to make wishes not repeatable (booleans weren't working for some reason)
	int wealthWish = 1;
	int fameWish = 1;
	int powerWish = 1;
	int rejuvWish = 1;
	int wisdomWish = 1;
	int midasWish = 1;
	int scrollWish = 1;
	int indexWish = 1;
	int gobbyWish = 1;
	int keyWish = 1;

	//Startup dialogue
	std::cout << "\tYou narrowly escape a desolate warzone to the cover of an untouched forest. \n";
	std::cout << "Stumbling tree to tree, searching for a place to rest, your eyes land upon a marble fountain. \n";
	std::cout << "As you approach, water begins to flow into the fountain. The water eminates a golden aura, \n";
	std::cout << "enticing you to come closer. Reaching your hand towards the water, a heavenly ray of light \n";
	std::cout << "descends onto you. Looking up, your eyes meet with a beautiful glowing angel. \n";
	std::cout << "\"Welcome denizen of Earth, what does one's mortal heart yearn for in this moment?\"\n";

	//Gameplay loop
	for (int wishes = 3; wishes > 0; ++patience)
	{
		std::cout << "\n\n";
		std::cout << "(You can hold " << itemsRemaining << " more item(s), and have " << wishes << " wish(es) left)\n";
		std::cout << angelGifts[0] << "\n";
		std::cout << angelGifts[1] << "\n";
		std::cout << angelGifts[2] << "\n";
		std::cout << angelGifts[3] << "\n";
		std::cout << angelGifts[4] << "\n";
		std::cout << angelGifts[5] << "\n";
		std::cout << angelGifts[6] << "\n";
		std::cout << angelGifts[7] << "\n";
		std::cout << angelGifts[8] << "\n";
		std::cout << angelGifts[9] << "\n";
		std::cin >> userChoice;

		//Wealth
		if (wealthWish == 1 && userChoice == "1" && wishes > 0) {
			clearScreen();
			std::cout << "\"One's wish is of simple mind, but it shall be done.\"\n";
			std::cout << "\"Endless wealth awaits where one calls Home.\"";
			angelGifts[0] = "[1] Empty";
			--wealthWish;
			--wishes;
		}

		//Fame
		else if (fameWish == 1 && userChoice == "2" && wishes > 0) {
			clearScreen();
			std::cout << "\"One lives for admiration? So be it.\"\n";
			std::cout << "\"One's self is common knowledge now.\"";
			angelGifts[1] = "[2] Empty";
			--fameWish;
			--wishes;
		}

		//Power
		else if (powerWish == 1 && userChoice == "3" && wishes > 0) {
			clearScreen();
			std::cout << "\"One yearns for unlimited potential in physical prowess? So be it.\"\n";
			std::cout << "\"One's self holds endless potential now.\"";
			angelGifts[2] = "[3] Empty";
			--powerWish;
			--wishes;
		}

		//Rejuvination
		else if (rejuvWish == 1 && userChoice == "4" && wishes > 0) {
			clearScreen();
			std::cout << "\"One wishes to be free of all ailments? So be it.\"\n";
			std::cout << "\"One's self will be forever healthy till natural death.\"";
			angelGifts[3] = "[4] Empty";
			--rejuvWish;
			--wishes;
		}

		//Wisdom
		else if (wisdomWish == 1 && userChoice == "5" && wishes > 0) {
			clearScreen();
			std::cout << "\"One wishes for wisdom? So be it.\"\n";
			std::cout << "\"One's mind has been made flawless.\"";
			angelGifts[4] = "[5] Empty";
			--wisdomWish;
			--wishes;
		}

		//Midas Blade
		else if (midasWish == 1 && userChoice == "6" && wishes > 0 && itemsRemaining > 0) {
			clearScreen();
			std::cout << "\"One wishes to wield Midas? So be it.\"\n";
			std::cout << "\"One is immune to midas, and turns only direct contact of the blade to gold.\"";
			angelGifts[5] = "[6] Empty";
			--midasWish;
			--itemsRemaining;
			--wishes;
		}

		//Scroll of Flame Enlightenment
		else if (scrollWish == 1 && userChoice == "7" && wishes > 0 && itemsRemaining > 0) {
			clearScreen();
			std::cout << "\"One wishes to be a being of fire? So be it.\"\n";
			std::cout << "\"One's self can conjure and control any fire at will.\"";
			angelGifts[6] = "[7] Empty";
			--scrollWish;
			--itemsRemaining;
			--wishes;
		}

		//Index of Body Transfiguration
		else if (indexWish == 1 && userChoice == "8" && wishes > 0 && itemsRemaining > 0) {
			clearScreen();
			std::cout << "\"Unsatisfied with one's form? So be it.\"\n";
			std::cout << "\"One's hands will transfigure any human at will with one touch.\"";
			angelGifts[7] = "[8] Empty";
			--indexWish;
			--itemsRemaining;
			--wishes;
		}

		//Crown of Fell Gob
		else if (gobbyWish == 1 && userChoice == "9" && wishes > 0 && itemsRemaining > 0) {
			clearScreen();
			std::cout << "\"...Really? So be it.\"\n";
			std::cout << "\"One has gained all the power and authority of the Fell Gob; Gobby.\"";
			angelGifts[8] = "[9] Empty";
			--gobbyWish;
			--itemsRemaining;
			--wishes;
		}

		//Subspace Domain Key
		else if (keyWish == 1 && userChoice == "10" && wishes > 0 && itemsRemaining > 0) {
			clearScreen();
			std::cout << "\"One yearns for a place of belonging? So be it.\"\n";
			std::cout << "\"One is bound to the only key to a private plain.\"";
			angelGifts[9] = "[10] Empty";
			--keyWish;
			--itemsRemaining;
			--wishes;
		}
		//Not an option
		else {
			clearScreen();
			std::cout << "\"Regretfully, it cannot be done.\"\n\n";
		}
	}
	//End dialogue
	std::cout << "\n\n\n";
	std::cout << "\"One's desires are well met, Goodbye.\"\n";
	std::cout << "The angel fades away, along with the fountain.\n";
	std::cout << "You suppose it\'s time to leave, and maybe survive the warzone.\n\n\n\n";
}