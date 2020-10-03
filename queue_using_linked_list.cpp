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
        rear->next= NULL;
}

Dequeue(){
    if(front==NULL){
        cout<<"\nQueue is empty\n";
    }
    else{
        Node *temp= front;
        front= front->next;
        cout<<"\n"<<temp->data<<" deleted successfully\n";
        delete(temp);
    }
}

display(){
    Node *temp= front;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp= temp->next;
    }
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
878

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
964

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
9630

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
878     964     9630
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

878 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

964 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
9630
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
40000

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
60300

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
9630    40000   60300
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
3

Peek value is: 9630
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1
9794

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
0
9630    40000   60300   9794
*/
