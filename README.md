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



For test we use test data in matlab and then test arduino nano for output.
input x=[0.81,0.90,0.12,0.91,0.63,0.097 ,0.27,0.54,0.95,0.96];

matlab output: 

[0.0652906900000000,0.159385380000000,-0.0920669299999999,-0.154643240000000,-0.0582784500000001,-0.167933660000000,-0.0752399699999999,-0.276332280000000,0.0620124100000000,1.07561210000000,0.0620124100000000,-0.276332280000000,-0.0752399699999999,-0.167933660000000,-0.0582784500000001,-0.154643240000000,-0.0920669300000000,0.159385380000000,0.0652906900000000]

arduino output:

[0.07,0.16,-0.09,-0.15,-0.06,-0.17,-0.08,-0.28,0.06,1.08,0.06,-0.28,-0.08,-0.17,-0.06,-0.15,-0.09,0.16,0.07]


