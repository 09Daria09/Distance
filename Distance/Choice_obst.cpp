#include "Choice_obst.h"

Wall::Wall()
{
	lenght = 0;
	height = rand() %10;
}

Treadmill::Treadmill()
{
	height = 0;
	lenght = rand() %100;
}
