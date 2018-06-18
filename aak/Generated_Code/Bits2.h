/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Bits2.h
**     Project     : aak
**     Processor   : MC9S08SH8CPJ
**     Component   : BitsIO
**     Version     : Component 02.108, Driver 03.28, CPU db: 3.00.067
**     Compiler    : CodeWarrior HCS08 C Compiler
**     Date/Time   : 2018-05-22, 18:50, # CodeGen: 17
**     Abstract    :
**         This component "BitsIO" implements a multi-bit input/output.
**         It uses selected pins of one 1-bit to 8-bit port.
**         Note: This component is set to work in Output direction only.
**     Settings    :
**         Port name                   : PTC
**
**         Bit mask of the port        : $000F
**         Number of bits/pins         : 4
**         Single bit numbers          : 0 to 3
**         Values range                : 0 to 15
**
**         Initial direction           : Output (direction cannot be changed)
**         Initial output value        : 0 = 000H
**         Initial pull option         : off
**
**         Port data register          : PTCD      [$0004]
**         Port control register       : PTCDD     [$0005]
**
**             ----------------------------------------------------
**                   Bit     |   Pin   |   Name
**             ----------------------------------------------------
**                    0      |    12   |   PTC0_TPM1CH0_ADP8
**                    1      |    11   |   PTC1_TPM1CH1_ADP9
**                    2      |    10   |   PTC2_ADP10
**                    3      |    9    |   PTC3_ADP11
**             ----------------------------------------------------
**
**         Optimization for            : speed
**     Contents    :
**         GetDir - bool Bits2_GetDir(void);
**         GetVal - byte Bits2_GetVal(void);
**         PutVal - void Bits2_PutVal(byte Val);
**         GetBit - bool Bits2_GetBit(byte Bit);
**         PutBit - void Bits2_PutBit(byte Bit, bool Val);
**         SetBit - void Bits2_SetBit(byte Bit);
**         ClrBit - void Bits2_ClrBit(byte Bit);
**         NegBit - void Bits2_NegBit(byte Bit);
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Bits2.h
** @version 03.28
** @brief
**         This component "BitsIO" implements a multi-bit input/output.
**         It uses selected pins of one 1-bit to 8-bit port.
**         Note: This component is set to work in Output direction only.
*/         
/*!
**  @addtogroup Bits2_module Bits2 module documentation
**  @{
*/         

#ifndef Bits2_H_
#define Bits2_H_

/* MODULE Bits2. */

  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"


/*
** ===================================================================
**     Method      :  Bits2_GetVal (component BitsIO)
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pins and returns it
**           b) direction = Output : returns the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  : None
**     Returns     :
**         ---        - Input value (0 to 15)
** ===================================================================
*/
byte Bits2_GetVal(void);

/*
** ===================================================================
**     Method      :  Bits2_PutVal (component BitsIO)
**     Description :
**         This method writes the new output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val        - Output value (0 to 15)
**     Returns     : Nothing
** ===================================================================
*/
void Bits2_PutVal(byte Val);

/*
** ===================================================================
**     Method      :  Bits2_GetBit (component BitsIO)
**     Description :
**         This method returns the specified bit of the input value.
**           a) direction = Input  : reads the input value from pins
**                                   and returns the specified bit
**           b) direction = Output : returns the specified bit
**                                   of the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to read (0 to 3)
**     Returns     :
**         ---        - Value of the specified bit (FALSE or TRUE)
**                      FALSE = "0" or "Low", TRUE = "1" or "High"
** ===================================================================
*/
bool Bits2_GetBit(byte Bit);

/*
** ===================================================================
**     Method      :  Bits2_PutBit (component BitsIO)
**     Description :
**         This method writes the new value to the specified bit
**         of the output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit (0 to 3)
**         Val        - New value of the bit (FALSE or TRUE)
**                      FALSE = "0" or "Low", TRUE = "1" or "High"
**     Returns     : Nothing
** ===================================================================
*/
void Bits2_PutBit(byte Bit, bool Val);

/*
** ===================================================================
**     Method      :  Bits2_ClrBit (component BitsIO)
**     Description :
**         This method clears (sets to zero) the specified bit
**         of the output value.
**         [ It is the same as "PutBit(Bit,FALSE);" ]
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to clear (0 to 3)
**     Returns     : Nothing
** ===================================================================
*/
void Bits2_ClrBit(byte Bit);

/*
** ===================================================================
**     Method      :  Bits2_SetBit (component BitsIO)
**     Description :
**         This method sets (sets to one) the specified bit of the
**         output value.
**         [ It is the same as "PutBit(Bit,TRUE);" ]
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to set (0 to 3)
**     Returns     : Nothing
** ===================================================================
*/
void Bits2_SetBit(byte Bit);

/*
** ===================================================================
**     Method      :  Bits2_NegBit (component BitsIO)
**     Description :
**         This method negates (inverts) the specified bit of the
**         output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to invert (0 to 31)
**     Returns     : Nothing
** ===================================================================
*/
void Bits2_NegBit(byte Bit);

/*
** ===================================================================
**     Method      :  Bits2_GetDir (component BitsIO)
**     Description :
**         This method returns direction of the component.
**     Parameters  : None
**     Returns     :
**         ---        - Direction of the component (always <true>, Output only)
**                      <false> = Input, <true> = Output
** ===================================================================
*/
#define Bits2_GetDir() ( \
    (bool)1U                           /* Pins are fixed to GPO mode */ \
  )



/* END Bits2. */
#endif /* #ifndef __Bits2_H_ */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale HCS08 series of microcontrollers.
**
** ###################################################################
*/