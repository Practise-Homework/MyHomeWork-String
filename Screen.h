#pragma once
#include <iostream>
#include <Windows.h>
enum ConsoleColor
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

struct Screen
{
 //TextColor color; // ���� ����� ������������
  int width;   // ���� ������ ����
  int height; // ���� ������ ����
  char name; // ���� ����� ����

 /*-------------------------------------------------------------------
 * ------------- [ ������� ������� ��� ��������� ����� ] -------------
 * -------------------------------------------------------------------
 */
 int SetWindowName(char *name);
 int GetWindowResolution(bool ___width = 0, bool ___height = 0); 
  char nameWindow;   // ���������� ���� ������ ����
 void SetTextColor(int text, int background);
};