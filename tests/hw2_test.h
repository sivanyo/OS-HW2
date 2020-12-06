#ifndef test_hw2_H_
#define test_hw2_H_

#include <sys/types.h>
#include <unistd.h>
#include <sys/syscall.h>

// System call wrappers
int set_weight(int weight);
int get_total_weight();
pid_t get_heaviest_child();

#endif // test_hw2_H_

