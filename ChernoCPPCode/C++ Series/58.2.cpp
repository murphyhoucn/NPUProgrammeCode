#include <iostream>
#include <vector>

void PrintValue(int value)
{
	std::cout << "Value: " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}
int main()
{
	std::vector<int> values = { 1, 5, 4, 2,3 };
	ForEach(values, PrintValue);  // 函数指针作为函数的参数

	std::cin.get();
}