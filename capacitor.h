#ifndef CAPACITOR_H
#define CAPACITOR_H

typedef struct
{
  double *time;       // time array
  double *voltage;    // voltage array
  double *current;    // current array
  double C;           // capacitance value
}Capacitor;

#endif
