#pragma once
#include <iostream>
#include <cctype>

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

