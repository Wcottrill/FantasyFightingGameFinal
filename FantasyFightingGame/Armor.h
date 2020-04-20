//Wesley Cottrill
//This is my work
#ifndef ARMOR_H
#define ARMOR_H
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Armor {
	private:
		int armorPoints;
		int cost;
		string name;
	public:
		Armor(int a, int ac, string an) {
			armorPoints = a;
			cost = ac;
			name = an;
		}
		//virtual void use() = 0;

		void setDamage(int a) { armorPoints = a; }
		void setCost(int ac) { cost = ac; }
		void setName(string an) { name = an; }

		int getDamage()const { return armorPoints; }
		int getCost()const { return cost; }
		string getName()const { return name; }

};


class Squarepants : public Armor {
private:
	string material;
public:
	Squarepants(int a, int ac, string an, string m) :Armor(a, ac, an) {
		material = m;
	}
	void setMaterial(string m) { material = m; }
	string getMaterial()const { return material; }
	void use() {
		{
			cout << "Put on square pants" << endl;
		}
		
	}


};

class Chainlinkarmor : public Armor {
private:
	string material;
public:
	Chainlinkarmor(int a, int ac, string an, string m) :Armor(a, ac, an) {
		material = m;
	}
	void setMaterial(string m) { material = m; }
	string getMaterial()const { return material; }
	void use() {
		{
			cout << "Put on your chain link armor your ready for battle!" << endl;
		}

	}


};

class Paperclothes : public Armor {
private:
	string material;
public:
	Paperclothes(int a, int ac, string an, string m) :Armor(a, ac, an) {
		material = m;
	}
	void setMaterial(string m) { material = m; }
	string getMaterial()const { return material; }
	void use() {
		{
			cout << "Prepare for battle with your paper clothes" << endl;
		}

	}


};
#endif
