#include <iostream>
using namespace std;

class Ring{

	friend class Array;

	private:
		int *front;
		int *rear;
	public:
	void write(void)
	{
		int data;
		cout<<"请输入数据:";
		cin>>data;
		cout<<endl;
		ring(data);
	}	
	void read(void)
	{
		
	}
	
};
class Array{
	friend class Ring;

	private:
		int a[10] = {0};
	public:
	Array()
	{
		front = a;
		rear = front;
	}
	void ring(int data)
	{
		for(int i=0; i<10; i++)
		{
			
			if(a[i] == 0)
			{
				a[i] = data;
			}
		}
	}
	void print(int i)
	{
		for(int i=0; i<10; i++)
		{
			cout<<a[i]<<endl;
		}
	}
};

int main(void)
{
	Array a;
	a.;
}
