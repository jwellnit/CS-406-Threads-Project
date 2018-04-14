#ifndef DEVICES_TIMER_H
#define DEVICES_TIMER_H

#include <round.h>
#include <stdint.h>

/* Number of timer interrupts per second. */
#define TIMER_FREQ 100

void timer_init (void);
void timer_calibrate (void);

int64_t timer_ticks (void);
int64_t timer_elapsed (int64_t);

/* Sleep and yield the CPU to other threads. */
void timer_sleep (int64_t ticks);
void timer_msleep (int64_t milliseconds);
void timer_usleep (int64_t microseconds);
void timer_nsleep (int64_t nanoseconds);

/* Busy waits. */
void timer_mdelay (int64_t milliseconds);
void timer_udelay (int64_t microseconds);
void timer_ndelay (int64_t nanoseconds);

void timer_print_stats (void);

/* alarm. */
struct alarm
  {
    struct lock condLock        /* Lock that must be acquired for the condition variable */
    struct condition alarmCond  /* Condition variable to signal waiting threads */
    int64_t start;              /* Start time of the timer */
    int64_t ticks;              /* Duration of the timer */
    struct list_elem elem;      /* elem for alarmList */
  };

  struct list alarmList;

  static bool alarm_first (const struct list_elem *, const struct list_elem *,
                          void *);

#endif /* devices/timer.h */
