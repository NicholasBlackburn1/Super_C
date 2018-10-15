#include <stdio.h>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include "colormod.h"
#include <ncurses.h>
using namespace std;

    unsigned char asciipic_txt[] = {
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x5f,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f,
  0x5f, 0x5f, 0x5f, 0x20, 0x0a, 0x2f, 0x20, 0x5f, 0x5f, 0x5f, 0x7c, 0x7c,
  0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x5f, 0x20, 0x5c, 0x7c,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x7c, 0x20, 0x20, 0x5f, 0x20, 0x5c, 0x20,
  0x20, 0x20, 0x20, 0x2f, 0x20, 0x5f, 0x5f, 0x5f, 0x7c, 0x0a, 0x5c, 0x5f,
  0x5f, 0x5f, 0x20, 0x5c, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20,
  0x7c, 0x5f, 0x29, 0x20, 0x7c, 0x20, 0x20, 0x5f, 0x7c, 0x20, 0x7c, 0x20,
  0x7c, 0x5f, 0x29, 0x20, 0x7c, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x20,
  0x20, 0x20, 0x0a, 0x20, 0x5f, 0x5f, 0x5f, 0x29, 0x20, 0x7c, 0x20, 0x7c,
  0x5f, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x5f, 0x5f, 0x2f, 0x7c, 0x20, 0x7c,
  0x5f, 0x5f, 0x5f, 0x7c, 0x20, 0x20, 0x5f, 0x20, 0x3c, 0x20, 0x20, 0x20,
  0x7c, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x20, 0x0a, 0x7c, 0x5f, 0x5f, 0x5f,
  0x5f, 0x2f, 0x20, 0x5c, 0x5f, 0x5f, 0x5f, 0x2f, 0x7c, 0x5f, 0x7c, 0x20,
  0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x7c, 0x5f, 0x7c, 0x20,
  0x5c, 0x5f, 0x5c, 0x5f, 0x5f, 0x5f, 0x5c, 0x5f, 0x5f, 0x5f, 0x5f, 0x7c,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x0a
};
unsigned int asciipic_txt_len = 246;
// declared funtions 
void mem(); void text(); void ui(); void test(); 

//main funtion
int main()
{
    mem();
    text();
    return 0; 
}

void mem()
{
// added color for logo
  Color::Modifier blue(Color::FG_BLUE);
    Color::Modifier def(Color::FG_DEFAULT);
    cout << blue << asciipic_txt << def << endl;
    // adds space 
    cout<<("\n");

}
void text()
    {  
        // added text color
        Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);
     cout<< green <<"Welcome to Super_C\n"<<def << endl;
      ui();



    }
void ui()
    {

    }


void test()
{
    system("htop");
}