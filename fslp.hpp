#ifndef __FSLP_HPP__
#define __FSLP_HPP__

#define SENSE_LINE A2
#define DRIVE_LINE_1 8
#define DRIVE_LINE_2 A3
#define BOT_R0 9

int fslpGetPosition();
int fslpGetPressure();
void analogReset();

#endif
