#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct node {
int value;
struct node *next;
};
void insert(int);
void display();
typedef struct node DATA_NODE;
DATA_NODE *head_node, *first_node, *temp_node = 0;
int main() {
int loop = 1;
int data;
first_node = 0;
cout << "Singly(Single) Linked List Example Using Functions - Basic(Structure Example)\n";
while (loop) {
cout << "\nEnter Element for Insert Linked List (-1 to Exit ) : \n";
cin>>data;
if (data >= 0) {temp_node->value = data;
if (first_node == 0) {
first_node = temp_node;
} else {
head_node->next = temp_node;
}
head_node = temp_node;
fflush(stdin);
}
void display() 
{
int count = 0;
temp_node = first_node;
cout << "\nDisplay Linked List : \n";
while (temp_node != 0) {
cout << "# " << temp_node->value;
count++;
temp_node = temp_node -> next;
}
cout << "\nNo Of Items In Linked List : %d" << count;
insert(data);
} else {
loop = 0;
temp_node->next = 0;
}
}
display();
return 0;temp_node->value = data;
if (first_node == 0) 
{
}
first_node = temp_node;
} else {
head_node->next = temp_node;
}
head_node = temp_node;
fflush(stdin);
}
void display() {
int count = 0;
temp_node = first_node;
cout << "\nDisplay Linked List : \n";
while (temp_node != 0) {
cout << "# " << temp_node->value;
count++;
temp_node = temp_node -> next;
}
cout << "\nNo Of Items In Linked List:%d"<<count;
