/* ###################################################################
**     Filename    : main.c
**     Project     : prac2
**     Processor   : MK20DX128VLH5
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-08-09, 11:19, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "GLED.h"
#include "PwmLdd1.h"
#include "TU1.h"
#include "RLED.h"
#include "PwmLdd2.h"
#include "BLED.h"
#include "PwmLdd3.h"
#include "CI2C1.h"
#include "IntI2cLdd1.h"
#include "Term1.h"
#include "Inhr1.h"
#include "ASerialLdd1.h"
#include "FC321.h"
#include "RealTimeLdd1.h"
#include "TU2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* User includes (#include below this line is not maintained by Processor Expert) */



// initialize the sensor

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
	short int barray[3];
	word dummy=0;
	char startup[2];
	short int x;
	short int y;
	short int z;
	uint16 timeval;
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
    FC321_Reset();
	// initialize the sensor
	startup[0] = 0x2a;
	startup[1] =0x1;
	CI2C1_SendBlock(startup,2,&dummy);
Term1_Cls();
Term1_MoveTo(1,1);
Term1_SendStr("x value:");
Term1_MoveTo(1,2);
Term1_SendStr("y value:");
Term1_MoveTo(1,3);
Term1_SendStr("z value:");
for(;;){
	CI2C1_SendChar(0x01);
	CI2C1_RecvBlock(barray,6,&dummy);
	x=barray[0];
	y=barray[1];
	z=barray[2];
	Term1_MoveTo(10,1);
	Term1_SendNum(x);
	Term1_SendStr("        ");
	Term1_MoveTo(10,2);
	Term1_SendNum(y);
	Term1_SendStr("        ");
	Term1_MoveTo(10,3);
	Term1_SendNum(z);
	Term1_SendStr("        ");
	GLED_SetRatio16(x);
	BLED_SetRatio16(y);
	RLED_SetRatio16(z);
	FC321_Reset();
}
  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
