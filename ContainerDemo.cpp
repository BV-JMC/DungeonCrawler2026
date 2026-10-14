#include "ContainerDemo.h"

void ContainerDemo::DoDemo() 
{
	std::cout << "Welcome to the container demo!" << std::endl;
	std::cout << std::endl;
	std::cout << "Press any key to begin Array Demo()" << std::endl;
	std::cin.get();
	ArrayDemo();
}

void ContainerDemo::ArrayDemo()
{
	//Create an array and populate with data
	MyGames myGames[3];
	myGames[0].gameName = "Metal Gear Solid 5";
	myGames[0].gameDeveloper = "Konami";
	myGames[0].timesPlayed = 5;

	myGames[1].gameName = "X-Men vs Street Fighter";
	myGames[1].gameDeveloper = "Capcom";
	myGames[1].timesPlayed = 226;

	//Show the amount of items in the array
	std::cout << "I have " << std::size(myGames) << " games" << std::endl;

	//Loop through array and display the data for each element
	for (int i = 0; i < std::size(myGames); i++)
	{
		std::cout << "Game " << i << " name is " << myGames[i].gameName;
		std::cout << std::endl;
		std::cout << "I have played " << myGames[i].gameName << " " << myGames[i].timesPlayed << " times";
		std::cout << std::endl;
	}
}
