template< class Type>
class Stack
{
private:
	int Size;
	int Last;
	Type *mas;
	public:
		Stack<Type> (int _Size=0)
		{
			Size=_Size;
			mas=new Type[Size];
			Last=0;
			for(int i=0;i<Size;i++)
			{
				mas[i]=0;
			}
		}
		~Stack<Type>()
		{
			delete[] mas;
		}
		Stack<Type> (const Stack<Type> &tmp)
		{
			Size=tmp.Size;
			Last=tmp.Last;
			mas=new Type[Size];
			for(int i=0;i<Size;i++)
			{
				mas[i]=tmp.mas[i];
			}
		}
		int GetSize()
		{
			return Size;
		}
		Type Pop()
		{
			return mas[--Last];
		}
		Type Top()
		{
			return mas[Last-1];
		}
		void Push(Type k)
		{
			mas[Last++]=k;
		}
		Stack<Type> &operator = (const Stack<Type> &tmp)
		{
			if(Size!=tmp.Size)
			{
				if(Size!=0)
				{
					delete[] mas;
				}
				Size=tmp.Size;
				mas= new Type[Size];
			}
			for(int i=0;i<Size;i++)
			{
				mas[i]=tmp.mas[i];
			}
			Last=tmp.Last;
			return *this;
		}
		int isFull()
		{
			if(Last==Size)
			{
				return 1;
			}
			return 0;
		}
		int isEmpty()
		{
			if(Last==0)
			{
				return 1;
			}
			return 0;
		}
};


