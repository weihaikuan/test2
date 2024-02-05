#ifndef HEADER_FILE
#define HEADER_FILE
#include "setting.h"
#include "functions.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#endif

// define global variable
extern int blocks[100][100];// '-1':None; '-2:wall; '-3':dead; '0':food; '1':snake head; '>1':snake body
extern SnakeCoord *heads;
extern GameModern modern;

int main(void)
{
    ConsoleSettings();
    for (int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 40; j++)
            printf("#");
        printf("\n");
    }
    for (int i = 0; i < 20; i++)
        printf("Hello world, my name is York Wei!\n");
    system("pause");

    return 0;
}
