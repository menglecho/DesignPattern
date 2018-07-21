#ifndef Duck_hpp
#define Duck_hpp

#include <memory>
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

class Duck
{
public:
	std::unique_ptr<FlyBehavior> flyBehavior;
	std::unique_ptr<QuackBehavior> quackBehavior;
	Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior);
	virtual ~Duck(){};
	void performQuack() const;
	void swim() const;
	void performFly() const;
	virtual void display() const = 0; 

};
	

#endif