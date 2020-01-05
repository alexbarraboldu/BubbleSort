#include <iostream>
#include <array>

const short int length = 20000;
typedef std::array<short int, length> int_array;
int_array arr1;

int_array fillArray(int_array _array)
{
	short int ran;
	for (size_t i = 0; i < _array.size(); i++)
	{
		ran = rand() % 20000;
		_array[i] = ran;
	}
	return _array;
}

void printArray(int_array _array)
{
	for (size_t i = 0; i < _array.size(); i++)
	{
		std::cout << _array[i] << ' ';
	}
}

void sortArray(int_array& _array)
{
	short int aux;
	short int ima = -1;
	for (size_t j = 2; j < _array.size(); j++)
	{
		ima++;
		for (size_t i = 0; i < _array.size() - ima; i++)
		{
			if (i == _array.size() - 1) { break; };
			if (_array[i] < _array[i + 1]) { continue; };
			aux = _array[i];
			_array[i] = _array[i + 1];
			_array[i + 1] = aux;
		}
	}
}

int main()
{
	arr1 = fillArray(arr1);
	printArray(arr1);
	std::cout << "\n\n";
	sortArray(arr1);
	std::cout << "\n\n";
	printArray(arr1);
}