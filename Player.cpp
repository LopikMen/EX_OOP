#include "Player.h"


void Player::creatPl()
{
	ConsoleCreator cc;
	cout << "pol" << endl;
	pol = cc.creatPol();
	cout << "head" << endl;
	head = cc.creatHead(pol);
	cout << "bodu" << endl;
	boduClothesVerhAndNiz = cc.creatBodu();
	cout << "boots" << endl;
	boots = cc.creatBoot();
}

void Player::sizePl()
{
	cout << pol << endl;
	cout << head << endl;
	cout << boduClothesVerhAndNiz[0] << endl;
	cout << boduClothesVerhAndNiz[1] << endl;
	cout << boots;
}
