#include "pch.h"
#include "CppUnitTest.h"

extern "C" void setLength(int, int*);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TEST2
{
	TEST_CLASS(TEST2)
	{
	public:
		
		TEST_METHOD(LenghtFunctionality)
		{
			int userinput = 55;
			int result = 0;
			setLength(userinput,&result);
			Assert::AreEqual(55,result);
		}
	};
}
