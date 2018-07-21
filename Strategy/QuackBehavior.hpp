#ifndef QuackBehavior_hpp
#define QuackBehavior_hpp

#include <iostream>

class QuackBehavior
{
public:
	virtual void quack() const = 0;
	virtual ~QuackBehavior(){};
};


#endif