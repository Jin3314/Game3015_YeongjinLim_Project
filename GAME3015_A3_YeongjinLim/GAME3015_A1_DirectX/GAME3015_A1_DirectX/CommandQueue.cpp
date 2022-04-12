#include "CommandQueue.hpp"
#include "SceneNode.hpp"
/**

 *

 * @brief class CommandQue for push commands.

 * @author YeongjinLim

 * @date 2022-03-29

 * @version 0.0.1

 */

void CommandQueue::push(const Command& command)
{
	mQueue.push(command);
}

Command CommandQueue::pop()
{
	Command command = mQueue.front();
	mQueue.pop();
	return command;
}

bool CommandQueue::isEmpty() const
{
	return mQueue.empty();
}


