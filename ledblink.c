#include <msp430.h>
main()
 {
  long int i=0,j=0;
  P1DIR = 0x40;

  while(1)
	{
	for(i=0;i<15000;i++)
	P1OUT = 0x40;
	for(j=0;j<15000;j++)
	P1OUT = 0x00;
	}
 }
