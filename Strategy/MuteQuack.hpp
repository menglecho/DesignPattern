#ifndef MuteQuack_hpp
#define MuteQuack_hpp

#include "QuackBehavior.hpp"

class MuteQuack : public QuackBehavior
{
public:
	void quack() const;
};

#endif