/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:04:43 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/21 10:27:42 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	//construct claptrap
    ClapTrap    cl1("CL1");
    ClapTrap    cl2("CL2");
	
	//construct scavtrap
	ScavTrap	sc1("SC1");
	ScavTrap	sc2("SC2");

	//construct fragtrap
	FragTrap	fr1("FR1");
	FragTrap	fr2("FR2");
	
	ClapTrap	cpClap;
	ScavTrap	cpScav;
	FragTrap	cpFrag;
	
	std::cout << "-------copy test below-----------" << std::endl;
	std::cout << "							 " << std::endl;
	
	cpClap = cl1;
	cpScav = sc1;
	cpFrag = fr1;
	
	std::cout << "							 " << std::endl;
	std::cout << "-------function test below-----------" << std::endl;
	std::cout << "							 " << std::endl;

	sc1.attack("sc2");
	sc2.takeDamage(4);
	sc2.beRepaired(3);
	sc2.attack("sc1");
	sc1.takeDamage(3);
	sc1.beRepaired(3);
	sc2.guardGate();
	sc1.guardGate();
	
	std::cout << "							 " << std::endl;

	cl1.attack("cl2");
	cl2.takeDamage(4);
	cl2.beRepaired(3);
	cl2.attack("cl1");
	cl1.takeDamage(3);
	cl1.beRepaired(3);

	std::cout << "							 " << std::endl;
	
	fr1.attack("fr2");
	fr2.takeDamage(3);
	fr1.beRepaired(3);
	fr1.highFivesGuys();

	std::cout << "							 " << std::endl;

}