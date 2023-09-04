#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int queue[n];
    int front = 0, rear = 0, ch;
    do
    {
        printf("1.Enqueue 2.Dequeue 3.Print 4.Quit\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                if(rear == n)
                {
                    printf("Queue is full");
                }
                else
                {
                    printf("Enter number to enqueue:\n");
                    scanf("%d", &queue[rear]);
                    rear++;
                }
                break;
            case 2:
                if(front == rear)
                {
                    printf("Queue is empty");
                }
                else
                {
                    printf("%d\n", queue[front]);
                    front++;
                }
                break;
            case 3:
                if(front == rear)
                {
                    printf("Queue is empty\n");
                }
                else
                {
                    printf("Elements of the queue:\n");
                    for(int i = front; i < rear; i++)
                    {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }while(ch != 4);
    return 0;
}
