/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:00:00 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/18 17:12:50 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("fragtrap")
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap default constructed" << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructed based on ClapTrap" << name <<  std::endl;
	std::cout << "hitPoints : " << hitPoints << std::endl;
	std::cout << "energyPoints : " << energyPoints << std::endl;
	std::cout << "attackDamage : " << attackDamage << std::endl;
	std::cout << " " << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap " << name << "copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor for FragTrap " << name << " called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FragTrap copy assignment operator called for " << name << " and " << other.name << std::endl;
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints = energyPoints - 1;
		std::cout << "FragTrap " << name << " attacks " << target << " , causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "No energy or hit points left for FragTrap " << name <<  std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " : Common  guys give me Highh fiveeeee !! " << std::endl;
}
