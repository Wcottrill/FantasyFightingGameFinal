//Wesley Cottrill
//This is my work
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <ctime>
#include <utility>
#include <string>
#include <sstream>

using namespace std;

class Weapon {
private:
	int damagePoints;
	int cost;
	string name;
public:
	Weapon(int w, int wc, string n) {
		damagePoints = w;
		cost = wc;
		name = n;
	}
	//virtual void use() = 0;

	void setDamage(int w) { damagePoints = w; }
	void setCost(int wc) { cost = wc; }
	void setName(string n) { name = n; }

	int getDamage()const { return damagePoints; }
	int getCost()const { return cost; }
	string getName()const { return name; }

};

class Lightsaber : public Weapon {
private:
	string material;
public:
	Lightsaber(int w, int wc, string n, string m) :Weapon(w, wc, n) {
		material = m;
	}
	void setMaterial(string m) { material = m; }
	string getMaterial()const { return material; }
	void use() {
		cout << "Pick up your lightsaber and prepare to duel" << endl;
		
	}


};

class Paperclip : public Weapon {
private:
	string material;
public:
	Paperclip(int w, int wc, string n, string m) :Weapon(w, wc, n) {
		material = m;
	}
	void setMaterial(string m) { material = m; }
	string getMaterial()const { return material; }
	void use() {
		cout << "prepare for battle with your paperclip" << endl;
	}


};


class Blaster : public Weapon {
private:
	string material;
public:
	Blaster(int w, int wc, string n, string m) :Weapon(w, wc, n) {
		material = m;
	}
	void setMaterial(string m) { material = m; }
	string getMaterial()const { return material; }
	void use() {
		cout << "pick up the blaster and prepare for battle" << endl;
	}

	
};


#endif