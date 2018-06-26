/*This is example for arduinoXcorr 
 * https://github.com/aghezelbash/ArduinoXcorr
 * 
 * in this example first define input array and
 * then use arduinoXcorr library for calculating 
 * auto correlation.
 */

#include "arduinoXcorr.h"

#define window 10
//your output array should be bigger than (2*(window size))-1
//output array
double output[2*window];
//input array
double X[window]={0.81,0.90,0.12,0.91,0.63,0.097 ,0.27,0.54,0.95,0.96};

arduinoXcorr cal = arduinoXcorr();

 void setup() {
  Serial.begin(115200);
  //calculate auto correlation.
  cal.autoXcorr(X,10,output);
  //print output data.
  for(int i=0;i<2*window-1;i++){Serial.println(output[i]);}
  }
  void loop() {}
