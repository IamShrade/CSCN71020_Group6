#include "CppUnitTest.h"
#include "triangleSolver.h"
#include "pch.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TriangleTypeTests
{
    TEST_CLASS(TriangleTypeTestClass)
    {
    public:

        TEST_METHOD(EquilateralTriangle)
        {
            // Purpose: Verify that equal sides return Equilateral
            Assert::AreEqual("Equilateral", analyzeTriangle(5.0, 5.0, 5.0));
        }

        TEST_METHOD(IsoscelesTriangle)
        {
            // Purpose: Verify that exactly two equal sides return Isosceles
            Assert::AreEqual("Isosceles", analyzeTriangle(5.0, 5.0, 3.0));
        }

        TEST_METHOD(ScaleneTriangle)
        {
            // Purpose: Verify that all different valid sides return Scalene
            Assert::AreEqual("Scalene", analyzeTriangle(3.0, 4.0, 5.0));
        }

        TEST_METHOD(NotATriangle)
        {
            // Purpose: Verify that sides that fail triangle inequality return Not a triangle
            Assert::AreEqual("Not a triangle", analyzeTriangle(1.0, 1.0, 3.0));
        }

        TEST_METHOD(ZeroOrNegativeSides)
        {
            // Purpose: Verify that non-positive sides are rejected
            Assert::AreEqual("Not a triangle", analyzeTriangle(0.0, 5.0, 5.0));
        }
    };
}