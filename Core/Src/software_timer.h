
#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

int timer_counter[10];
int timer_flag[10];

void setTimer(int index, int value);
int isTimerExpired(int index);

void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
