#include "pch.h"
#include "CppUnitTest.h"
#include "..\\pr.5.4\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab54
{
	TEST_CLASS(UnitTestLab54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double tmp = S1(0,16);
			Assert::AreEqual(0., tmp);
		}
	};
}
