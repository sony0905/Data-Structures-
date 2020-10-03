#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};
Node *front=NULL;
Node *rear= NULL;

Enqueue(){
    Node *newNode= new Node();
    cout<"\nEnter data to be inserted:\t";
    cin>>newNode->data;
    if(front==NULL && rear==NULL){
        front= newNode;
    }
    else{
        rear->next= newNode;
    }
        rear= newNode;
        rear->next= front;
}

Dequeue(){
    if(front==NULL){
        cout<<"\nQueue is empty\n";
    }
    else if(front==rear){
        Node *temp= front;
        front= NULL;
        rear= NULL;
        delete(temp);
    }
    else{
        Node *temp= front;
        front= front->next;
        rear->next= front;
        cout<<"\n"<<temp->data<<" deleted successfully\n";
        delete(temp);
    }
}

display(){
    Node *temp= front;
    while(temp->next!=front){
        cout<<temp->data<<"\t";
        temp= temp->next;
    }
    cout<<temp->data<<endl;
}

Peek(){
    if(front==NULL){
        cout<<"\nQueue is empty\n";
    }
    else{
        cout<<"\nPeek value is: "<<front->data;
    }
}

int main(){
    int ch;
    do{
    cout<<"\nPress\n 0->Exit \n 1->Enqueue() \n 2->Dequeue() \n 3->Peek() \n 4->display() \n";
    cin>>ch;
    switch(ch){
        case 0: display();
                break;
        case 1: Enqueue();
                break;
        case 2: Dequeue();
                break;
        case 3: Peek();
                break;
        case 4: display();
                break;
        default: cout<<"Invalid choice\n";
    }
    }while(ch);
}


/*
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
451

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
461

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
5620

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
451     461     5620

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
7820

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

451 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

461 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
5620    7820

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
78520

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
5620    7820    78520

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

5620 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

7820 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

Queue is empty

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
84

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
9663

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
0
84      9663
*/
