#include "jenkinsCI.h"

#include "SlotsClass.h"

int main()
{
	JenkinsCI jenkins;

	SlotsClass slot_class;
	slot_class.sig.connect(std::bind(&JenkinsCI::test, jenkins));

	slot_class.EmitSignal();

	return 0;
}
