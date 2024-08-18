/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:04:43 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/18 16:00:06 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    cl1("CL1");
    ClapTrap    cl2("CL2");
	ScavTrap	sc1("SC1");
	ScavTrap	sc2("SC2");
	ClapTrap	cpClap;
	ScavTrap	cpScav;
	
	std::cout << "-------copy test below-----------" << std::endl;
	std::cout << "							 " << std::endl;
	
	cpClap = cl1;
	cpScav = sc1;

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
	cl1.attack("cl2");
	cl2.takeDamage(4);
	cl2.beRepaired(3);
	cl2.attack("cl1");
	cl1.takeDamage(3);
	cl1.beRepaired(3);

	std::cout << "							 " << std::endl;

}