#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define DEFAULT_CHARACTER 'a'

#define MODE_NORMAL 0
#define MODE_INSERT 1

void handle_mode_normal() {
   
}

int main() {
   initscr();
   noecho();

   int ch = DEFAULT_CHARACTER;
   bool *should_quit = (bool*)malloc(sizeof(bool));
   int *mode= (int*)malloc(sizeof(int));

   *should_quit = false;
   *mode = MODE_NORMAL;

   int screen_width, screen_height;
   int cursor_y, cursor_x;

   getmaxyx(stdscr, screen_width, screen_height);
   getyx(stdscr, cursor_y, cursor_x);

   while (!*should_quit) {
      ch = getch();

      switch (*mode) {
         case MODE_NORMAL:
            break;
         default:
            break;
      }

      if (ch == ERR ) {
         printf("Failed to get character from function getch()");
         exit(1);
      }
      // printw("%c", ch);
   }
  
   endwin();
}
