# 42_CPP_03
Keyword: inheritance

## New Thing To Learn

### public inheritance, private inheritance
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

```c++
class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
};

class Derived : public Base {
    // publicVar remains public
    // protectedVar remains protected
    // privateVar is not accessible
};
```

```c++
class Derived : private Base {
    // Inherits privately
};
```
In private inheritance, **all public and protected members of the base class become private** in the derived class.

### Access specifiers review
* **public** can be accessed from anywhere outside the class.
* **private** can only be accessed from within the class itself. They are not accessible outside the class, not even by derived classes.

```c++
class MyClass {
private:
    int privateVariable;

    void privateMethod() {
        // Only accessible within this class
    }
};
```

```c++
MyClass obj;
obj.privateVariable = 10;  // Invalid, will cause a compilation error
obj.privateMethod();       // Invalid, will cause a compilation error
```
private members can be accessed with public function

* **protected** can be accessed from within the class itself and by derived classes(ScavTrap in this project), but not from outside the class.
