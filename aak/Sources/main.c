/* ###################################################################
**     Filename    : main.c
**     Project     : aak
**     Processor   : MC9S08SH8CPJ
**     Version     : Driver 01.12
**     Compiler    : CodeWarrior HCS08 C Compiler
**     Date/Time   : 2015-08-05, 00:27, # CodeGen: 0
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
** @version 01.12
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
#include "Bits1.h"
#include "Bits2.h"
#include "AS1.h"
/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include <math.h>
word p=0,g=0,i=0,j=0,k=0;
word v = 200;
byte err;
byte secuencia[]={0x01,0x03,0x02,0x06,0x04,0x0c,0x08,0x09};
char message[] = "Accion realizada";
char message1[] = "Numero recibido ";
AS1_TComData ch;                                         // TComData type is defined in the AS1.h header file

/* User includes (#include below this line is not maintained by Processor Expert) */

word charanumero(void) {
    word sumOfArgs,a=0,r=0,r1=0,r2=0;
    AS1_TComData ch;
    do{
    	ch=0;
    	err = AS1_RecvChar(&ch);
    	  	    	    switch (ch) { 
    	  	    	    case '0':  //48
    	  	    	    	while(AS1_SendChar((byte)'0') != ERR_OK) {}
    	  	    	    	//if(a==0)r=0;
    	  	    	    	//if(a==1)r1=0;
    	  	    	    	//if(a==2)r2=0;
    	  	    	    	//ch=0;
    	  	    	    	a++;
    	  	    	            break; 
    	  	    	    case '1':  //49
    	  	    	    	while(AS1_SendChar((byte)'1') != ERR_OK) {}
    	  	    	    	if (a==0)r=100;
    	  	    	    	if(a==1)r1=10;
    	  	    	    	if(a==2)r2=1;
    	  	    	    	//ch=1;
    	  	    	    	a++;
    	  	    	            break; 
    	  	    	    case '2': //50
    	  	    	    	while(AS1_SendChar((byte)'2') != ERR_OK) {}
    	  	    	    	if (a==0)r=200;
    	  	    	    	if(a==1)r1=20;
    	  	    	    	if(a==2)r2=2;
    	  	    	    	//ch=2;
    	  	    	    	a++;
    	  	    	            break;
    	  	    	    case '3':  //51
    	  	    	    	while(AS1_SendChar((byte)'3') != ERR_OK) {}
    	  	    	    	if (a==0)r=300;
    	  	    	    	if(a==1)r1=30;
    	  	    	    	if(a==2)r2=3;
    	  	    	    	//ch=3;
    	  	    	    	a++;
    	  	    	    	    break; 
    	  	    	    case '4':  //52
    	  	    	    	while(AS1_SendChar((byte)'4') != ERR_OK) {}
    	  	    	    	if (a==0)r=400;
    	  	    	    	if(a==1)r1=40;
    	  	    	    	if(a==2)r2=4;
   	  	    	    	//ch=4;
    	  	    	    	a++;
    	  	    	            break; 
    	  	    	    case '5': //53
    	  	    	    	while(AS1_SendChar((byte)'5') != ERR_OK) {}
    	  	    	    	if (a==0)r=500;
    	  	    	    	if(a==1)r1=50;
    	  	    	    	if(a==2)r2=5;
    	  	    	    	//ch=5;
    	  	    	    	a++;
    	  	    	            break;
    	  	    	    case '6':  //54
    	  	    	    	while(AS1_SendChar((byte)'6') != ERR_OK) {}
    	  	    	    	if (a==0)r=600;
    	  	    	    	if(a==1)r1=60;
    	  	    	    	if(a==2)r2=6;
    	  	    	    	//ch=6;
    	  	    	    	a++;
    	  	    	            break; 
    	  	    	    case '7':  //55
    	  	    	    	while(AS1_SendChar((byte)'7') != ERR_OK) {}
    	  	    	    	if(a==0)r=700;
    	  	    	    	if(a==1)r1=70;
    	  	    	    	if(a==2)r2=7;
    	  	    	    	//ch=7;
    	  	    	    	a++;
    	  	    	            break; 
    	  	    	    case '8': //56
    	  	    	    	while(AS1_SendChar((byte)'8') != ERR_OK) {}
    	  	    	    	if(a==0)r=800;
    	  	    	    	if(a==1)r1=80;
    	  	    	    	if(a==2)r2=8;
    	  	    	    	//ch=8;
    	  	    	    	a++;
    	  	    	            break;
    	  	    	    case '9': //57
    	  	    	    	while(AS1_SendChar((byte)'9') != ERR_OK) {}
    	  	    	    	if(a==0)r=900;
    	  	    	    	if(a==1)r1=90;
    	  	    	    	if(a==2)r2=9; 
    	  	    	    	//ch=9;
    	  	    	    	a++;
    	  	    	    	   	break;	    	            
    	  	    	    default:
    	  	    	    	//if(a==3){
    	  	    	    	//while(AS1_SendChar((byte)'()') != ERR_OK) {}
    	  	    	    	//}
    	  	    	    	//if(ch<=48 && ch>=57 && ch!=126){
    	  	    	    	//for(i = 0; i < sizeof(message); i++) {
    	  			  	    //while(AS1_SendChar((byte)message1[i]) != ERR_OK) {}   // trying to send a character until the SendChar method returns ERR_OK
    	  			  	   //}
    	  	    	    //	}else{}
    	  	    	    	
    	  	    	             break;
    	  	    	    }
    	  	 }while(a<3);
    //while((err != ERR_OK) && (a<3));
    	 if(a==3){
    	//while(AS1_SendChar((byte)'()') != ERR_OK) {}	 
    	  a=0;
    	  i=0;
    	  sumOfArgs = r+r1+r2;
    	  }
return sumOfArgs;
}

void main(void)
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
  for(;;) { 
	  	  
	  
	  ch = 0;
	    do {                                                   // execute the loop until the character 'e' is received
	      err = AS1_RecvChar(&ch);                             // check if a character is received
	    	  
	  switch (ch) {
	 /* case 'r': //repetir n veces 114
	  		  while(AS1_SendChar((byte)'R') != ERR_OK) {}
	  		  p=charanumero();
	  		  do{
	  				Cpu_Delay100US(v);	
	  				Bits1_PutVal(secuencia[j]);  
	  				Bits2_PutVal(secuencia[k]);
	  				j++;
	  				k++;
	  				i++;
	  				if(j==8)j=0;
	  				if(k==8)k=0;
	  			}
	  			while(i<=p);
	  		  i=0;
	  		//  ch='z';
	  	          break;*/
	  case 'f': //caminar al frente 102
		  while(AS1_SendChar((byte)'F') != ERR_OK) {}
		  p=charanumero();
		  do{
				Cpu_Delay100US(v);	
				Bits1_PutVal(secuencia[j]);  
				Bits2_PutVal(secuencia[k]);
				if(i<p){
				j++;
				k++;
				if(j==8)j=0;
				if(k==8)k=0;
				}				
				i++;
			}
			while(i<=p);
		  	i=0;
			

		//  ch='z';
	          break; 
	  case 'a': //caminar hacia atras 97
		  while(AS1_SendChar((byte)'A') != ERR_OK) {}
		  p=charanumero();
		  do{
		  			Cpu_Delay100US(v);	
		  			Bits1_PutVal(secuencia[j]);  
		  			Bits2_PutVal(secuencia[k]);
		  			if(i<p){
		  			j--;
		  			k--;
		  			if(j==65535)j=7;
		  			if(k==65535)k=7;
		  			}
		  			i++;
		  		}
		  		while(i<=p);
			i=0;
			
			//ch='z';
	          break; 
	  case 'i': //giro manicillas reloj 105
		  while(AS1_SendChar((byte)'I') != ERR_OK) {}
		  g=charanumero();
		  do{
		  		  			Cpu_Delay100US(v);	
		  		  			Bits1_PutVal(secuencia[j]);  
		  		  			Bits2_PutVal(secuencia[k]);
		  		  			if(i<g){
		  		  			j--;
		  		  			k++;
		  		  			if(j==65535)j=7;
		  		  			if(k==8)k=0;
		  		  			}
		  		  			i++;
		  		  		}
		  		while(i<=g);
		  i=0;
		  //ch='z';
	          break;
	  case 'd': //giro en contra de las manecillas de reloj 100
		  while(AS1_SendChar((byte)'D') != ERR_OK) {}
		  g=charanumero();
		  do{
		  		  			Cpu_Delay100US(v);	
		  		  			Bits1_PutVal(secuencia[j]);  
		  		  			Bits2_PutVal(secuencia[k]);
		  		  			if(i<g){
		  		  			j++;
		  		  			k--;
		  		  			if(j==8)j=0;
		  		  			if(k==65535)k=7;		  			
		  		  			}
		  		  			i++;
		  		  		}
		  
		  
		  		while(i<=g);
		i=0;
		//ch='z';
	  	          break;
	  

		  v=charanumero();
		  break;
		  
		  
	  case 'L':
			  	  //f570
			  p=570;
			  		  do{
			  				Cpu_Delay100US(v);	
			  				Bits1_PutVal(secuencia[j]);  
			  				Bits2_PutVal(secuencia[k]);
			  				if(i<p){
			  				j++;
			  				k++;
			  				if(j==8)j=0;
			  				if(k==8)k=0;
			  				}				
			  				i++;
			  			}
			  			while(i<=p);
			  		  	i=0;
			  	  //i090
			  		  g=90;
			  		  		  do{
			  		  		  		  			Cpu_Delay100US(v);	
			  		  		  		  			Bits1_PutVal(secuencia[j]);  
			  		  		  		  			Bits2_PutVal(secuencia[k]);
			  		  		  		  			if(i<g){
			  		  		  		  			j--;
			  		  		  		  			k++;
			  		  		  		  			if(j==65535)j=7;
			  		  		  		  			if(k==8)k=0;
			  		  		  		  			}
			  		  		  		  			i++;
			  		  		  		  		}
			  		  		  		while(i<=g);
			  		  		  i=0;		  	
			  		  	
			  	  //f350
			  		  		p=350;
			  		  				  do{
			  		  						Cpu_Delay100US(v);	
			  		  						Bits1_PutVal(secuencia[j]);  
			  		  						Bits2_PutVal(secuencia[k]);
			  		  						if(i<p){
			  		  						j++;
			  		  						k++;
			  		  						if(j==8)j=0;
			  		  						if(k==8)k=0;
			  		  						}				
			  		  						i++;
			  		  					}
			  		  					while(i<=p);
			  		  				  	i=0;	  		  
			  	  //i090
			  		  				g=90;
			  		  						  do{
			  		  						  		  			Cpu_Delay100US(v);	
			  		  						  		  			Bits1_PutVal(secuencia[j]);  
			  		  						  		  			Bits2_PutVal(secuencia[k]);
			  		  						  		  			if(i<g){
			  		  						  		  			j--;
			  		  						  		  			k++;
			  		  						  		  			if(j==65535)j=7;
			  		  						  		  			if(k==8)k=0;
			  		  						  		  			}
			  		  						  		  			i++;
			  		  						  		  		}
			  		  						  		while(i<=g);
			  		  						  i=0;  				  	
			  	  //f200
			  		  						p=200;
			  		  									  		  do{
			  		  									  				Cpu_Delay100US(v);	
			  		  									  				Bits1_PutVal(secuencia[j]);  
			  		  									  				Bits2_PutVal(secuencia[k]);
			  		  									  				if(i<p){
			  		  									  				j++;
			  		  									  				k++;
			  		  									  				if(j==8)j=0;
			  		  									  				if(k==8)k=0;
			  		  									  				}				
			  		  									  				i++;
			  		  									  			}
			  		  									  			while(i<=p);
			  		  									  		  	i=0;
			  	  //i090
			  		  						g=90;
			  		  								  do{
			  		  								  		  			Cpu_Delay100US(v);	
			  		  								  		  			Bits1_PutVal(secuencia[j]);  
			  		  								  		  			Bits2_PutVal(secuencia[k]);
			  		  								  		  			if(i<g){
			  		  								  		  			j--;
			  		  								  		  			k++;
			  		  								  		  			if(j==65535)j=7;
			  		  								  		  			if(k==8)k=0;
			  		  								  		  			}
			  		  								  		  			i++;
			  		  								  		  		}
			  		  								  		while(i<=g);
			  		  								  i=0;
			  	  //f120
			  		  								p=120;
			  		  											  		  do{
			  		  											  				Cpu_Delay100US(v);	
			  		  											  				Bits1_PutVal(secuencia[j]);  
			  		  											  				Bits2_PutVal(secuencia[k]);
			  		  											  				if(i<p){
			  		  											  				j++;
			  		  											  				k++;
			  		  											  				if(j==8)j=0;
			  		  											  				if(k==8)k=0;
			  		  											  				}				
			  		  											  				i++;
			  		  											  			}
			  		  											  			while(i<=p);
			  		  											  		  	i=0;
			  	  //d090
			  		  											  		g=90;
			  		  											  				  do{
			  		  											  				  		  			Cpu_Delay100US(v);	
			  		  											  				  		  			Bits1_PutVal(secuencia[j]);  
			  		  											  				  		  			Bits2_PutVal(secuencia[k]);
			  		  											  				  		  			if(i<g){
			  		  											  				  		  			j++;
			  		  											  				  		  			k--;
			  		  											  				  		  			if(j==8)j=0;
			  		  											  				  		  			if(k==65535)k=7;		  			
			  		  											  				  		  			}
			  		  											  				  		  			i++;
			  		  											  				  		  		}
			  		  											  				  
			  		  											  				  
			  		  											  				  		while(i<=g);
			  		  											  				i=0;
			  	  //f200
			  		  											  		p=200;
			  		  											  					  		  do{
			  		  											  					  				Cpu_Delay100US(v);	
			  		  											  					  				Bits1_PutVal(secuencia[j]);  
			  		  											  					  				Bits2_PutVal(secuencia[k]);
			  		  											  					  				if(i<p){
			  		  											  					  				j++;
			  		  											  					  				k++;
			  		  											  					  				if(j==8)j=0;
			  		  											  					  				if(k==8)k=0;
			  		  											  					  				}				
			  		  											  					  				i++;
			  		  											  					  			}
			  		  											  					  			while(i<=p);
			  		  											  					  		  	i=0;
			  	  //d090
			  		  											  					  	g=90;
			  		  											  					  			  do{
			  		  											  					  			  		  			Cpu_Delay100US(v);	
			  		  											  					  			  		  			Bits1_PutVal(secuencia[j]);  
			  		  											  					  			  		  			Bits2_PutVal(secuencia[k]);
			  		  											  					  			  		  			if(i<g){
			  		  											  					  			  		  			j++;
			  		  											  					  			  		  			k--;
			  		  											  					  			  		  			if(j==8)j=0;
			  		  											  					  			  		  			if(k==65535)k=7;		  			
			  		  											  					  			  		  			}
			  		  											  					  			  		  			i++;
			  		  											  					  			  		  		}
			  		  											  					  			  
			  		  											  					  			  
			  		  											  					  			  		while(i<=g);
			  		  											  					  			i=0;
			  	  //f500
			  		  											  					  	p=500;
			  		  											  					  				  		  do{
			  		  											  					  				  				Cpu_Delay100US(v);	
			  		  											  					  				  				Bits1_PutVal(secuencia[j]);  
			  		  											  					  				  				Bits2_PutVal(secuencia[k]);
			  		  											  					  				  				if(i<p){
			  		  											  					  				  				j++;
			  		  											  					  				  				k++;
			  		  											  					  				  				if(j==8)j=0;
			  		  											  					  				  				if(k==8)k=0;
			  		  											  					  				  				}				
			  		  											  					  				  				i++;
			  		  											  					  				  			}
			  		  											  					  				  			while(i<=p);
			  		  											  					  				  		  	i=0;
			  	  //i065
			  		  								g=65;
			  		  										  do{
			  		  										  		  			Cpu_Delay100US(v);	
			  		  										  		  			Bits1_PutVal(secuencia[j]);  
			  		  										  		  			Bits2_PutVal(secuencia[k]);
			  		  										  		  			if(i<g){
			  		  										  		  			j--;
			  		  										  		  			k++;
			  		  										  		  			if(j==65535)j=7;
			  		  										  		  			if(k==8)k=0;
			  		  										  		  			}
			  		  										  		  			i++;
			  		  										  		  		}
			  		  										  		while(i<=g);
			  		  										  i=0; 								  
			  	  //a275
			  		  										 p=275;
			  		  												  do{
			  		  												  			Cpu_Delay100US(v);	
			  		  												  			Bits1_PutVal(secuencia[j]);  
			  		  												  			Bits2_PutVal(secuencia[k]);
			  		  												  			if(i<p){
			  		  												  			j--;
			  		  												  			k--;
			  		  												  			if(j==65535)j=7;
			  		  												  			if(k==65535)k=7;
			  		  												  			}
			  		  												  			i++;
			  		  												  		}
			  		  												  		while(i<=p);
			  		  													i=0;
			  	  //i060
			  		  										g=60;
			  		  												  do{
			  		  												  		  			Cpu_Delay100US(v);	
			  		  												  		  			Bits1_PutVal(secuencia[j]);  
			  		  												  		  			Bits2_PutVal(secuencia[k]);
			  		  												  		  			if(i<g){
			  		  												  		  			j--;
			  		  												  		  			k++;
			  		  												  		  			if(j==65535)j=7;
			  		  												  		  			if(k==8)k=0;
			  		  												  		  			}
			  		  												  		  			i++;
			  		  												  		  		}
			  		  												  		while(i<=g);
			  		  												  i=0;  										  
			  	  //a500
			  		  												 p=500;
			  		  														  do{
			  		  														  			Cpu_Delay100US(v);	
			  		  														  			Bits1_PutVal(secuencia[j]);  
			  		  														  			Bits2_PutVal(secuencia[k]);
			  		  														  			if(i<p){
			  		  														  			j--;
			  		  														  			k--;
			  		  														  			if(j==65535)j=7;
			  		  														  			if(k==65535)k=7;
			  		  														  			}
			  		  														  			i++;
			  		  														  		}
			  		  														  		while(i<=p);
			  		  															i=0;
			  
			  break;
	  default:
		  /*if (ch=='z') { 
		  for(i = 0; i < sizeof(message); i++) {
		  	     while(AS1_SendChar((byte)message[i]) != ERR_OK) {}   // trying to send a character until the SendChar method returns ERR_OK
		  	   }    
	           } 
	           else { 
	                
	           }*/ 
	           break;}	  
	    } while((err != ERR_OK) && (ch != 'e'));               // test if the 'e' character was received

	    for(i = 0; i < sizeof(message); i++) {
	    		  	     while(AS1_SendChar((byte)message[i]) != ERR_OK) {}   // trying to send a character until the SendChar method returns ERR_OK
	    		  	   }	    
	    //while(AS1_SendChar((byte)'O') != ERR_OK) {}            // trying to send 'B' until success
	    	    //while(AS1_SendChar((byte)'K') != ERR_OK) {}            
	    	    //while(AS1_SendChar((byte)'E') != ERR_OK) {}
	    	    //convirtiendo los numeros
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
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale HCS08 series of microcontrollers.
**
** ###################################################################
*/
