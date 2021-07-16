#include "String.h"
#include "Screen.h"
#include <iostream>
using namespace string;
#pragma region Область определения конструкторов
string::String::String(int count)
{
  Screen get;
	len = count;
	if (len <= 0)
	{
	  get.SetTextColor(12, 0);
		std::cerr << " -- Sorry! Buffer has not created!" << std::endl
			      << "[Recommend: You must to use only positive arguments!]" << std::endl;
		len = -1;
		str = nullptr;
		return;
	}
		str = new char[len];
		  get.SetTextColor(14, 0);
		std::cout << "++ Allocated " << sizeof(char) * len << " bytes for memory" << std::endl
				  << "Entry your string: ";
		std::cin.getline(str, len);
		 // Оптимизация памяти 
	  char *tmp = new char[len];
	  for (size_t i = 0; i < strbuff(str); i++)
	  {
		  if (str != '\0')
		  {
			  tmp[i] = str[i];
		  }
	  }
	  delete str;
		len = this->strbuff(tmp);
	    str = tmp;
		get.SetTextColor(8, 0);
	  std::cout << "++ Reallocated " << sizeof(char) * len << " bytes for default memory "<< std::endl;
}
	 
string::String::String()
{
  Screen get;
   len = 80;
   str = new char[len];
	   get.SetTextColor(10, 0);
	   std::cout << "++ Allocated " << sizeof(char) * len << " bytes for default memory" << std::endl;
 }

#pragma endregion 

#pragma region Область определения методов объекта
int string::String::strbuff(const char *string)
{
  int i = 0;
  while (string[i++]) {}
return i;
}

void string::String::cSymbol(char *&string)
{
  Screen get;
  int i = 0, numbers=0, letter=0;
  while (string[i] != '\0')
  {
	  if ((string[i] >= '0') && (string[i] <= '9999'))
		  numbers++;
	  else if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z'))
		  letter++;
	  i++;
  }
     
	get.SetTextColor(7, 0);
  std::cout << "[I was looking for " << letter << " letters and " << numbers << " digits]" << std::endl;

}

void string::String::kbInput(int size=0)
{
 Screen get;
 char *tmp=nullptr;
	if (str != nullptr || size > 0)
	{
		delete str;
		str = nullptr;
			std::cout << "++ Default memory has been deleted! " << std::endl;
		tmp = new char[size];
			std::cout << "++ Reallocated " << sizeof(char) * size << " bytes has been successfully " << std::endl << std::endl;
	}
	   get.SetTextColor(14, 0);
	    std::cout << "Entry your string: ";
		  std::cin.getline(tmp, size);
		str = new char[this->strbuff(tmp)];

	 for (size_t i = 0; i < this->strbuff(tmp); i++)
	 {
		str[i] = tmp[i];
	 }
		len = this->strbuff(str);
		get.SetTextColor(8, 0);
			std::cout << "++ Reallocated " << sizeof(char) * len << " bytes of memory " << std::endl;
	/*std::cin.get();
	getc(stdin);*/
}

void string::String::Show()
{
	std::cout << "Get your string: " << this->str << std::endl;
}

//int string::String::LineSearch(char *&string,int size, char key)
//{
//  int count = 0;
//  for (int i = 0; i < size; i++)
//  {
//	  if (string[i] == key)
//		  return i;
//}

//void string::String::Print()
//{
//  //Screen get;
//   // get.SetTextColor(11, 0);
//  std::cout << "Get your string: " << str << std::endl;
//}

//void string::String::Copy(const char *string, int size)
//{
//  char *tmp = new char(strbuff(str));
//  int i = 0;
//    while (str[i++] != '\0')
//	 tmp[i] = string[i];
//    i++;
//      delete str;
//      str = tmp;
//   this->Print();
//}
//
//void string::String::Insert(char *&string, int size, char sym, int pos)
//{
//  char *tmp = new char[size + 1];
//  if (pos < strbuff(str))
//  {
//	for (int i = 0; i < pos; i++)
//	{
//	   tmp[i] = string[i];
//	}
//	   tmp[pos] = sym;
//	for (int i = pos; i < this->strbuff(tmp); i++)
//    {
//	   tmp[i + 1] = string[i];
//    }
//  }
//  else
//  {
//	  std::cerr << std::endl << "\a" << "Operations hasn't possible now. I can't looking position" << std::endl;
//  }
//  delete str;
//    tmp[size] = '\0';
//	str = tmp;
//}
//
//void string::String::Delete(char *&string, int size, char sym, int pos)
//{
//  
//}
//
//void string::String::RunTest(int answer)
//{
//   Screen get;
//   int pos = 0;
//		  get.SetTextColor(13, 0);
//   switch (answer)
//   {
//	 case 1:
//		 this->Print();
//	 break;
//	 case 2: 
//		 std::cout << "Full string length is equal " << this->strbuff(this->str) << " symbol";
//	 break;
//	 case 3: 
//		 std::cout << this->cSymbol(this->str);
//	 case 4:
//		 std::cout << "Entry interesting position: ";
//		 std::cin >> pos;
//		 std::cout << LineSearch(str, strbuff(str));
//	  break;
//   }
//}
#pragma endregion

#pragma region Область определения деструктора
string::String::~String()
{
	Screen get;
	if (str != nullptr)
	{
		delete str;
		str = nullptr;
		get.SetTextColor(8, 0);
		std::cout << std::endl << "-- Memory has been cleared ..." << std::endl;
		std::cin.get();
		getc(stdin);
	}
}

#pragma endregion

