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


		TEST_METHOD(CtorWithInitializer_ValidData_Success)
		{
			// arrange
			const size_t expectedSize = 5;

			// act
			Stack result = { 1, 2, 3, 4, 5 };

			// assert
			Assert::AreEqual(expectedSize, result.GetSize());
			Assert::AreEqual(5, result.Pop());
		}

		TEST_METHOD(LeftShiftOperator_IntCollection_SpaceBetweenCurveBraces)
		{
			//Arrange
			const Stack stack = { 1, 2, 3 };
			std::stringstream buffer;
			const std::string expected = "1 2 3";

			//Act
			buffer << stack;

			//Assert
			Assert::AreEqual(expected, buffer.str());
		}
	};
}
