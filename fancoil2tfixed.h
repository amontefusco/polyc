#ifndef __FANCOIL2TFIXED_H__
#define __FANCOIL2TFIXED_H__


#include "actuator.h"
#include "fancoil.h"

typedef struct
{
    ActuatorInfo Fan1;
    ActuatorInfo Fan2;
    ActuatorInfo Fan3;
    ActuatorInfo Valve;
} Fancoil2TFixed;

double regulate_Fancoil2TFixed(Fancoil2TFixed *this);
//
// constructor
//
Fancoil2TFixed * fancoil2TFixed_Create();

extern FancoilInterface * Fancoil2TFixed_interface;

#endif