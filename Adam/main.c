//
//  main.c
//  Adam
//
//  Created by Sunny Surdhar on 2015-05-05.
//  Copyright (c) 2015 Sunny Surdhar. All rights reserved.
//

//Adam answers 'Sure' if you ask him a question.
//He answers 'Woah, chill out!' if you yell at him.
//He says 'Fine. Be that way!' if you address him without actually saying anything.
//He answers 'Whatever.' to anything else.

//You will need to be able to take input for from the command line and output a response (check out the scanf() and printf() functions)
//Talking to Adam would use scanf()
//Adam talking to you would use printf()
//Shout would be all in caps
//You will need a way to exit the program e.g. type 'exit' or push return twice.


#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

int main(){
    printf("Say something to Adam\n");
    printf("(Rules: No spaces and no uppercase unless yelling)\n");
    
    char input[150];
    while (1) {
        scanf("%s", input);
        
        int isAllUpperCase = 1;
        for (int i=0; i<strlen(input); i++) {
            if (islower(input[i]))
            {
                // we found a lowercase character so no need to yell
                isAllUpperCase = 0;
                break;
            }
        }
        
        if (isAllUpperCase)
        {
            printf("Woah, chill out!\n");
        }
        else if (strchr(input, '?') != NULL){
            printf("Sure\n");
        }else if (strcasecmp(input, "Adam") == 0){
            printf("Fine. Be that way!\n");
        }else if (strcasecmp(input, "exit") == 0){
            break;
        }else{
            printf("whatever\n");
        }
        
    }
    
    return 0;
}