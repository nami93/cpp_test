/*
 * OptStack.h
 *
 *  Created on: 2017. ápr. 23.
 *      Author: Miki
 */

#ifndef OPTSTACK_H_
#define OPTSTACK_H_

class OptStack {
	static const int NULL = 0;
	int elementNum;
	int stackSize;
	int * pData;
public:
	OptStack() {elementNum = 0; stackSize = 0; pData = __null;};
	virtual ~OptStack();
};

#endif /* OPTSTACK_H_ */
