#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class MemberQueueNode
{
private:
	char name[21]; //Member name
	int age; //Member age
	char infoDate[12]; //Personal information collection date
	char type[2]; //Type of subscription terms and conditions
	
public:
	MemberQueueNode(const char* name, int age, const char* infoDate, const char* type) {
		strcpy(this->name, name);
		this->age = age;
		strcpy(this->infoDate, infoDate);
		strcpy(this->type, type);
	}

	~MemberQueueNode() {}

	const char* get_name() const { return this->name; }
	int get_age() const { return this->age; }
	const char* get_infoDate() const { return infoDate; }
	const char* get_type() const { return this->type; }

	MemberQueueNode* pNext;
};