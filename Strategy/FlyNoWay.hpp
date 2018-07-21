#ifndef FlyNoWay_hpp
#define FlyNoWay_hpp

#include "FlyBehavior.hpp"

class FlyNoWay : public FlyBehavior
{
public:
	virtual void fly() const;
};

#endif