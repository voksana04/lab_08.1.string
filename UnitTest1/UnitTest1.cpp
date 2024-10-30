#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_8.1.string\Project_8.1.string\lab_8.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		// Тест для функції підрахунку пар "no" або "on"
		TEST_METHOD(TestCount)
		{
			char s1[] = "nonono";
			Assert::AreEqual(3, Count(s1));

			char s2[] = "hello";
			Assert::AreEqual(0, Count(s2));

			char s3[] = "on";
			Assert::AreEqual(1, Count(s3));

			char s4[] = "noxxonnoxon";
			Assert::AreEqual(4, Count(s4));
		}


	};
}
