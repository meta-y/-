#include <iostream>
using namespace std;

void Max_Calculation(int* arr, int* max_arr, int index);	
extern void Return_Max(int& Max, int* arr, int count);

#define SIZE 100											

int main()
{
	while (1)
	{
		int arr[SIZE];
		int Max;
		int count;
		cout << "输入序列长度：" << endl;
		cin >> count;
		if (count > SIZE)
		{
			cout << "超出了序列长度的限制！";
			return -1;
		}
		cout << "输入序列：" << endl;
		for (int i = 0; i < count; i++)
			cin >> arr[i];
		Return_Max(Max, arr, count);
		cout << "最大片段序列和为：" << Max << endl << endl;
	}
	return 0;
}

void Max_Calculation(int* arr, int* max_arr, int index)
{
	if (index == 0)
		max_arr[0] = arr[0];
	else if (max_arr[index - 1] > 0)
		max_arr[index] = max_arr[index - 1] + arr[index];
	else
		max_arr[index] = arr[index];
}

extern void Return_Max(int& Max, int* arr, int count)
{
	Max = INT_MIN;
	int max_arr[SIZE] = { INT_MIN };
	for (int i = 0; i < count; i++)
	{
		Max_Calculation(arr, max_arr, i);
		if (Max < max_arr[i])
			Max = max_arr[i];
	}
	if (Max < 0)
		Max = 0;
}