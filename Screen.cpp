#include "Screen.h"

int Screen::SetWindowName(char * name)
{
  return (this->name = SetConsoleTitle(name));
}

int Screen::GetWindowResolution(bool ___width, bool ___height)
{
	Screen screen;
	HANDLE hWndConsole;
	if (hWndConsole = GetStdHandle(-12))
	{
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		if (GetConsoleScreenBufferInfo(hWndConsole, &consoleInfo))
			if (___width == 1)
				return (this->width = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1);
			else if (___height == 1)
				return (this->height = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1);
			else
				return EXIT_SUCCESS;
	}
	else
	{
		std::cerr << "[-Err- Ќе удалось запросить высоту и ширину окна : -Err-]" << GetLastError();
		return EXIT_FAILURE;
	}
}

void Screen::SetTextColor(int text, int background)
{
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

