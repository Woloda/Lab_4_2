#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_4.2/Circle.cpp"
#include "../Lab_4.2/Rectangle.cpp"
#include "../Lab_4.2/Trapeze.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab42
{
	TEST_CLASS(UnitTestLab42)
	{
	public:
		
		TEST_METHOD(Test_Square_Rectangle)
		{
			Rectangle A(4.0, 9.0);
			Assert::AreEqual(A.Square(), 36.0);
		}

		TEST_METHOD(Test_Perimeter_Rectangle)
		{
			Rectangle A(4.0, 7.0);
			Assert::AreEqual(A.Perimeter(), 22.0);
		}

		TEST_METHOD(Test_Perimeter_Trapeze)
		{
			Trapeze A(9.0, 7.0, 8.0, 12.0);
			Assert::AreEqual(A.Perimeter(), 36.0);
		}
	};
}