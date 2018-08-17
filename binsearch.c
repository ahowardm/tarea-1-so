#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "types.h"
#include "const.h"
#include "util.h"
#include <ctype.h>

// TODO: implement
int serial_binsearch() {
    return 0;
}

// TODO: implement
int parallel_binsearch() {
    return 0;
}

int main(int argc, char** argv) {
    /* TODO: move this time measurement to right before the execution of each binsearch algorithms
     * in your experiment code. It now stands here just for demonstrating time measurement. */
    clock_t cbegin = clock();

    printf("[binsearch] Starting up...\n");

    /* Get the number of CPU cores available */
    printf("[binsearch] Number of cores available: '%ld'\n",
           sysconf(_SC_NPROCESSORS_ONLN));

    /* TODO: parse arguments with getopt */
    int eflag = 0;
    int tflag = 0;
    int pflag = 0;
    int c;
    int index = 0;

    int evalue = 0;
    int tvalue = 0;
    int pvalue = 0;

    while((c = getopt(argc, argv, "T:P:E:")) != -1){
      switch(c){
        case 'T':
          tflag = 1;
          tvalue = atoi(optarg);
          break;
        case 'P':
          pflag = 1;
          pvalue = atoi(optarg);
          break;
        case 'E':
          eflag = 1;
          evalue = atoi(optarg);
          break;
        case '?':
          if (optopt == 'E')
            fprintf (stderr, "Option -%c requires an argument.\n", optopt);
          else if (isprint (optopt))
            fprintf (stderr, "Unknown option `-%c'.\n", optopt);
          else
            fprintf (stderr,
                    "Unknown option character `\\x%x'.\n",
                    optopt);
      }
    }
    fprintf(stdout, "eflag: %d, evalue: %d, tflag: %d, tvalue: %d, pflag: %d, pvalue: %d\n", eflag, evalue, tflag, tvalue, pflag, pvalue);
    for (index = optind; index < argc; index++)
      printf ("Non-option argument %s\n", argv[index]);

    /* TODO: start datagen here as a child process. */

    /* TODO: implement code for your experiments using data provided by datagen and your
     * serial and parallel versions of binsearch.
     * */

    /* TODO: connect to datagen and ask for the necessary data in each experiment round.
     * Create a Unix domain socket with DSOCKET_PATH (see const.h).
     * Talk to datagen using the messages specified in the assignment description document.
     * Read the values generated by datagen from the socket and use them to run your
     * experiments
     * */

    /* Probe time elapsed. */
    clock_t cend = clock();

    // Time elapsed in miliseconds.
    double time_elapsed = ((double) (cend - cbegin) / CLOCKS_PER_SEC) * 1000;

    printf("Time elapsed '%lf' [ms].\n", time_elapsed);

    exit(0);
}