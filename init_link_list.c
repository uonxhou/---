#include <stdio.h>
#include <stdlib.h>

// 链表中节点的结构
typedef struct Linklist{
    int elem;
    struct Linklist *next;
}linklist;

// 初始化链表的函数
linklist * initlinklist();

// 用于输出链表的函数
void display(linklist *p);

int main() {
    // 初始化链表(1,2,3,4)
    printf("初始化链表为: \n");
    linklist *p=initlinklist();
    display(p);
    return 0;

}

linklist * initlinklist() {
    linklist *p=NULL;  // 创建头指正
    linklist *temp = (linklist*)malloc(sizeof(linklist));  // 创建首元节点

    // 首元节点先初始化
    temp->elem = 1;
    temp->next = NULL;
    p = temp; // 头指正指向首元节点
    for (int i=2; i<5; i++){
        linklist *a=(linklist *)malloc(sizeof(linklist));
        a->elem=i;
        a->next=NULL;
        temp->next=a;
        temp=temp->next;
    }
    return p;
}

void display(linklist *p){
    linklist* temp=p; //将temp指正重新指向头节点
    // 只要temp指针指向的节点的next不是NULL, 就执行输出语句.
    while (temp){
        printf("%d", temp->elem);
        temp=temp->next;
    }
    printf("\n");
}
