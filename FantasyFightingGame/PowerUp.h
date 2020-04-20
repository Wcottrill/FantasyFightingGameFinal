//Wesley Cottrill
//This is my work
#ifndef POWERUP_H
#define POWERUP_H
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class PowerUp {
private:
	int healthPoints;
	int cost;
	string name;
public:
	PowerUp(int h, int hc, string hn) {
		healthPoints = h;
		cost = hc;
		name = hn;
	}
	//virtual void use() = 0;

	void setHealth(int h) { healthPoints = h; }
	void setCost(int hc) { cost = hc; }
	void setName(string hn) { name = hn; }

	int getHealth()const { return healthPoints; }
	int getCost()const { return cost; }
	string getName()const { return name; }


};

class BlueMilk : public PowerUp {
private:
	string material;
public:
	BlueMilk(int h, int hc, string hn, string m) : PowerUp(h, hc, hn) {
		material = m;
	}
	void setMaterial(string m) { material = m; }
	string getMaterial()const { return material; }
	void use() {
		{
			cout << "Drink your blue milk for extra health points" << endl;
		}

	}


};

class ScoobySnacks : public PowerUp {
private:
	string material;
public:
	ScoobySnacks(int h, int hc, string hn, string m) : PowerUp(h, hc, hn) {
		material = m;
	}
	void setMaterial(string m) { material = m; }
	string getMaterial()const { return material; }
	void use() {
		{
			cout << "Eat your delicious scooby snacks for extra health points" << endl;
		}

	}


};

class KrabbyPatty : public PowerUp {
private:
	string material;
public:
	KrabbyPatty(int h, int hc, string hn, string m) : PowerUp(h, hc, hn) {
		material = m;
	}
	void setMaterial(string m) { material = m; }
	string getMaterial()const { return material; }
	void use() {
		{
			cout << "Eat this awesome krabby patty for extra health points" << endl;
		}

	}


};
#endif

