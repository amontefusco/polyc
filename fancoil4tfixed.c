#include <stdio.h>
#include <stdlib.h>     // malloc
#include "fancoil4tfixed.h" 


double regulate_Fancoil4TFixed(Fancoil4TFixed *this)
{
	return output (&(this->Fan1), HIGH);
}

//
// constructor
//
Fancoil4TFixed *
fancoil4TFixed_Create()
{
    Fancoil4TFixed *fc = (Fancoil4TFixed *) malloc(sizeof(Fancoil4TFixed));
    return fc;
}

FancoilInterface * Fancoil4TFixed_interface = &(FancoilInterface) {
    .regulate = (double (*)(void *)) regulate_Fancoil4TFixed
};
