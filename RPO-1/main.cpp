#include <iostream>
#include <cstdlib>

/*
	���� ������

	bool				true/false
	char				'f'		'\t'
	short				32768
	int					214746834
	long				214746834123
	long long			214746834214746834214746834

	float				1234.23452
	double				125463546.123445
	long double			2352456386017458.492685609817049856
	
	unsidned

	���������

	��������������: + - * / = % ++ --
	�������������: < > <= >= != == <=>
	����������:		&&		||		!
					�		���		��
*/


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	std::cout << "Hello world\n";
	
	/*
	
		���_������ ���_����������;

	*/
	
	/*
	double one = 0;
	double two = 0;
	char symbol;

	std::cout << "������� ������ �����: ";
	std::cin >> one;
	std::cout << "������� �������� + - * /	 ";
	std::cin >> symbol;
	std::cout << "������� ������ �����: ";
	std::cin >> two;


	if (symbol == '+')
	{
		std::cout << "�����: " << one + two << "\n";
	}
	else if (symbol == '-')
	{
		std::cout << "��������: " << one - two << "\n";
	}
	else if (symbol == '*')
	{
		std::cout << "���������: " << one * two << "\n";
	}
	else if (symbol == '/' && two != 0)
	{
		std::cout << "�������: " << one / two << "\n";
	}
	else
	{
		std::cout << "Error\n";
	}

	*/

	/*
	
	
	int col = 5, row = 8;
	int countCol = 0, countRow = 0;

	while (countRow < row)
	{
		countCol = 0;

		while (countCol < col)
		{
			std::cout << star << " ";
			countCol++;
		}

		std::cout << "\n";
		countRow++;
	}
	
	*/

	/* 
	do
	{
		std::cout << star << " ";
		a++;

	} while (false);
	*/

	/*
	
		���_������ ���_�������[������_�������];
	
	

	const int size = 6;
	int arr[size]{};
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		std::cout << "������� " << i + 1 << " �����: ";
		std::cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	std::cout << sum;
	*/


	const int size = 10;
	int arr[size]{};
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 29 - 15;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n\n";

	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 0)
		{
			std::cout << arr[i] << " ";
		}
	}
	std::cout << "\n\n";

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			std::cout << arr[i] << " ";
		}
	}


	return 0;
}