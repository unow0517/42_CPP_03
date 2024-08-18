/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:43:56 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/18 15:59:18 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("scavtrap")
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
	std::cout << "hitPoints : " << hitPoints << std::endl;
	std::cout << "energyPoints : " << energyPoints << std::endl;
	std::cout << "attackDamage : " << attackDamage << std::endl;
	std::cout << " " << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap "<< name << " constructed based on ClapTrap " << name << std::endl;
	std::cout << "hitPoints : " << hitPoints << std::endl;
	std::cout << "energyPoints : " << energyPoints << std::endl;
	std::cout << "attackDamage : " << attackDamage << std::endl;
	std::cout << " " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
    *this = other;
	std::cout << "hitPoints : " << hitPoints << std::endl;
	std::cout << "energyPoints : " << energyPoints << std::endl;
	std::cout << "attackDamage : " << attackDamage << std::endl;
	std::cout << " " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor for ScavTrap " << name << " is called" << std::endl;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ClapTrap copy assignment operator called for " << other.name << std::endl;
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints = energyPoints - 1;
		std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "No energy or hit points left for ScavTrap " << name <<  std::endl;

}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode " << std::endl;
}