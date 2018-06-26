/*This is example for arduinoXcorr 
 * https://github.com/aghezelbash/ArduinoXcorr
 * 
 * in this example arduino get hundered nalog data and
 * then use arduinoXcorr library for calculating 
 * auto correlation.
 */


#include "arduinoXcorr.h"

#define window 100
//your output array should be bigger than (2*(window size))-1
//output array
double output[2*window];
int analogpin=0;
arduinoXcorr cal = arduinoXcorr();

 void setup() {
  Serial.begin(115200);
  //calculate auto correlation.
  cal.analogAutoXcorr(analogpin,window,output);
  //print output data.
  for(int i=0;i<2*window-1;i++){Serial.println(output[i]);}
  }
  void loop(){}
