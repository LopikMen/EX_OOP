#pragma once
#include<fstream>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class ConsoleCreator
{
	ifstream iff;

public:
	string creatPol();
	vector<string> creatBodu();
	string creatHead(string pol);
	string creatBoot();
};

