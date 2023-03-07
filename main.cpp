#include<iostream>
using namespace std;

class planet {
private:
	int mass;
	int numMoons;
	int numRings;
	char cat;
	bool hasLife;

public:
	planet();
	planet(int m, int n, int r, char c, bool l);

	void printInfo();
	void captureMoon();
	void shredMoon();
	void growLife();
	void getHitByAsteroid();
};


int main() {
	planet Tony;
	planet Fortnite(29, 69, 5, 'r', true);
	planet Uranus(8.6, 27, 13, 'i', false);

	Tony.printInfo();
	Fortnite.printInfo();
	Uranus.printInfo();


}

planet::planet() {
	mass = 5.9;
	numMoons = 1;
	numRings = 0;
	cat = 'r';
	hasLife = true;
}

planet::planet(int m, int n, int r, char c, bool l){
	mass = m;
	numMoons = n;
	numRings = r;
	cat = c;
	hasLife = l;
}

void planet::printInfo() {
	cout << "The planets mass is " << mass << endl;
	cout << "The planet has " << numMoons << " Moons" << endl;
	cout << "The planet has " << numRings << " rings" << endl;
	if (cat == 'g')
		cout << "This planet is a gas planet" << endl;
	else if (cat == 'i')
		cout << "This planet is an ice planet" << endl;
	else if (cat == 'r')
		cout << "This planet is rocky" << endl;

	if (hasLife == true)
		cout << "This planet has life!" << endl;
	else
		cout << "This planet is not life!" << endl;

	cout << endl;
	cout << endl;
}

void planet::captureMoon() {
	numMoons += 1;
	cout << "Planet got a new moon!" << endl;
}

void planet::shredMoon() {
	numRings += 1;
	cout << "Planet got a new ring!" << endl;
}

void planet::growLife() {
	hasLife = true;
	cout << "Planet has grown life" << endl;
}

void planet::getHitByAsteroid() {
	hasLife = false;
	cout << "Plaent got hit by asteroid and there is no more life" << endl;
}

