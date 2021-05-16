/**
 * @file	util.c
 * @brief	C fajl koji sadrzi definicije funkcija util biblioteke
 * @author	Milica Panic
 * @date	05-16-2021
 * @version 1.0
 */
#include "util.h"

void zamena(int *m, int *p)
{
    uint16_t pom = *m;
    *m = *p;
    *p = pom;
}

void Sort(int16_t *array, int16_t array_length, int8_t mode)
{
    int16_t i, j;

    if(mode == 0){
      for (i = 0; i < array_length-1; i++)
       {
        for (j = 0; j < array_length-i-1; j++)
         {
               if (array[j] > array[j+1])
               {
                  zamena(array[j], array[j+1]);
               }
           }
       }
    }
    else if (mode == 1)
    {
        for (i = 0; i < array_length-1; i++)
               {
                   for (j = 0; j < array_length-i-1; j++)
                   {
                       if (array[j] < array[j+1])
                       {
                          zamena(array[j], array[j+1]);
                       }
                   }
               }

    }
}
