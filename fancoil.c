#include <stdio.h>
#include <stdlib.h>     // malloc
#include <string.h>

#include "fancoil.h"
#include "fancoil2tfixed.h"
#include "fancoil4tfixed.h"

GenericFancoil *
genericFancoil_Create(void *instance, FancoilInterface *interface, const char *name)
{
    GenericFancoil *fc = (GenericFancoil *) malloc(sizeof(GenericFancoil));
    fc->instance = instance;
    fc->interface = interface;
	if (!(name && strlen(name) && (fc->name = strdup(name)))) name = strdup("");
    return fc;
}

void
genericFancoil_Destroy(GenericFancoil *fc)
{
    free( fc->instance  );
    free (fc->name);
	fc->name = 0;
}


double
genericFancoil_Regulate(GenericFancoil *fc)
{
    return (fc->interface->regulate)(fc->instance);
}

const char *
genericFancoil_Name(GenericFancoil *fc)
{
    return (fc->interface->name)(fc->instance);
}

