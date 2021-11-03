#include <algorithm>
#include "Stack.h"

Stack::Stack()
    : size(0), top(nullptr)
{
}

Stack::Stack(const std::initializer_list<int> values)
    : Stack()
{
    std::for_each(
        values.begin(),
        values.end(),
        [this](const int value) { this->Push(value); });
}

Stack::~Stack()
{
    while (!this->isEmpty())
    {
        this->Pop();
    }
    
    if (this->top != nullptr)
    {
        delete this->top;
        this->top = nullptr;
    }
}
