/* to locate the head of the snake */
typedef struct SnakeCoord_
{
    int x;// the location of the head of the snake
    int y;
    int t_x;// the location of the tail of the snake
    int t_y;
    char direct;// 'u':upward; 'd':downward; 'l':leftward; 'r':rightward
    char *player[20];
    int score;
    _Bool alive;
} SnakeCoord;
typedef struct GameModern_
{
    int height;
    int width;
    int difficulty;
    int multiplayer;
} GameModern;

/* Gets keyboard input without blocking other operations */
char GetKeyBoard(void);
/* Set the console font to ensure that the characters are square words of the same length and width */
void ConsoleSettings(void);
