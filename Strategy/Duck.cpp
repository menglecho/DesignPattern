#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
#include <iostream>

Duck::Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior) :
    flyBehavior(std::move(flyBehavior)), quackBehavior(std::move(quackBehavior)) {}

void Duck::performQuack() const {
	quackBehavior->quack();
}

void Duck::swim() const {
	std::cout << "All duck float" << std::endl;
}

void Duck::performFly() const {
	flyBehavior->fly();
}
