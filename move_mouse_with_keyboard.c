#include <conio.h>
#define WIN32_LEAN_AND_MEAN // Exclude Extra Windows Crap
#define WIN32_EXTRA_LEAN // Exclude More Windows Crap
#include <windows.h>

void MoveCursorWithKeyboard(void)
{
    POINT p;
    GetCursorPos(&p);
    char c;
    // Use whatever method you need to get the keys
    // getch is just a function that gets the arrow keys so i use it here
    c = getch();
    if(c == 'M') // Right Arrow Key
        p.x += 1;  // Move Cursor Right
    if(c == 'K') // Left Arrow Key
        p.x -= 1;  // Move Cursor Left
    if(c == 'H') // Up Arrow Key
        p.y += 1;  // Move Cursor Up
    if(c == 'P') // Down Arrow KEy
        p.y -= 1;  // Move Cursor Down

    SetCursorPos(p.x,p.y);
}

/*
main()
{
    MoveCursorWithKeyboard();
}

*/
