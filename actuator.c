#include <stdio.h>
#include <stdbool.h>
#include "actuator.h"

bool output (ActuatorInfo *pa, ACT_ACTION v)
{
	printf (">>>>>> Actuator: %d\n", v); 
	return true;
};