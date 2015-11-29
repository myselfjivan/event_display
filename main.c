/* 
 * File:   main.c
 * Author: om
 *
 * Created on 29 November, 2015, 12:57 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct Event {
    int event_id;
    char timeStamp[100];
    char type[10];
    int duration;
};

void main(int argc, char* argv[]) {
    int totalEvents, i, j;
    j = 0;
    //take no. of total events
    if(argc > 1){
        totalEvents = atoi(argv[1]);
        printf("%d no. of events will be created\n", totalEvents);
    }
    else{
        printf("please provide an argument");
        exit(0);
    
    }
    // add data to structure depending upon no. of events supplied
    struct Event events[totalEvents];
    
    for(i = 0; i< totalEvents; i++) {
        printf("Event id is set to auto increment\n");
        events[i].event_id = i+1;
        printf("Event time stamp is current time and date\n");
        FILE *f = popen("date", "r");
        while (fgets(events[i].timeStamp, 100, f) != NULL) {
            printf("%s", events[i].timeStamp);
        }
        pclose(f);
        printf("Please specify the type of event\n");
        scanf("%s",&events[i].type);
        printf("Please Enter the duration of event in ms\n");
        scanf("%d",&events[i].duration);
    }
    printf("All the events\n");
    while (j != totalEvents) {
        printf("Event %d\n", j+1);
        printf("\t\tEvent id : %d\n", events[j].event_id);
        printf("\t\ttimestamp : %s\n", events[j].timeStamp);
        printf("\t\ttype : %s\n", events[j].type);
        printf("\t\tduration : %d\n", events[j].duration);
        j++;
    }
}

