#include "mathoperations.h"
#include"QtMath"

double MathOperations::CalculSin(double value, bool inverse)
{
    return inverse?qAsin(value):qSin(value);
}

double MathOperations::CalculCos(double value, bool inverse )
{
    return inverse?qAcos(value):qCos(value);
}

double MathOperations::Calcultan(double value, bool inverse)
{
    return inverse ?qAtan(value):qTan(value);
}
