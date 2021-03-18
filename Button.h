#pragma once
#include "Window.h"
class Button :
    public Window
{
public:
    Button();
    ~Button();

private:
    std::vector<Button*> buttons;
};

