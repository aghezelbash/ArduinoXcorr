#include "arduinoXcorr.h"



double * arduinoXcorr::autoXcorr(double *input, int size, double *output) {


    double temp=0;
    int z=0;
    double y[size];
    for(int i=0;i<size;i++){temp=input[i]+temp;}
    temp=temp/size;
    for(int i=0;i<size;i++){input[i]=input[i]-temp;}


    for(int j=size-1;j>=0;j--){
        // put your setup code here, to run once:
        for(int i=0;i<size;i++){y[i]=input[j]*input[i];}
        for(int i=0;i<size;i++){output[i+z]=output[i+z]+y[i];}
//for(int i=0;i<2*window-1;i++){Serial.print(y[i]);Serial.print('\t');}
//Serial.print('\n');
        z=z+1;
    }
    return(output);


}


double * arduinoXcorr::analogAutoXcorr(int AnalogPin, int size, double *output) {

    double temp=0;
    int z=0;
    double y[size];
    double input[size];
    for(int i=0;i<size;i++){    input[i]=analogRead(AnalogPin);
                                temp=input[i]+temp;}
    temp=temp/size;
    for(int i=0;i<size;i++){input[i]=input[i]-temp;}


    for(int j=size-1;j>=0;j--){
        // put your setup code here, to run once:
        for(int i=0;i<size;i++){y[i]=input[j]*input[i];}
        for(int i=0;i<size;i++){output[i+z]=output[i+z]+y[i];}
//for(int i=0;i<2*window-1;i++){Serial.print(y[i]);Serial.print('\t');}
//Serial.print('\n');
        z=z+1;
    }
    return(output);

}
