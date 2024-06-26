#pragma once
#include <string>
#include <iostream>

using namespace std;

struct STQNode {
	int questionid;
	STQNode* next;
};

//Queue Structure (FIFO)
class StudentAnswered {
	int size;
	STQNode *front, *rear;

	STQNode* createNewNode(int questionid);
public:
	StudentAnswered();

	/// <summary>
	/// Enqueue a new question id into the queue
	/// </summary>
	/// <param name="questionid"> question id that the student answered or discarded</param>
	void enqueue(int questionid);

	/// <summary>
	/// Dequeue the queue to peek at the next item, 
	/// this function does not return anything, 
	/// couple with peek() function to read the whole queue
	/// </summary>
	void dequeue();

	/// <summary>
	/// Peeking at the front of the queue
	/// </summary>
	/// <returns> Returns a question id node</returns>
	STQNode* peek();

	~StudentAnswered();
};