// TestStack.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Stack.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Stack<int> A;
	Stack<int> B(5);
	int k=0;
	for(int i=0;i<B.GetSize();i++)
	{
		B.Push(k);
		k++;
	}
	A=B;
	while(B.isEmpty()!=1)
	{
		cout<<B.Pop()<<endl;
	}
	while(A.isEmpty()!=1)
	{
		cout<<A.Top()<<endl;
		A.Pop();
	}
	system("pause");
	return 0;
}

