#ifndef __ACTUATOR_H__
#define __ACTUATOR_H__

#include <stdbool.h>

typedef struct {  } ActuatorInfo;

typedef 
const enum {
	HIGH = 1,
    LOW  = 0,	
} ACT_ACTION;

bool output (ActuatorInfo *pa, ACT_ACTION v);


#endif
