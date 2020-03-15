/*
 * File: Project_Simulink_private.h
 *
 * Code generated for Simulink model 'Project_Simulink'.
 *
 * Model version                  : 1.58
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Sun Feb 09 15:02:18 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Project_Simulink_private_h_
#define RTW_HEADER_Project_Simulink_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif
#endif                                 /* RTW_HEADER_Project_Simulink_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
