/*
 * File: Project_Simulink.h
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

#ifndef RTW_HEADER_Project_Simulink_h_
#define RTW_HEADER_Project_Simulink_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef Project_Simulink_COMMON_INCLUDES_
# define Project_Simulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "arduino_digitalinput_lct.h"
#include "arduino_digitaloutput_lct.h"
#endif                                 /* Project_Simulink_COMMON_INCLUDES_ */

#include "Project_Simulink_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Pin1_out;                     /* '<Root>/MATLAB Function' */
  real_T Pin2_out;                     /* '<Root>/MATLAB Function' */
  real_T Pin3_out;                     /* '<Root>/MATLAB Function' */
  real_T Pin4_out;                     /* '<Root>/MATLAB Function' */
} B_Project_Simulink_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData[4];
  } Scope_PWORK;                       /* '<Root>/Scope' */
} DW_Project_Simulink_T;

/* Parameters (auto storage) */
struct P_Project_Simulink_T_ {
  uint32_T DigitalOutput_pinNumber;    /* Mask Parameter: DigitalOutput_pinNumber
                                        * Referenced by: '<S1>/Digital Output'
                                        */
  uint32_T DigitalOutput_pinNum_igrvltb5jj;/* Mask Parameter: DigitalOutput_pinNum_igrvltb5jj
                                            * Referenced by: '<S2>/Digital Output'
                                            */
  uint32_T DigitalOutput_pinNum_be11dsugft;/* Mask Parameter: DigitalOutput_pinNum_be11dsugft
                                            * Referenced by: '<S3>/Digital Output'
                                            */
  uint32_T DigitalOutput_pinNum_cegre2zem4;/* Mask Parameter: DigitalOutput_pinNum_cegre2zem4
                                            * Referenced by: '<S4>/Digital Output'
                                            */
  real_T Constant1_Value;              /* Expression: 5
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 6
                                        * Referenced by: '<Root>/Constant'
                                        */
  uint32_T DigitalInput_p1;            /* Computed Parameter: DigitalInput_p1
                                        * Referenced by: '<Root>/Digital Input'
                                        */
  uint32_T DigitalInput2_p1;           /* Computed Parameter: DigitalInput2_p1
                                        * Referenced by: '<Root>/Digital Input2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Project_Simulink_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Project_Simulink_T Project_Simulink_P;

/* Block signals (auto storage) */
extern B_Project_Simulink_T Project_Simulink_B;

/* Block states (auto storage) */
extern DW_Project_Simulink_T Project_Simulink_DW;

/* Model entry point functions */
extern void Project_Simulink_initialize(void);
extern void Project_Simulink_step(void);
extern void Project_Simulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Project_Simulink_T *const Project_Simulink_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Project_Simulink'
 * '<S1>'   : 'Project_Simulink/Digital Output'
 * '<S2>'   : 'Project_Simulink/Digital Output1'
 * '<S3>'   : 'Project_Simulink/Digital Output2'
 * '<S4>'   : 'Project_Simulink/Digital Output3'
 * '<S5>'   : 'Project_Simulink/MATLAB Function'
 * '<S6>'   : 'Project_Simulink/MATLAB Function1'
 */
#endif                                 /* RTW_HEADER_Project_Simulink_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
