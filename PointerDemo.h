#pragma once
#include <iostream>

using namespace std;
class PointerDemo
{
public:
	void DoDemo();
	int health =100;
private:
	void PassByValueDemo(int, int);
	void PassByRefDemo(int&, int&);
	void UsePointersDemo();
	void MemLeakDemo();
};

