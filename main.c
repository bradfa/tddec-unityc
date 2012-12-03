/* Build a simple main application that uses LedDriver.{c,h} to show what
   a main build target would look like.  This is not a useful application. */

#include <stdio.h>
#include <stdint.h>
#include "LedDriver.h"

int main()
{
	uint16_t ledsAddress;

	LedDriver_Create(&ledsAddress);
	LedDriver_TurnAllOff();
	LedDriver_TurnOn(3);
	LedDriver_Destroy();
	return 0;
}
