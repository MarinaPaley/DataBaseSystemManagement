#pragma once
#include <initializer_list>


/**
 *  \brief Класс стек для хранения целых чисел.
 */
class Stack
{
public:
	/**
	*  \brief Конструктор по умолчанию.
	*/
	Stack();

	/**
	*  \brief Создание объекта из последовательности.
	*/
	Stack(std::initializer_list<int> value);

	~Stack();

	/**
	*  \brief Добавляем элемент в стек.
	*  \param value Целое значение.
	*/
	void Push(const int value);

	/**
	*  \brief Удаляем элемент в стек.
	*  \return value Целое значение.
	*/
	int Pop();

	/**
	*  \brief .
	*  \return .
	*/
	std::size_t GetSize() const;

	/**
 *  \brief Элементы стека для хранения целых чисел.
 */
	class StackElement
	{
	public:
		StackElement();

		StackElement(int value);

		~StackElement();

	private:
		int value;
		StackElement* next;
	};

private:
	std::size_t size;
	StackElement element;
};

