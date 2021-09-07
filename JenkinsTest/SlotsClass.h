#ifndef _SLOTSCLASS_H
#define _SLOTSCLASS_H

#include "boost/signals2.hpp"

class SlotsClass
{
public:
	SlotsClass();
	~SlotsClass();

	void EmitSignal();

public:
	boost::signals2::signal<void()> sig;
};



#endif





