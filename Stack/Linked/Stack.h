//
// Created by charari on 9/17/21.
//

#ifndef DATA_STRUCTURE_STACK_H
#define DATA_STRUCTURE_STACK_H

#include "Common.h"

typedef struct Node
{
    DataType data;
    struct Node *next;
}Node;

typedef struct
{
    Node* top;
    size_t size;
}Stack;

// 栈的初始化
void StackInit(Stack* s);
// 入栈
void StackPush(Stack* s, DataType v);
// 出栈
void StackPop(Stack* s);
// 取栈顶
DataType StackTop(Stack* s);
// 栈大小
size_t StackSize(Stack* s);
// 栈空
bool StackEmpty(Stack* s);
// 栈销毁
void StackDestroy(Stack* s);

#endif //DATA_STRUCTURE_STACK_H
