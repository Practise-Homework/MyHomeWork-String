#pragma once
namespace string
{
  class String
  {
	private:
		int len=0;
		char *str=nullptr;
	public:
		explicit String(int); // Конструктор explicit, который позволяет явно собирать объект
			static int strbuff(const char *); // Статическая функция-член которая возвращает буфер
			static void cSymbol(char *&); // Подсчитывает каждую встречающейся букву
		void kbInput(int);
		void Show();
		
		/* Этот блок кода ещё в процессе разработки . часть функций рабочая - часть нет.*/
		//int LineSearch(char *&, int, char);
		/*void Copy(const char *, int);
		void Insert(char *&, int, char, int);
		void Delete(char *&, int, char, int);
		void RunTest(int);*/
		String(); // Конструктор по-умолчанию 
		~String();
	};
};