//Wesley Cottrill
//This is my work
#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Character {
private:
	int Health;
	//int Weapon;
	vector<Weapon*>myWeapon;
	//int Armor;
	vector<Armor*>myArmor;
	//int PowerUp;
	vector < PowerUp* > myPowerUp;
	string name;
	int Money;
public:
	Character(int c, string cn, int cm) {
		Health = c;
		name = cn;
		Money = cm;
	}
	//virtual void use() = 0;

	void setHealth(int c) { Health = c; }
	void setName(string cn) { name = cn; }
	void setMoney(int cm) { Money = cm; }
	int getHealth()const { return Health; }
	string getName()const { return name; }
	int getMoney()const { return Money; }

	void addWeapon(Weapon* w) {
		myWeapon.push_back(w);

	}

	void addArmor(Armor* a) {
		myArmor.push_back(a);

	}
	void addPowerUp(PowerUp* p) {
		myPowerUp.push_back(p);
	}

	friend ostream& operator<<(ostream& o, const Character& rhs) {
		o << rhs.getHealth() << rhs.getName() << " $ " << rhs.getMoney() << endl;
		return o;
	}

};


#endif