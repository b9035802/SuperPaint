#include "Window.h"

Window::Window() {
    setImmediateDrawMode(false);
}

Window::~Window() {

}

void Window::onDraw() {
    clearScreen(YELLOW);

    EasyGraphics::onDraw();
}

void Window::onLButtonDown(UINT nFlags, int x, int y) {
    setPenColour(BLACK, 2);
    setBackColour(BLACK);

    EasyGraphics::onDraw();
}