#include<iostream>
using namespace std;
#define MAX 10

int front=-1;
int rear=-1;
int Queue[MAX];

Enqueue(){
    int data;
    cout<<"\nEnter data to be inserted:\t";
    cin>>data;
    if((rear+1)%MAX==front){
        cout<<"\nQueue overflow\n";
    }
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        Queue[rear]= data;
    }
    else{
        rear= (rear+1)%MAX;
        Queue[rear]=data;
    }
}

Dequeue(){
    int del;
    if(front==-1){
        cout<<"\nQueue overflow\n";
    }
    else if(front==rear){
        del= Queue[front];
        front=-1;
        rear=-1;
        cout<<"\n"<<del<<" deleted successfully\n";
    }
    else{
        del= Queue[front];
        front= (front+1)%MAX;
        cout<<"\n"<<del<<" deleted successfully\n";
    }
}


Peek(){
    if(front==-1){
        cout<<"\nQueue is empty ";
    }
    else{
    cout<<"\n Peek value is:" <<Queue[front];
    }
}

display(){
    int temp=front;
    while(temp!=rear){
        cout<<Queue[temp]<<"\t";
        temp= (temp+1)%MAX;
    }
    cout<<Queue[temp]<<"\n";
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

Enter data to be inserted:      12

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      45

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      745

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
12      45      745

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

12 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
45      745

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      98461

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      87879

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      86

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      6451

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      9874

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      63

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      741

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
45      745     98461   87879   86      6451    9874    63      741

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      88

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
45      745     98461   87879   86      6451    9874    63      741     88

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
3

 Peek value is:45
Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      66

Queue overflow

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

45 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
2

745 deleted successfully

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
98461   87879   86      6451    9874    63      741     88

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
1

Enter data to be inserted:      887

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
4
98461   87879   86      6451    9874    63      741     88      887

Press
 0->Exit
 1->Enqueue()
 2->Dequeue()
 3->Peek()
 4->display()
0
98461   87879   86      6451    9874    63      741     88      887
*/
