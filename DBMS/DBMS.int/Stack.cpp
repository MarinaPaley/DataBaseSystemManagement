#include <algorithm>
#include "Stack.h"

#include <stdexcept>

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

void Stack::Push(const int value)
{
    const auto item = new StackElement(value, this->top);
    this->top = item;
    this->size++;
}

void Stack::Remove()
{
    const auto temp = this->top;

    this->top = top->next;
    this->size--;

    delete temp;
}

int Stack::Pop()
{
    if (this->isEmpty())
    {
        throw std::out_of_range("Collection is empty!");
    }

    const auto value = this->top->value;
    this->Remove();

    return value;
}

int Stack::Peek() const
{
    if (this->isEmpty())
    {
        throw std::out_of_range("Collection is empty!");
    }

    const auto value = this->top->value;

    return value;
}

std::size_t Stack::GetSize() const
{
    return this->size;
}

bool Stack::isEmpty() const
{
    return this->GetSize() == 0;
}

Stack::StackElement::StackElement(const int value, StackElement* next):value(value), next(next)
{

}

Stack::StackElement::~StackElement()
{
    this->next = nullptr;
}
