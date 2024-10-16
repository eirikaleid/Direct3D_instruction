#include "Window.h"
#include <exception>



int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{

	try {
		Window wnd(300, 300, "Hello");


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
	catch (const std::exception& e) {
		MessageBox(nullptr, e.what(), nullptr, MB_OK | MB_ICONEXCLAMATION);
	}

	
}
