#include <stdio.h>
#include <stdlib.h>     // malloc

#include "fancoil.h"
#include "fancoil2tfixed.h"
#include "fancoil4tfixed.h"


int main ()
{
	fprintf (stderr, "Fancoil control demo program\n");
	fflush (stderr);

	// concrete type
	Fancoil2TFixed *pfc2T = fancoil2TFixed_Create();
	Fancoil4TFixed *pfc4T = fancoil4TFixed_Create();
	
	// Wire up the tables.
	GenericFancoil *pF1 = genericFancoil_Create(pfc2T, Fancoil2TFixed_interface, "alfa");
	GenericFancoil *pF2 = genericFancoil_Create(pfc4T, Fancoil4TFixed_interface, "beta");
	
	fprintf (stdout, "%s\n", pF1->name); 
	genericFancoil_Regulate (pF1);
	
	fprintf (stdout, "%s\n", pF2->name);
	genericFancoil_Regulate (pF2);
	
	return 0;
}