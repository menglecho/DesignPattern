#include "Duck.hpp"
#include "MallardDuck.hpp"

int main()
{
	MallardDuck mallard;
    mallard.display();
    mallard.swim();
    mallard.performQuack();
    mallard.performFly();
	
	return 0;
}
