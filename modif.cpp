#include <iostream>
#define MAX_STACK_SIZE 10
using namespace std;

struct Element{
	int top;
    int data;
    float stack[MAX_STACK_SIZE];
    Element *next;
};

class MyStack {
    private:
    Element stack;
    Element *head=NULL;
	

    public:
   	void puncak(){
   		stack.top=-1;
	   }
	   
    bool isEmpty(){
        if(stack.top=-1){
        	return 1;}
        	else return 0;
		}
		
    bool isFull(){
        if(stack.top==MAX_STACK_SIZE-1){
        	return 1;}
        	else return 0;
		}
		
    void push(int databaru){
    	if(!isFull()){
    	Element item;
    	item.data=databaru;
		Element *baru=new Element;
    	baru->data=databaru;
        baru->next=head;
        head=baru;
            cout<<"Data Masuk\n"<<endl;
        } else {
            cout<<"Stack Penuh"<<endl;
        }
    }
    void pop(){
    	Element item;
    	if(!isEmpty()){
    		Element *baru=new Element;
    		baru=head;
			head=head->next;
			delete baru;
			cout<<"Data dipop\n";
            stack.top--;
        } else {
            cout<<"Stack Kosong"<<endl;
        }
    }
    void printStackList(){
    	Element *bantu;
    	bantu=head;
    	
        if (!isEmpty()){
            for(int i=stack.top;i>=0;i--)
                cout<<stack.data<<endl;
        } else {
            cout<<"Stack Kosong"<<endl;
        }
    }
    int getTop(){
        return stack.top;
    }
};

int main()
{
    MyStack s;
    int pil;
	int databaru;
	do{
		cout<<"linked List"<<endl;
		cout<<"-----------"<<endl<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.Top Stack"<<endl;
		cout<<"4.Tampil"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"pilihan anda= ";
		cin>>pil;
		switch(pil){
			case 1:cout<<endl;
			cout<<"data: ";
			cin>>databaru;
			cout<<endl;
			void push(int databaru);break;

			case 2:
			cout<<endl;
			Element pop();
			break;

			case 3:
			cout<<endl;
			int isEmpty();
			if(isEmpty()!=0){
			cout<<s.getTop();
		}else{
			cout<<"Stack kosong";
		}break;
			
			case 4:
			cout<<endl;
			void printStackList();
			break;
			
			default:cout<<"\tpilihan kosong";break;
			
		}
	}
	while (pil!=4);
}
