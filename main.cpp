#include <iostream>
#include "String.h"
#include "Screen.h"
using namespace std;
using namespace string;

//
int main() // ����� ������������ �� ���������
{
	Screen c;
		   c.SetWindowName("Homework. String Library");
  String s;
		 s.kbInput(200);
		 s.Show();
  return 0;

//  // P.S  � �������������� ������������ �����. �� ���� ��� ���� ����� ��� � ����������� � �� ������������ 
//  //	  � ��� ��������� �� ���� �������������, ���� � ����������� ���� � ������ �������� "� �������" 
//  // ������, � ���������� ���������� �� � ����������� �� �������. �������� �� ������ ��� ������� ... 
}


//int main() // ����� ������������ explicit
//{
//	Screen c;
//		   c.SetWindowName("Homework. String Library");
//	String s(10);
//		   s.Show();
//  return 0;
//}

//int main()  // ������������� ������ ����� ���������������� ���� 
//{
//  Screen c;
//    c.SetWindowName("Homework. String Library");
//  String s;
//	s.kbInput(10);
//	s.Show();
//	
//	return 0;
//}