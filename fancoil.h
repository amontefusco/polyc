#ifndef __FANCOIL_H__
#define __FANCOIL_H__

#include "temperature.h"
#include "actuator.h"

typedef struct {  } SensorInfo;

//
// the FancoilInterface structure exposes all the "virtual" methods of GenericFancoil hierarchy
//
typedef struct fancoil_interface {
    double (*regulate)(void *instance);
	const char *(*name)(void *instance);
} FancoilInterface;

typedef struct {
    void *instance;                     // instance of concrete type
    const FancoilInterface *interface;  // virtual method table
	// common data
	char *name;
} GenericFancoil;


GenericFancoil *genericFancoil_Create(void *instance, FancoilInterface *interface, const char *name);

double genericFancoil_Regulate(GenericFancoil *fc);
const char *genericFancoil_name(GenericFancoil *fc);




// other fancoil concrete types to be implemented


typedef struct
{
    ActuatorInfo Fan;
    ActuatorInfo Valve;
} Fancoil2TInverter;

typedef struct
{
    ActuatorInfo Fan;
    ActuatorInfo Rele;
    ActuatorInfo Valve;
} Fancoil4TInverter;


#endif
