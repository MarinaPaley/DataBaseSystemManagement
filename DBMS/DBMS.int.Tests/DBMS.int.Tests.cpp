#include "pch.h"
#include "CppUnitTest.h"
#include "../DBMS.int/Stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DBMSintTests
{
	TEST_CLASS(DBMSintTests)
	{
	public:
		
		TEST_METHOD(CtorWithoutParams_ValidData_Success)
		{
			// arrange
			
			// act
			const auto result = new Stack();

			// assert
			Assert::IsNotNull(result);
		}
	};
}
