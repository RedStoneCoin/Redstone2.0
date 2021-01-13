#ifndef BLOCK_H_USED
#define BLOCK_H_USED

#define UINT_MAX 0xffffffff;

#include <string>

using namespace std;

class Block {
	
	private:
		


	public:
		Block(string data, string previousHash);
		~Block();

		string calculateHash();
		void mineBlock(unsigned difficulty);

		string hash;
		string previousHash;
		unsigned nonce;
		long timeStamp;
		string data;

};
class Block2 {

	private:



	public:
		Block2(string data, string previousHash);
		~Block2();

		string calculateHash2();
		void mineBlock2(unsigned difficulty);

		string hash2;
		string previousHash2;
		unsigned nonce2;
		long timeStamp2;
		string data2;

};
#endif
