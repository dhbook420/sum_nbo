[main.c]

use argc, argv to get input files

if argc > 2, which means least one input file exists, define the numver of files and allocate memory dynamically

then, initialize sum that will contains the sum of the values

using for loop to read file and add, and when file is not read able, then exits the process with return.

when all the code is executed, returns.

when returning, free the memory that was allocated dynamically

[utils.c]

read file : open the file with fopen, and read the file with fread

if system cant read file or the size of fole is less then 4 bytes, return 1

if this function returns 1, it means some error has been occurred. return 0 means function has been successfully ended.

use ntohl to change nbo to hbo, which is needed because saving bytes using 'echo' is network byte order



print all : use the values (uint32 pointer array) array with for loop to print all the value with %04x

print " + " (num-1) times, and at the las print " = " and sum to print the sum of the input values


ntohl : used this function which was defined  during the class  
