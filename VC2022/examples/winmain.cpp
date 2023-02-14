#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int main(int, char**);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{
    return main(0, nullptr);
}