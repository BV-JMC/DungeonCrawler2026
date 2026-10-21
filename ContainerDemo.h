#pragma once
#include <iostream>


class ContainerDemo
{
	struct MyGames {
		std::string gameName;
		std::string gameDeveloper;
		int timesPlayed;
	};

public:
	void DoDemo();
private:
	void ArrayDemo();
};

