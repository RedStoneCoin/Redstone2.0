#include <iostream>
#include <vector>

#include "block.h"

int main(){

	cout << "Redstone 2.0 version 0.1 beta system\n\n";
	cout << "Dif = 5\n\n";
 	cout << "Starting...\n\n";

	unsigned difficulty = 5;
	vector<Block> blockChain;
	unsigned blockNumber = 0;

	Block *tempBlock = new Block("Genesis", "0");
	blockChain.push_back(*tempBlock);
	cout << "Attempting to mine Genesis block...\n\n";
	blockChain.at(blockNumber).mineBlock(difficulty);

	cout << "\n\tHash:          " << blockChain.at(blockNumber).hash << "\n\tPrevious Hash: " << blockChain.at(blockNumber).previousHash
	<< "\n\tNonce:         " << blockChain.at(blockNumber).nonce << "\n\tTimeStamp:     " << blockChain.at(blockNumber).timeStamp << "\n\tData:          "
	<< blockChain.at(blockNumber).data;

	blockNumber++;

	while(1){

		Block *nextBlock = new Block("Block " + to_string(blockNumber), blockChain.at(blockNumber-1).hash);
		blockChain.push_back(*nextBlock);\
		cout << "\n\nAttempting to mine next block...\n\n";
		blockChain.at(blockNumber).mineBlock(difficulty);

		cout << "\n\tHash:          " << blockChain.at(blockNumber).hash << "\n\tPrevious Hash: " << blockChain.at(blockNumber).previousHash
		<< "\n\tNonce:         " << blockChain.at(blockNumber).nonce << "\n\tTimeStamp:     " << blockChain.at(blockNumber).timeStamp << "\n\tData:          "
		<< blockChain.at(blockNumber).data;

		unsigned blockTime = blockChain.at(blockNumber).timeStamp - blockChain.at(blockNumber-1).timeStamp;
		cout << "\n\tTime to find:  " << blockTime << " seconds\n\n";
		
		blockNumber++;

		cout << "Imagine data from other blockchain\n\n";
		cout << "Importing Block from other blockchain with imagined data";

		Block *nextBlock = new Block("Block " + to_string(blockNumber), blockChain.at(blockNumber-1).hash);
		blockChain.push_back(*nextBlock);\
		cout << "\n\nAttempting to mine next block...\n\n";
		blockChain.at(blockNumber).mineBlock(difficulty);

		cout << "\n\tHash:          " << blockChain.at(blockNumber).hash << "\n\tPrevious Hash: " << blockChain.at(blockNumber).previousHash
		<< "\n\tNonce:         " << blockChain.at(blockNumber).nonce << "\n\tTimeStamp:     " << blockChain.at(blockNumber).timeStamp << "\n\tData:          "
		<< blockChain.at(blockNumber).data;









	}

	return 0;
}
