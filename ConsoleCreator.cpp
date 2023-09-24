#include "ConsoleCreator.h"
int sizeLine(string str, int num) {
	string sstr;
	int siz;
	str.substr(num - 1);
	for(siz=0;str[siz]!=';';siz++){}
	return siz;
}


string ConsoleCreator::creatPol()
{
	ifstream iff("Torso.csv");
	string pol;
	while (iff.is_open()) {
		string str;
		string pol;
		cout << "input m/w";
		while (getline(iff,str)) {
			cout << str << endl;
		}
		cin >> pol;
		if (pol == "m" || pol == "M") { pol="м"; }
		else if(pol == "w" || pol == "W") { pol = "ж"; }
	}
	iff.close();
	return pol;

}

vector<string> ConsoleCreator::creatBodu()
{
	vector<string> clothesB;
	iff.open("Clothes.csv");
	while (iff.is_open()) {
		string str;
		string mastrV;
		string mastrN;
		cout << "input 2№";
		int num;
		while (getline(iff, str)) {
			if (str.substr(',',4) == "верх"|| str.substr(',', 7) == "верхниз") {
				cout<<str;
				for (int i = 0; i != ','; i++) {
					mastrV += to_string(i);
				}
				mastrV += ';';
			}
		}
		cin >> num;
		clothesB.push_back(str.substr(num - 1, sizeLine(mastrV,num)));
		while (getline(iff, str)) {
			if (str.substr(',', 3) == "низ") {
				cout << str;
				for (int i = 0; i != ','; i++) {
					mastrN += to_string(i);
				}
				mastrN += ';';
			}
		}
		cin >> num;
		clothesB.push_back(str.substr(num - 1, sizeLine(mastrN, num)));
	}
	iff.close();
	return clothesB;
}

string ConsoleCreator::creatBoot()
{
	iff.open("Hairstyles.csv");
	int boot;
	string mastr;
	string str;
	while (iff.is_open()) {
		int hair;
		while (getline(iff, str)) {
			cout << str << endl;
			for (int i = 0; i != ','; i++) {
				mastr += to_string(i);
			}
			mastr += ';';
		}
		cin >> boot;
		str.substr(boot - 1, sizeLine(mastr, boot));
		iff.close();
	}
	return str;
}
string ConsoleCreator::creatHead(string pol)
{
	iff.open("Hairstyles.csv");
	int hair;
	string mastr;
	string str;
	while (iff.is_open()) {
		int hair;
		while (getline(iff, str)) {
			if (str.substr(',', 1) == pol || str.substr(',', 1) == "у") {
				cout << str << endl;
				for (int i = 0; i != ','; i++) {
					mastr += to_string(i);
				}
				mastr += ';';
			}

		}

		cin >> hair;
		str.substr(hair - 1, sizeLine(mastr, hair));
		iff.close();	
	}
	return str;
}
