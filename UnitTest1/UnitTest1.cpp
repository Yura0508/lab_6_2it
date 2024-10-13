#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_2_it/lab_6_2_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMax)
        {
            int a[10] = { -10, 0, 5, 20, 15, 100, 60, 30, 25, 10 };
            int expected_max = 100;
            int actual_max = Max(a, 10);

            Assert::AreEqual(expected_max, actual_max);
        }

        TEST_METHOD(TestMin)
        {
            int a[10] = { -10, 0, 5, 20, 15, 100, 60, 30, 25, 10 };
            int expected_min = -10;
            int actual_min = Min(a, 10);
            Assert::AreEqual(expected_min, actual_min);
        }
    };
}