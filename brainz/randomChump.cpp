#include <iostream>
#include <String.h>
#include "newZombie.cpp"
#include "Zombie.cpp"
using namespace std;
void randomChunp(string name) {
	cin >> name;
	newZombie(name);
	Announce();

};