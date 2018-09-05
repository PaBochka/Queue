#include "TQueue.h"
#include <iostream>
using namespace std;
int TQueue::GetNextIndex(int index)
{
	return (++index%size);
}
TQueue::TQueue (int _size )
{
	size = _size;
	begin = end = 0;
	Array = new int[size];
}
int TQueue::IsEmpty()
{
	return (count==0);
}
int TQueue::IsFull()
{
	return (count == size);
}
void TQueue::InsElem(int Elem)
{
	Array[end] = Elem;
	end = GetNextIndex(end);
	count++;
}
int TQueue::DelElem()
{
	int res;
	count--;
	res = Array[begin];
	begin = GetNextIndex(begin);
	return res;
}
TQueue::TQueue(const TQueue &val)
{
	size = val.size;
	begin = val.begin;
	end = val.end;
	Array = new int[size];
	for (int i = 0; i<size; i++)
		Array[i] = val.Array[i];
}