#include <Windows.h>
#include <iostream>

int main()
{
    DWORD processId;

    HWND hwnd = FindWindow(NULL, "Geometry Dash");
    GetWindowThreadProcessId(hwnd, &processId);
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processId);

    int val = 14315;

    while (true) {
    WriteProcessMemory(handle, (LPVOID)0x00B4A1DD, &val, 4, NULL);
    }

    return 0;
}
