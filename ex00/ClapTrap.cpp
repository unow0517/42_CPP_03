# include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	name("Default"),
	hitPoints(10),
	energyPoints(10),
	attackDamage(0)
{
	std::cout << "ClapTrap default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name):
	name(name),
	hitPoints(10),
	energyPoints(10),
	attackDamage(0)
{
    std::cout << "ClapTrap Constructor with name " << name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other):
	name(other.name),
	hitPoints(other.hitPoints),
	energyPoints(other.energyPoints),
	attackDamage(other.attackDamage)
{
	std::cout << "ClapTrap copy constructor called for " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap copy assignment operator called for " << name << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "either energyPoints or hitPointsfor is not enough for ClapTrap " << name <<  std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		if (hitPoints > amount)
		{
			hitPoints = hitPoints - amount;
			std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and remaining hit points : " << hitPoints << std::endl;
		}
		else
		{
			hitPoints = 0;
			std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and has no hit points left! " << std::endl;
		}
	}
	else
	{
		std::cout << "ClapTrap " << name << " has no hit points left!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0)
	{
		hitPoints = hitPoints + amount;
		energyPoints = energyPoints - 1;
		std::cout << "ClapTrap " << name <<" is repaired by " << amount << " hit points , total hitpoints are " << hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap" << name << " has no energy points" << std::endl;
}