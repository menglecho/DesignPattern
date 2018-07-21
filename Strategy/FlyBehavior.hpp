#ifndef FlyBehavior_hpp
#define FlyBehavior_hpp

class FlyBehavior
{
public:
	virtual void fly() const = 0;
	virtual ~FlyBehavior(){};
};

#endif