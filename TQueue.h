#include <iostream>
using namespace std;
class TQueue 
{
protected:
	int *Array;
	int begin = 0;
	int	end=0;
	int count; int size;
	int GetNextIndex(int index);
public:
	TQueue(int _size = 10);
	int IsEmpty();
	int IsFull();
	void InsElem(int Elem);
	int DelElem();
	TQueue(const TQueue &val);
};