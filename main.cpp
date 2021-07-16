#include <iostream>
#include "String.h"
#include "Screen.h"
using namespace std;
using namespace string;

//
int main() // Вызов конструктора по умолчанию
{
	Screen c;
		   c.SetWindowName("Homework. String Library");
  String s;
		 s.kbInput(200);
		 s.Show();
  return 0;

//  // P.S  С делегированием конструктора завал. Из всей той кучи всего что я понаписывал в их определениях 
//  //	  Я уже запутался от чего отталкиваться, чтоб в последствии одно с другим работало "В тандеме" 
//  // Однако, в выполнении следующего ДЗ я обязательно их применю. Алгоритм их работы мне понятен ... 
}


//int main() // Вызов конструктора explicit
//{
//	Screen c;
//		   c.SetWindowName("Homework. String Library");
//	String s(10);
//		   s.Show();
//  return 0;
//}

//int main()  // Инициализация строки через пользовательский ввод 
//{
//  Screen c;
//    c.SetWindowName("Homework. String Library");
//  String s;
//	s.kbInput(10);
//	s.Show();
//	
//	return 0;
//}