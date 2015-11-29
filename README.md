#include <stdio.h>

// The program will be invoked with one numeric argument, e.g "./eventsimulator 10"
int main (void) { 

	printf("Hello Bangalore!\n");

	// 1. Create a struct to hold information about an "event"
	// An "event" is described by three pieces of information. 
	// a) "timestamp" (When did the event occur? expressed  as "unix time" in nanoseconds since "epoch")
	// b) "type" ( a string of length <= 100 characters)
	// c) "duration" time (time in milliseconds )

	// 2. Create an array of such structs based on count (N) specified via a single command-line argument

	// 3. Populate fake data into such structs 
	//  a) "timestamp" should be monotonically increasing
	//  b) "type" has to be of one of "REQUEST" or "RESPONSE", picked at random
	//  c) "duration" can be any random milliseconds value

	// 4. Print all the events to stdout in format
	//  event 1: 
	// 		timestamp : 19-May-2015 13:01 IST
	//		type : REQUEST
	//		duration : 42 ms
	//  event 2: 
	// 		timestamp: 19-May-2015 13:01 IST
	//		type : 	RESPONSE
	//		duration: 10 ms
	//	[show all N events]

	return 0; 

}
