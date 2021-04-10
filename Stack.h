#pragma once
#include <iostream>
#include <cstdlib>
template <class T>
class Stack
{
	int size, MaxSize;
	T* mas;
public:
	Stack(int _MaxSize = 10)
	{
		if (_MaxSize <= 0)
		{
			throw _MaxSize;
		}
		MaxSize = _MaxSize;
		mas = new T[MaxSize];
		for (int i = 0; i < MaxSize; i++)
		{
			mas[i] = 0;
		}
		size = 0;
	}

	~Stack() 
	{
		size = 0;
		delete[] mas;
	}

	Stack(const Stack <T>& m)
	{
		MaxSize = m.MaxSize;
		mas = new T[MaxSize];
		size = m.size;
		for (int i = 0; i < size; i++)
		{
			mas[i] = m.mas[i];
		}
	}

	Stack& operator=(const Stack <T>& m)
	{
		if (MaxSize != m.MaxSize)
		{
			delete[] mas;
			MaxSize = m.MaxSize;
			mas = new T[MaxSize];
		}
		size = m.size;
		for (int i = 0; i < size; i++)
		{
			mas[i] = m.mas[i];
		}
		return (*this);
	}

	bool Empty() 
	{
		if (size == 0)
		{
			return true;
		}
		else return false;
	}

	bool Full() 
	{
		if (size == MaxSize)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Push(T a) 
	{
		if (Full())
		{
			throw 1;
		}
		mas[size] = a;
		size++;
	}

	T Pop() 
	{
		if (Empty())
		{
			throw 0;
		}
		size--;
		return mas[size];
	}

	T Top() 
	{
		if (Empty())
		{
			throw 0;
		}
		return mas[size - 1];
	}

	void Clear()
	{
		size = 0;
	}
};
