#include<iostream>
using namespace std;
class list
{
public:
	struct node {
		int val;
		node* next;

		node(int i) :val(i), next(nullptr) {};
	};
	int getin(int index)
	{
		node* cur = head;
		while (index--)
			cur = cur->next;
		return cur->val;
	}
	void addhead(int val)
	{
		node* cur = new node(val);
		cur->next = head;
		head = cur;
		size++;

	}
	void addattail(int val)
	{
		node* cur = new node(val);
		node* car = head;
		while (car->next)
		{
			car = car->next;
		}
		car->next = cur;
		size++;

	}
	void addinsert(int val,int index)
	{
		
		node* cur = new node(val);
		node* car = head;
		while (index--)
		{
			car = car->next;
		}
		cur->next = car->next;
		car -> next = cur;



	}
	void deletnode(int index) {
		node* car = head;
		while(index--)
		{
			car = car->next;
		}
		car->next = car->next->next;
		size--;
	}
	int size=0;
	node* head=new node(5);

}l1;

int main()
{
	
		int i;
		cin >> i;
		l1.addhead(6);
		l1.addattail(7);
		l1.addinsert(70,1);
		l1.deletnode(1);
		cout<<l1.head->val<<endl;
		cout<<l1.head->next->val<<endl;
		cout<<l1.head->next->next->val<<endl;

	return 0;
}