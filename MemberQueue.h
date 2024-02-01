#pragma once
#include "Manager.h"
#include "MemberQueueNode.h"

class MemberQueue
{
private:
	MemberQueueNode* f; // front
	MemberQueueNode* r; // rear
	int size; // queue size

public:
	MemberQueue();
	~MemberQueue();

	bool empty();
	bool full();
	void push(MemberQueueNode* newNode);
	MemberQueueNode pop();
	MemberQueueNode front();
};