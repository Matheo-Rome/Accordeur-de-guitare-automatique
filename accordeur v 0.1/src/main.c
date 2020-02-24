#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "include/sauvgarde.h"
#include "include/creat_sound.h"

int main()
{
    float t[256];               //Tableau du temps
    float sound[256];           //Tableau des valeurs de la sinusoide en fonction du temps
    int i;
    float Fe = 10000;           //Frequence d'echantillonage (Hz)
    float Im[256];              //Tableaude la partie Imaginaire(nul)
    float output[256];          //Tableau de sortie de la FFT (nul pour l'instant)
    for (i=0; i<256; i++)
    {
        t[i]= i/Fe;
        Im[i]= 0;
        output[i]=0;
    }
    creat_sound(t, sound);
    for(i=0; i<256; i++)
    {
        printf("%f\t%f\n", t[i], sound[i]);
    }
    fflush(stdin);
    sauvgarde(t, sound);
    Sleep(1000);
}
