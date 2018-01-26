#include <stdlib.h>     // malloc
#include "fancoil2tfixed.h" 


double regulate_Fancoil2TFixed(Fancoil2TFixed *this)
{
	return output (&(this->Fan1), HIGH);
}

//
// constructor
//
Fancoil2TFixed *
fancoil2TFixed_Create()
{
    Fancoil2TFixed *fc = (Fancoil2TFixed *) malloc(sizeof(Fancoil2TFixed));
    return fc;
}

FancoilInterface * Fancoil2TFixed_interface = &(FancoilInterface) {
    .regulate = (double (*)(void *)) regulate_Fancoil2TFixed
};
