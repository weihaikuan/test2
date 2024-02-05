char GetKeyBoard(void);// gets keyboard input without blocking other operations
char KeyProcess(char key);// processing input, pause or end or turn
void PrintScreen(void);// print it to the screen
void SnakeMove(void);// regardless of overlap
void SnakeHit(int player_code);// to detect whether the snake hit sth.
void PrintDeath(void);// if dead, stay for a while and print sth.
