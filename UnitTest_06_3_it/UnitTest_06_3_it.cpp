#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_3_it/Lab_06_3_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest063it
{
	TEST_CLASS(UnitTest063it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int x[n] = { 1, 4, 7, 3, 9 };
			int expectation = FindMax(x, n);
			int actual = 9;
			Assert::AreEqual(expectation, actual);
		}
	};
}
