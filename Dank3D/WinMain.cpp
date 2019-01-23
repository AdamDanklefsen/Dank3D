#include "DankWin.h"
#include "Window.h"


int CALLBACK WinMain(			// CALLBACK - Different way of Calling Functions
	HINSTANCE	hInstance,		// Handle to Current Window Instance
	HINSTANCE	hPrevInstance,	// NULL
	LPSTR		lpCmdLine,		// Command Line Strings
	int			nCmdShow) {		// How Window is Shown on Startup

	Window wnd(800, 600, "Dank3D"); // Create Window

	// Messages
	MSG msg;
	BOOL gResult;
	while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);

	}
	if (gResult == -1) {
		return -1;
	}
	else {
		return msg.wParam;
	}
}