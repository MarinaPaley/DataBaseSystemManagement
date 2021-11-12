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
	*  \param values Последовательность значений, добавляемых в стек при инициализации.
	*/
	Stack(const std::initializer_list<int> values);

	/**
	 *  \brief Деструктор.
	 */
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
	 * \brief
	 * \return value Целое значение.
	 */
	int Peek() const;

	/**
	*  \brief .
	*  \return .
	*/
	std::size_t GetSize() const;

	bool isEmpty() const;

private:
	/**
   *  \brief Элементы стека для хранения целых чисел.
   */
	class StackElement
	{
	public:
		/**
        *  \brief Конструктор по умолчанию.
        */
		StackElement();

		/**
		*  \brief Конструктор с параметрами.
		*  \param value Целое значение.
		*  \param next
		*/
		StackElement(int value, StackElement* next = nullptr);

		/**
		*  \brief Деструктор.
		*/
		~StackElement();

		int value;
		StackElement* next;
	};

	size_t size;

	StackElement* top;

	Stack(const Stack& rhs);

	void Remove();

	Stack operator= (const Stack& rhs);
};


