#include "Zombie.cpp"
using namespace std;
Zombi * newZombie(string  name) {
	Zombi* zomb{};
	zomb->z_name = name;
	return zomb;
}