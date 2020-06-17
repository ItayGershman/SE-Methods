#pragma once

#include <windows.h>
#include <vector>
#include <algorithm>
#include "../Control/Control.hpp"
#include "../Graphics/Graphics.hpp"

class EventEngine
{
public:
	EventEngine(DWORD input = STD_INPUT_HANDLE, DWORD output = STD_OUTPUT_HANDLE);
	void run(Control& c);
	virtual ~EventEngine();
private:
	void moveFocus(Control &main, Control *focused);

	Graphics _graphics;
	HANDLE _console;
	DWORD _consoleMode;
};