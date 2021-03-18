#include "Window.h"
#include <algorithm>
#include <iterator>

Window::Window() {
    setImmediateDrawMode(false);
}

void deleteButton(Buttons* button) {
    delete button;
}

Window::~Window() {
    for_each(buttons.begin(), buttons.end(), deleteButton);
}

void Window::onCreate() {
    ::SetWindowText(getHWND(), L"Super Paint - A Drawing Tool for Kids!");
    EasyGraphics::onCreate();
}

void Window::onDraw() {
    clearScreen(YELLOW);

    // STL stuff
    std::vector<Button*>::const_iterator i(buttons.begin());
    while (i != buttons.end())
        (*(i++))->draw(this);
 
    EasyGraphics::onDraw();
}

void Window::onLButtonDown(UINT nFlags, int x, int y) { // Does NOT Work
    setPenColour(BLACK, 2);
    setBackColour(BLACK);



    EasyGraphics::onDraw();
}