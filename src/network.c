// #include "parse_arg.h"

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

void print_help()
{
    printf("-h : print this help message and exit\n"
           "-b : batch size\n"
           "-v : verbose mode (print debug information)\n");
}

void parse_arg(int argc, const char* argv[])
{
    int batch_size;

    opterr = 0;

    while ((c = getopt (argc, argv, "abc:")) != -1)
        switch (c)
        {
        case 'a':
            aflag = 1;
            break;
        case 'b':
            bflag = 1;
            break;
        case 'c':
            cvalue = optarg;
            break;
        case '?':
            if (optopt == 'c')
            fprintf (stderr, "Option -%c requires an argument.\n", optopt);
            else if (isprint (optopt))
            fprintf (stderr, "Unknown option `-%c'.\n", optopt);
            else
            fprintf (stderr,
                    "Unknown option character `\\x%x'.\n",
                    optopt);
            return 1;
        default:
            abort ();
        }

    return 0;
}