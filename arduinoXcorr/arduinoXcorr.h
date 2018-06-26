#ifndef ARDUINOXCORR_LIBRARY_H
#define ARDUINOXCORR_LIBRARY_H
#include "Arduino.h"
class arduinoXcorr {
public:

//autoXcorr function for calculation of Auto Correlation with all lag(whole signal).

    double *autoXcorr(double *input, int size, double *output);
//Xcorr function for calculation of correlation with specific lag.
    double *Xcorr(double *input1, int size, double *output,int lag);
//Corr function for calculation of correlation between two data.
    double *Corr(double *input1, double *input2, double *output);
//analogAutoXcorr function for reading analog pin and calculating Auto Correlation.
    double *analogAutoXcorr(int AnalogPin, int size, double *output);
//analogXcorr function for reading analog pin and calculating  Correlation between analog and specific data.
//AnalogCorr function for calculation of correlation between analogData and specific data.
    double *AnalogCorr(int AnalogPin, double *input,int size, double *output);
//
};
#endif