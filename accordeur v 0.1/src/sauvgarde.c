#ifndef _SAUVGARDE_C
#define _SAUVGARDE_C
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "include/sauvgarde.h"

void sauvgarde(float* _t,float* _sound)             //Fonction sauvagardant les r�sultats dans un fichier
{
    FILE *p;
    int i;
    p = fopen("data.csv", "w");
    for(i=0; i<256; i++)
    {
        fprintf(p,"%f\t%f\n", _t[i], _sound[i]);    //Ne pas oublier le f devant le printf pour �crire dans un fichier
    }
    fclose(p);
}
#endif
