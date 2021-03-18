#include <Windows.h>
#include <crtdbg.h>
#include "Window.h"

// using std::cout;
// using std::cin;
// using std::endl;

// TODO: Window title

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int show) {
    #ifdef _DEBUG
        _onexit(_CrtDumpMemoryLeaks);    
    #endif

        Window w;
        w.create(hInstance, 900, 600, 100, show);

        w.waitForClose();
        return 0;
}