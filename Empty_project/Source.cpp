// ���������
#include <iostream>
// ����������� ������������ ����, � ������� ���� cout<<
using namespace std;

// ������� �������

int main()
{
	/* ��������� ������� ����� 4 ��������� ������� �����
	Escape Sequences � ��������� ����� �� ���������
	������
	*/
	cout << "\t\t\t\tEscape Sequences\n";
	// ������� ������ �������
	cout << "\n";
	/* ����� 2 ��������� ������� ����� \b, � ��� �����
	1 ��������� Backspace ����� \n ��������� ����� ��
	��������� ������
	*/
	cout << "\t\t\\b" << "\tBackspace\n";
	// ������� ������ ������
	cout << "\n";
	/* ����� 2 ��������� ������� ����� \n, � ��� �����
	1 ��������� New line
	����� \n ��������� ����� �� ��������� ������
	*/
	cout << "\t\t\\n" << "\tNew line\n";
	// ������� ������ ������
	cout << "\n";
	/* ����� 2 ��������� ������� ����� \t, � ��� �����
	1 ��������� Horizontal tab ����� \n ���������
	����� �� ��������� ������
	*/
	cout << "\t\t\\t" << "\tHorizontal tab\n";
	// ������� ������ ������
	cout << "\n";
	/* ����� 2 ��������� ������� ����� \\, � ��� �����
1 ��������� Backslash \
����� \n ��������� ����� �� ��������� ������
*/
	cout << "\t\t\\\\" << "\tBackslash \\\n";
	// ������� ������ ������
	cout << "\n";
	/* ����� 2 ��������� ������� ����� \t,
	� ��� ����� 1 ��������� Double quotation mark "
	����� \n ��������� ����� �� ��������� ������
	*/
	cout << "\t\t\"" << "\tDouble quotation mark \"\n";
	// ������� ������ ������
	cout << "\n";
	/* ����� 2 ��������� ������� ����� \',
	� ��� ����� 1 ��������� Single quotation mark '
	����� \n ��������� ����� �� ��������� ������
	*/
	cout << "\t\t\'" << "\tSingle quotation mark \'\n";
	// ������� ������ ������
	cout << "\n";

	for (int i = 0; i < 80; i++)
	{
		cout << '=';
	}
	
	for (int i = 0; i < 80; i++)
	{
		if (i % 8 == 0)
		{
			cout << '|';
		}
		if (i % 10) {
			cout<<
		}
	
	}
	for (int i = 0; i < 80; i++)
	{
		cout << '=';
	}
	return 0;
}
/*
{
	// ����� ������ ������
	cout << "\n";
	// ��������� ������������� ���������
	int DayIn_2000Year = 366;
	int HourInDay = 24;
	// ��������� ������������� ����������
	int HourIn_Year2000;
	// ��������� ������� �������� �
	// �������� ��� � ���������� HourIn_Year2000
	HourIn_Year2000 = DayIn_2000Year * HourInDay;
	// ������� �������� ����������
	// HourIn_Year2000 �� �����
	cout << "\t\t In 2000 year " << HourIn_Year2000;
	cout << " hours\n ";
	return 0;
}

int main()
{
// ��������� ���������� Discount
float Discount=0.05;

// ��������� ����������
Cost float Cost=10.50;
// ��������� ����������
Count int Count=5;
// ��������� ����������
Price float Price;
// ��������� �������� ���������� Price
Price=Count*Cost-Count*Cost*Discount;
// ������� �������� ��������� ������ �� �������
cout<<"Please, pay:"<<Price<<"\n";
return 0;
}
int main()
{
bool Flag;
Flag=true;
// ���� ������ ������ ����������� � ��������� ��������
char Symbol='A';

const char NewLine = '\n';
cout << NewLine // ���������� ������ ������
}
int main()
{
// ��������� ���������� Discount
float Discount=0.05;
// ��������� ���������� Cost
float Cost=10.50;
// ����������� ������ ���� ������
cout<<"What's the cost?\n";
// ���� �������� � ���������� Cost
cin>>Cost;
// ��������� ���������� Count
int Count=5;
// ����������� ������ ����������
cout<<"How much?\n";
// ���� �������� � ���������� Count
cin>>Count;
64
���� � 1
// ��������� ���������� Price
float Price;
// ��������� �������� ���������� Price
Price=Count*Cost-Count*Cost*Discount;
// ������� �������� ��������� ������ �� �������
cout<<"Please, pay:"<<Price<<"\n";
return 0;
}

int main()
{
// ����������� "����� ������!"
cout<<"Let's play!\n";
// ���������� ���������� i
int i;
// ����������� "������� �����"
cout<<"Enter a number:";
65
9. ���� ������
// ���� �����
cin>>i;
// ����� �����, ������� "�������" ���������
cout<<"I have "<<i+1<<"\n";
// ����� ���������� ����
cout<<"I'm winner!\n";
return 0;
}

*/

