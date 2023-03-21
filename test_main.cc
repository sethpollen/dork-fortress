#include <ncurses.h>

// Nice walkthrough:
// https://www.sbarjatiya.com/notes_wiki/index.php/Using_ncurses_library_with_C

int main() {
  // Set up ncurses.
  initscr();

  // Enable arrow key input.
  keypad(stdscr, true);

  // Don't echo the user's keystrokes on the screen.
  noecho();

  // Disable line buffering and signals like Ctrl-C. We want to see raw
  // keystrokes from the user.
  raw();

  int rows = 0;
  int cols = 0;
  getmaxyx(stdscr, rows, cols);

  printw("Hello World!");
  refresh();
  getch();
  getch();
  endwin();
  return 0;
}

