// Pre processing
#include<stdio.h>
#include<stdlib.h>

struct node {
  int iItem;
  int iPriority;
  struct node *link;
}*front = NULLm *read = NULL;

int isEmpty();
int del();
int display();
int insert(int, int);

// Main code to insert, delete and quit the program.
void main() {
  int iChoice, iItem, iPriority;
  while (1) {
    printf("\n1) Insert\n2) Delete\n3) Display\n4) Quit");
    printf("\nWhat do you want to do");
    scanf("%d", &iChoice);

    switch(iChoice) {
			case 1:	printf("\nEnter item to insert in the queue: ");
					scanf("%d",&iItem);
					printf("\nEnter Priority: ");
					scanf("%d",&iPriority);
					insert(iItem, iPriority);
					break;

      case 2: printf("\n%d Deleted from queue", del());
        break;

      case 3: display();
        break;

      case 4: exit(1);

      default: printf("Wrong choice.");

    }
  }
}

// Insert an element into the queue
void insert(int iData, int iPrio) {
  struct node * ptr;
  struct node *temp = (struct node *)malloc(sizeof(struct node));

  if (temp == NULL) {
    printf("\n Not enough memory to allocate\n")
    return;
  }
  temp->iItem = iData;
  temp->iPriority = iPrio;

  if (isEmpty() || iPrio < front->iPriority) {
    temp->link = front;
    front = temp;
  }
  else {
    ptr = front;
    while(ptr->link!=NULL && ptr->link->iPriority <= iPrio) {
      ptr = ptr->link;
    }
    temp->link = ptr->link;
    ptr->link = temp;
  }
}
int del() {
  int iItem;
  struct node *temp;
  if(isEmpty()) {
    // Removing an item from a queue with no elements mean you underflowed.
    printf("\nQueue underflow\n")
  }
  else {
    iItem = front->iItem;
    temp = front;
    front = front->link;
    free(temp);
  }
  return iItem;
}

void display() {
  struct node *ptr;
  if (isEmpty()) {
    printf("\nQueue is empty!!\n");
    return;
  }

  else {
    ptr = front;
    printf("\nQueue: \n");
    printf("Priorty Item\n");
    while(ptr != NULL) {
      printf("   %d\t\t %d\n",ptr->iPriority,ptr->iItem);
      ptr = ptr->link;
    }
  }

  print("\n");
}

int isEmpty() {
  if(front == null)
    return 1;

  else
    return 0;
}
