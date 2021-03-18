#pragma once
#include "EasyGraphics.h"
#include <iterator>

class Window :
    public EasyGraphics
{
public:
    Window();
    ~Window();
protected:
    virtual void onDraw();
    virtual void onCreate();
    virtual void onLButtonDown(UINT nFlags, int x, int y);          // See WM_LBUTTONDOWN in MSDN documentation
private:
    std::vector<int*> buttons;
};

