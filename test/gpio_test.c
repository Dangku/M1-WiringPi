#include <stdio.h>
#include <wiringPi.h>


#define	LED 30

// m1 26 + 6 pins
static int phy_led[] = {3, 5, 8, 7, 10, 12, 11, 13, 16, 15, 18, 19, 22, 21, 24, 23, 26, 30, 29, 28, 27};

static int wpi_led[] = {8, 9, 15, 7, 16, 1, 0, 2, 4, 3, 5, 12, 6, 13, 10, 14, 11, 24, 23, 22, 21};

int main (void)
{
  int i;
  
  printf ("Banana Pi blink\n") ;

  //wiringPiSetupPhys() ;
  wiringPiSetup();

#if 0
  pinMode (LED, OUTPUT) ;

  for (;;)
  {
    digitalWrite (LED, HIGH) ;	// On
    delay (500) ;		// mS
    digitalWrite (LED, LOW) ;	// Off
    delay (500) ;
  }
#else

 for(;;){
  	for (i=0; i<21; i++){
		pinMode (wpi_led[i], OUTPUT) ;
		digitalWrite (wpi_led[i], HIGH) ;	// On
		delay (200) ;
 	 }

  	for (i=0; i<21; i++){
		pinMode (wpi_led[i], OUTPUT) ;
		digitalWrite (wpi_led[i], LOW) ;	// Off
		delay (200) ;
 	 }
 }

#endif

  return 0 ;
}
