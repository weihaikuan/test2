#include "setting.h"
#include "functions.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// global variables from main.c
extern int blocks[100][100];
extern SnakeCoord *heads;
extern GameModern modern;

/* Gets keyboard input without blocking other operations */
char GetKeyBoard(void)
{
    char key = 0;
    if (_kbhit())
        key = _getch();
    return key;
}
char KeyProcess(char key)
{
    switch (key)
    {
        case 'p':
        {
            PrintScreen();
            printf("Now you paused the game\nPlease press any key to continue!");
            _getch();
            return key = 0;
        }
        case 'q':
        {
            PrintScreen();
            printf("Are you sure you want to quit the game?\nPress \'q\' again to quit!\nPress any other key to continue!");
            key = _getch();
            return (key == 'q') ? key : (key = 0);
        }
        case 'w':
        {
            heads[0].direct = 'u';
            return key = 0;
        }
        case 's':
        {
            heads[0].direct = 'd';
            return key = 0;
        }
        case 'a':
        {
            heads[0].direct = 'l';
            return key = 0;
        }
        case 'd':
        {
            heads[0].direct = 'r';
            return key = 0;
        }
        default:
        {
            if (modern.multiplayer == 1)
                return key = 0;
            switch (key)
            {
                case 'y':
                {
                    heads[1].direct = 'u';
                    return key = 0;
                }
                case 'h':
                {
                    heads[1].direct = 'd';
                    return key = 0;
                }
                case 'g':
                {
                    heads[1].direct = 'l';
                    return key = 0;
                }
                case 'j':
                {
                    heads[1].direct = 'r';
                    return key = 0;
                }
                default:
                {
                    if (modern.multiplayer == 2)
                        return key = 0;
                    switch (key)
                    {
                        case 'o':
                        {
                            heads[2].direct = 'u';
                            return key = 0;
                        }
                        case 'l':
                        {
                            heads[2].direct = 'd';
                            return key = 0;
                        }
                        case 'k':
                        {
                            heads[2].direct = 'l';
                            return key = 0;
                        }
                        case ';':
                        {
                            heads[2].direct = 'r';
                            return key = 0;
                        }
                    }
                }
            }
        }
    }
}
void PrintScreen(void)
{
    int i, j;
    char difficulties[4][7] = {"Simple", "Normal", "Hard", "Hell"};

    /* first line */
    for (i = 0; i < (modern.width - 16) / 2; i++)
        printf("-");
    printf("Gluttonous Snake");
    for (i = 0; i < (modern.width - 16) / 2; i++)
        printf("-");
    printf("\n");
    printf("Game Version: v0.1.1\n");
    printf("Map Size: %d x %d\n", modern.height, modern.width);
    printf("Game difficulty: %s\n", difficulties[modern.difficulty]);
    printf("Players: ");
    for (i = 0; i < modern.multiplayer; i++)
    {
        printf("%s", heads[i].player);
        if (i == modern.multiplayer - 1)
            printf("\n");
        else
            printf(", ");
    }

    /* print game interface */
    for (i = 0; i < modern.height; i++)
    {
        for (j = 0; j < modern.width; j++)
        {
            switch (blocks[i][j])
            {
                case -2:
                {
                    printf("#");
                    break;
                }
                case -1:
                {
                    break;
                }
                case 0:
                {
                    printf("*");
                    break;
                }
                case 1:
                {
                    printf("@");
                    break;
                }
                default:
                {
                    printf("O");
                    break;
                }
            }
        }
        printf("\n");
    }

    /* print score */
    for (i = 0; i < modern.multiplayer; i++)
    {
        printf("%s: %d", heads[i].player, heads[i].score);
        if (i == modern.multiplayer - 1)
            printf("\n");
        else
            printf(", ");
    }

    /* print key configuration */
}
void SnakeMove(void)
{

}
void SnakeHit(int player_code)
{

}
void PrintDeath(void)
{

}
