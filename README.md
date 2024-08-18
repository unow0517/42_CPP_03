# 42_CPP_03
Keyword: inheritance

## New Thing To Learn

```c++
class ScavTrap : public ClapTrap {
    public:

    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();

    void    attack(const std::string& target);
    void    guardGate(void);

    private:

};
```

`public ClapTrap` on first line indicates that ScavTrap is inheriting from the class ClapTrap using public inheritance. Public inheritance means that the public and protected members of the base class (ClapTrap) will remain public and protected, respectively, in the derived class (ScavTrap).
