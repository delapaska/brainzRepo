#pragma once
#include <iostream>
using namespace std;

void Announce() {
	cout << ": Braiiiiinzzzzz";
};
class Zombi {
private:

public:
	string z_name;

	Zombi() {
		Announce();
	}
	~Zombi() {
		cout << "Zombie name: " << z_name;

	}
};

