#include "cli.h"
#include "rtspy.h"

#define _print_line_sep (printf("--------------------------------------------------------------\n"))

void process_command() {
}

void print_welcome() {
    _print_line_sep;
    printf("%s-Android/Linux (%s) - by %s\n", PROGRAM_NAME, PROGRAM_VER, PROGRAM_AUTHOR);
    _print_line_sep;
}

