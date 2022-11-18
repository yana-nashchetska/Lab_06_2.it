#include "pch.h" 
#include "CppUnitTest.h" 
#include "../Lab_06_2.it/Lab_06_2.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a[10] = { -1, 3, 0, -24, 45, 6, 7, 8, 9, -10 };
			int t = Min(a, 10);
			Assert::AreEqual(t, -24);

		}
	};
}
