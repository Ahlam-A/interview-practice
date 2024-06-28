/*
given an array of unknown size N, and unknown bit values (1s and 0s)
and the following functions:

void write(int addr, bit val);
bit read(int addr);
                                                                                                                                                            
such that val is a binary bit and addr is a cyclic index, 
meaning in an array of size 5, addr=6 is the same as addr=1

write a function that returns N
*/

void write(int addr, int val);
int read(int addr);

int findArraySize(int array[]) {
    // assuming N is greater than 0
    array[0] = 0;

    int i = 0;
    while (array[0] == 0) {
        i++;
        write(i, 1);
    }
    return i;
}