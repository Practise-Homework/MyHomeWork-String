#pragma once
namespace string
{
  class String
  {
	private:
		int len=0;
		char *str=nullptr;
	public:
		explicit String(int); // ����������� explicit, ������� ��������� ���� �������� ������
			static int strbuff(const char *); // ����������� �������-���� ������� ���������� �����
			static void cSymbol(char *&); // ������������ ������ ������������� �����
		void kbInput(int);
		void Show();
		
		/* ���� ���� ���� ��� � �������� ���������� . ����� ������� ������� - ����� ���.*/
		//int LineSearch(char *&, int, char);
		/*void Copy(const char *, int);
		void Insert(char *&, int, char, int);
		void Delete(char *&, int, char, int);
		void RunTest(int);*/
		String(); // ����������� ��-��������� 
		~String();
	};
};