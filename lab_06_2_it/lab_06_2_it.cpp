#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_06_2(it)/lab_06_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab062it
{
	TEST_CLASS(lab062it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = 0;
			int arr[8] = { 1,3,-4,6,5,-8,-10,7};
			int suma = 0;
			double avg = 0;
			int vsi_i_elementu = 0;
			t = calculate(arr, 8, 0, avg, vsi_i_elementu, suma);
			Assert::AreEqual(t, 2, 1.);

		}
	};
}
