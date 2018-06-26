# ArduinoXcorr
Cross-Correlation function for Arduino.

This library includes 2 function for calculating auto correlation.


1. autoXcorr(double *input, int size, double *output)

input-----> input data.

size------> if your input data is big array of some specific data and you just want to calculate first 10 or 50 of the you can set size.
            else size should be equal to your input array size.
            
output----> auto correlation data.



2. analogAutoXcorr(int AnalogPin, int size, double *output)

#This Function is usefull when you want to calculate auto correlation of analog pin.

AnalogPin---> arduino pin number for reading analog data.
size--------> number of data you want to get from analog pin.
output------> auto correlation data.
