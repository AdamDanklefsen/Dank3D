#pragma once
#include "DankWin.h"

class Window {
private:
	class WindowClass {
	public:
		static const char* GetName() noexcept;
		static HINSTANCE GetInstance() noexcept;
	private:
		WindowClass() noexcept;
		~WindowClass();
		WindowClass(const WindowClass&) = delete; // Copy Constructor
		WindowClass& operator=(const WindowClass&) = delete;
		static constexpr const char* wndClassName = "Dank3D Window";
		static WindowClass wndClass; // Static Instance
		HINSTANCE hInst;
	};

public:
	Window(int w, int h, const char* name) noexcept;
	~Window();
	Window(const Window&) = delete;
	Window& operator=(const Window&) = delete;
private:
	static LRESULT CALLBACK HandleMsgSetup(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;
	static LRESULT CALLBACK HandleMsgThunk(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;
	LRESULT HandleMsg(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;
private:
	int w, h;
	HWND hWnd;
};

