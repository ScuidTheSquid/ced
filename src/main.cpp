#include <string>
#include <string.h>
#include <iostream>
#include <ncurses.h>
// Author: Paul-Jonas Schnisa
// License: GNU GPL-3.0
// https://github.com/scuidthesquid/ced/

#define INVERTED_TEXT 1

int main(int argc, char *argv[]) {
    if(argc == 1) {
        std::cout << "Please specify a filename!\n";
        return 0;
    }
    std::string filename = argv[1];
    
    char bottom_text[] = "ced editor";
    initscr();
    char bottom_white[COLS];
    memset(bottom_white, 0x20, COLS);
    start_color();
    init_pair(INVERTED_TEXT, COLOR_BLACK, COLOR_WHITE);
    move(LINES-1, 0);
    attron(COLOR_PAIR(INVERTED_TEXT));
    printw(bottom_white);
    move(LINES-1, 0);
    printw(bottom_text);
    attroff(COLOR_PAIR(INVERTED_TEXT));
    refresh();
    getch();
    
    return 0;
}