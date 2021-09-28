#ifndef BENCHMARK_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <sys/time.h>
#include <time.h>

// Seconds
double stopwatch(void (*routine)(void*), void* args);
// Miliseconds
double mstopwatch(void (*routine)(void*), void* args);
// MicroSeconds
double ustopwatch(void (*routine)(void*), void* args);
// Picoseconds
double pstopwatch(void (*routine)(void*), void* args);

#endif // !BENCHMARK_H

// Como usar
/**
 * 
 * void routine(void* args)
 * {
 *      // Your really long routine
 *      sleep(args->seconds);
 * }
 * 
 * ...
 *  long int time = (long int) ustopwatch(routine, &args);
    printf("Elapsed: %ld microseconds\n\n", time);
