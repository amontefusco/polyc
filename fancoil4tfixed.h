#ifndef __FANCOIL4TFIXED_H__
#define __FANCOIL4TFIXED_H__


#include "actuator.h"
#include "fancoil.h"

typedef struct
{
    ActuatorInfo Fan1;
    ActuatorInfo Fan2;
    ActuatorInfo Fan3;
    ActuatorInfo ValveHot;
    ActuatorInfo ValveCold;
} Fancoil4TFixed;

double regulate_Fancoil4TFixed(Fancoil4TFixed *this);
//
// constructor
//
Fancoil4TFixed * fancoil4TFixed_Create();

extern FancoilInterface * Fancoil4TFixed_interface;

#endif