/*
    將兩個變數做XOR
    再算有幾個1即為Hamming distance
*/

int hammingDistance(int x, int y) {
    unsigned int xor = x^y;
    unsigned int dist = 0;
    for(int i=0; i<8*sizeof(unsigned int); i++){
        if(xor & 1) dist++;
        xor >>= 1;
    }
    return dist;
}