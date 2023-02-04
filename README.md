# geometry dash noclip

external gd noclip... is there anything else to say?
created this because i want it!

## Usage/Examples

```cpp
DWORD processId;

HWND hwnd = FindWindow(NULL, "Geometry Dash");
GetWindowThreadProcessId(hwnd, &processId);
HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processId);

int val = 14315;

while (true) {
WriteProcessMemory(handle, (LPVOID)0x00EAA1DD, &val, 4, NULL);
}
```
