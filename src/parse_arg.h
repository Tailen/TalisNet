#ifndef __PARSE_ARG_H__
#define __PARSE_ARG_H__

#include <getopt.h>

static struct option long_options[] =
{
    {"help", no_argument, NULL, 't'},
    {"batch-size", required_argument, NULL, 't'},
    {"artist", required_argument, NULL, 'a'},
    {NULL, 0, NULL, 0}
};

#endif /* __PARSE_ARG_H__ */
