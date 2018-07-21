#ifndef Squeak_hpp
#define Squeak_hpp

#include "QuackBehavior.hpp"

class Squeak : public QuackBehavior
{
public:
	void quack() const;
};

#endif