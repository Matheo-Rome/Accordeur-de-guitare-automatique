#ifndef _CREATE_SOUND_H
#define _CREATE_SOUND_H
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "include/creat_sound.h"
#define M_PI 3.14159265358979323846

float* creat_sound(float* _t, float* _sound)        //Fonction créant la sinusoidale
{
    int F = 440;                                    //Fr�quence du signal
    int i;
    for (i=0; i<256; i++)                           //Cr�ation de la sinusoide
    {
        _sound[i] = sin(2*M_PI*F*_t[i]);            //Sin(2piF*t+phi)
    }
    return 0;
}
#endif
