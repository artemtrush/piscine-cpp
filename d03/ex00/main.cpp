#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	std::srand(time(NULL));
	FragTrap	r1("Zhelezyaka");
	FragTrap	r2;

	std::cout << std::endl;

	r1.rangedAttack("Frag Bot");
	r2.takeDamage(20);

	std::cout << std::endl;

	r1.meleeAttack("Frag Bot");
	r2.takeDamage(30);

	std::cout << std::endl;
	
	r2.takeDamage(105);
	r2.takeDamage(105);

	std::cout << std::endl;

	r2.beRepaired(100);
	r2.beRepaired(100);

	std::cout << std::endl;

	r2.vaulthunter_dot_exe("Zhelezyaka");
	r2.vaulthunter_dot_exe("Zhelezyaka");
	r2.vaulthunter_dot_exe("Zhelezyaka");
	r2.vaulthunter_dot_exe("Zhelezyaka");
	r2.vaulthunter_dot_exe("Zhelezyaka");
	r2.takeDamage(3);

	std::cout << std::endl;

	return 0;
}