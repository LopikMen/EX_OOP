#pragma once
#include<iostream>
#include"ConsoleCreator.h"
using namespace std;

class Player
{
private:
	string pol;
	string head;
	vector<string> boduClothesVerhAndNiz;
	string boots;
public:
	friend class ConsoleCreator;
	void creatPl();
	void sizePl();
};

