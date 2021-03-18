#pragma once
#include "EasyGraphics.h"

class Window :
    public EasyGraphics
{
public:
    Window();
    ~Window();
protected:
    virtual void onDraw();
    virtual void onLButtonDown(UINT nFlags, int x, int y);          // See WM_LBUTTONDOWN in MSDN documentation
};

