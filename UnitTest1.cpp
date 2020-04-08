#include "pch.h"
#include "CppUnitTest.h"
#include "D:\vs项目文件\最大子段和\最大子段和\最大子段和.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern void Return_Max(int& Max, int* arr, int count);

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int true_value = 20;
			int arr[] = { -2,11,-4,13,-5,-2 };
			int test_value;
			Return_Max(test_value, arr, 6);
			Assert::AreEqual(true_value, test_value);
		}
		TEST_METHOD(TestMethod2)
		{
			int true_value = 0;
			int arr[] = { -1,-2,-3,-4,-5 };
			int test_value;
			Return_Max(test_value, arr, 5);
			Assert::AreEqual(true_value, test_value);
		}
		TEST_METHOD(TestMethod3)
		{
			int true_value = 55;
			int arr[] = { 20,25,-10,20,-100 };
			int test_value;
			Return_Max(test_value, arr, 5);
			Assert::AreEqual(true_value, test_value);
		}
		TEST_METHOD(TestMethod4)
		{
			int true_value = 10;
			int arr[] = { 10,-5 };
			int test_value;
			Return_Max(test_value, arr, 2);
			Assert::AreEqual(true_value, test_value);
		}
	};
}
