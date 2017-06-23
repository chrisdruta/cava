#include "common.h"

int init_terminal_noncurses(int col, int bgcol, int w, int h, int bw);
void get_terminal_dim_noncurses(int *w, int *h);
int draw_terminal_noncurses(int virt, int height, int width, int bars, int bw,
	int bs, int rest, int f[FRAMES_BUFFER_SIZE],
	int flastd[FRAMES_BUFFER_SIZE]);
void cleanup_terminal_noncurses(void);
