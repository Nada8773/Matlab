/*
 * File: Project_Simulink.c
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

#include "Project_Simulink.h"
#include "Project_Simulink_private.h"
#include "Project_Simulink_dt.h"

/* Block signals (auto storage) */
B_Project_Simulink_T Project_Simulink_B;

/* Block states (auto storage) */
DW_Project_Simulink_T Project_Simulink_DW;

/* Real-time model */
RT_MODEL_Project_Simulink_T Project_Simulink_M_;
RT_MODEL_Project_Simulink_T *const Project_Simulink_M = &Project_Simulink_M_;

/* Model step function */
void Project_Simulink_step(void)
{
  boolean_T rtb_DigitalInput_0;
  boolean_T rtb_DigitalInput2_0;
  int16_T rtb_Out_Const;
  uint8_T tmp;

  /* S-Function (arduinodigitalinput_sfcn): '<Root>/Digital Input' */
  rtb_DigitalInput_0 = MW_digitalRead(Project_Simulink_P.DigitalInput_p1);

  /* S-Function (arduinodigitalinput_sfcn): '<Root>/Digital Input2' */
  rtb_DigitalInput2_0 = MW_digitalRead(Project_Simulink_P.DigitalInput2_p1);

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  S-Function (arduinodigitalinput_sfcn): '<Root>/Digital Input'
   *  S-Function (arduinodigitalinput_sfcn): '<Root>/Digital Input2'
   */
  /*  surface then arduino gets 1 as input  */
  /* and when senses black line arduino gets 0 as input. */
  /* MATLAB Function 'MATLAB Function1': '<S6>:1' */
  /* '<S6>:1:5' if ((Left_Sensor >= 0) && (Middle_Sensor == 1) && (Right_Sensor >= 0)) */
  if (rtb_DigitalInput2_0) {
    /* '<S6>:1:7' elseif ((Left_Sensor >= 0) && (Middle_Sensor >= 0) && (Right_Sensor == 1)) */
    /*  Right */
    /* '<S6>:1:8' Out_Const=3; */
    rtb_Out_Const = 3;
  } else if (rtb_DigitalInput_0) {
    /* '<S6>:1:9' elseif ((Left_Sensor ==1) && (Middle_Sensor >=0) && (Right_Sensor >= 0)) */
    /*  left */
    /* '<S6>:1:10' Out_Const=4; */
    rtb_Out_Const = 4;
  } else {
    /* '<S6>:1:11' else */
    /* '<S6>:1:12' Out_Const=7; */
    rtb_Out_Const = 7;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   */
  /*  Line Follower ******************************* */
  /* MATLAB Function 'MATLAB Function': '<S5>:1' */
  /* '<S5>:1:7' if(const == 6 && Sensor_Const ==1) */
  if ((Project_Simulink_P.Constant_Value == 6.0) && (rtb_Out_Const == 3)) {
    /* '<S5>:1:12' elseif(const == 6 && Sensor_Const ==3) */
    /*  right  */
    /* '<S5>:1:13' Pin1_out=GND; */
    Project_Simulink_B.Pin1_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:14' Pin2_out=VCC; */
    Project_Simulink_B.Pin2_out = Project_Simulink_P.Constant1_Value;

    /* '<S5>:1:15' Pin3_out=GND; */
    Project_Simulink_B.Pin3_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:16' Pin4_out=GND; */
    Project_Simulink_B.Pin4_out = Project_Simulink_P.Constant2_Value;
  } else if ((Project_Simulink_P.Constant_Value == 6.0) && (rtb_Out_Const == 4))
  {
    /* '<S5>:1:17' elseif (const == 6 && Sensor_Const ==4) */
    /* Left */
    /* '<S5>:1:18' Pin1_out=GND; */
    Project_Simulink_B.Pin1_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:19' Pin2_out=GND; */
    Project_Simulink_B.Pin2_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:20' Pin3_out=GND; */
    Project_Simulink_B.Pin3_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:21' Pin4_out=VCC; */
    Project_Simulink_B.Pin4_out = Project_Simulink_P.Constant1_Value;
  } else if (Project_Simulink_P.Constant_Value == 1.0) {
    /* '<S5>:1:22' elseif (const == 1) */
    /* forward */
    /* '<S5>:1:23' Pin1_out=VCC; */
    Project_Simulink_B.Pin1_out = Project_Simulink_P.Constant1_Value;

    /* '<S5>:1:24' Pin2_out=GND; */
    Project_Simulink_B.Pin2_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:25' Pin3_out=VCC; */
    Project_Simulink_B.Pin3_out = Project_Simulink_P.Constant1_Value;

    /* '<S5>:1:26' Pin4_out=GND; */
    Project_Simulink_B.Pin4_out = Project_Simulink_P.Constant2_Value;
  } else if (Project_Simulink_P.Constant_Value == 2.0) {
    /* '<S5>:1:27' elseif (const == 2) */
    /* reverse */
    /* '<S5>:1:28' Pin1_out=GND; */
    Project_Simulink_B.Pin1_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:29' Pin2_out=VCC; */
    Project_Simulink_B.Pin2_out = Project_Simulink_P.Constant1_Value;

    /* '<S5>:1:30' Pin3_out=GND; */
    Project_Simulink_B.Pin3_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:31' Pin4_out=VCC; */
    Project_Simulink_B.Pin4_out = Project_Simulink_P.Constant1_Value;
  } else if (Project_Simulink_P.Constant_Value == 3.0) {
    /* '<S5>:1:32' elseif (const == 3) */
    /* right */
    /* '<S5>:1:33' Pin1_out=GND; */
    Project_Simulink_B.Pin1_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:34' Pin2_out=VCC; */
    Project_Simulink_B.Pin2_out = Project_Simulink_P.Constant1_Value;

    /* '<S5>:1:35' Pin3_out=GND; */
    Project_Simulink_B.Pin3_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:36' Pin4_out=GND; */
    Project_Simulink_B.Pin4_out = Project_Simulink_P.Constant2_Value;
  } else if (Project_Simulink_P.Constant_Value == 4.0) {
    /* '<S5>:1:37' elseif (const == 4) */
    /* Left */
    /* '<S5>:1:38' Pin1_out=GND; */
    Project_Simulink_B.Pin1_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:39' Pin2_out=GND; */
    Project_Simulink_B.Pin2_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:40' Pin3_out=GND; */
    Project_Simulink_B.Pin3_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:41' Pin4_out=VCC; */
    Project_Simulink_B.Pin4_out = Project_Simulink_P.Constant1_Value;
  } else {
    /* '<S5>:1:42' else */
    /* stop */
    /* '<S5>:1:43' Pin1_out=GND; */
    Project_Simulink_B.Pin1_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:44' Pin2_out=GND; */
    Project_Simulink_B.Pin2_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:45' Pin3_out=GND; */
    Project_Simulink_B.Pin3_out = Project_Simulink_P.Constant2_Value;

    /* '<S5>:1:46' Pin4_out=GND; */
    Project_Simulink_B.Pin4_out = Project_Simulink_P.Constant2_Value;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  if (Project_Simulink_B.Pin1_out < 256.0) {
    if (Project_Simulink_B.Pin1_out >= 0.0) {
      tmp = (uint8_T)Project_Simulink_B.Pin1_out;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_digitalWrite(Project_Simulink_P.DigitalOutput_pinNumber, tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  if (Project_Simulink_B.Pin3_out < 256.0) {
    if (Project_Simulink_B.Pin3_out >= 0.0) {
      tmp = (uint8_T)Project_Simulink_B.Pin3_out;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
  MW_digitalWrite(Project_Simulink_P.DigitalOutput_pinNum_igrvltb5jj, tmp);

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  if (Project_Simulink_B.Pin2_out < 256.0) {
    if (Project_Simulink_B.Pin2_out >= 0.0) {
      tmp = (uint8_T)Project_Simulink_B.Pin2_out;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S3>/Digital Output' */
  MW_digitalWrite(Project_Simulink_P.DigitalOutput_pinNum_be11dsugft, tmp);

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  if (Project_Simulink_B.Pin4_out < 256.0) {
    if (Project_Simulink_B.Pin4_out >= 0.0) {
      tmp = (uint8_T)Project_Simulink_B.Pin4_out;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S4>/Digital Output' */
  MW_digitalWrite(Project_Simulink_P.DigitalOutput_pinNum_cegre2zem4, tmp);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [1.0s, 0.0s] */
    rtExtModeUpload(0, Project_Simulink_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [1.0s, 0.0s] */
    if ((rtmGetTFinal(Project_Simulink_M)!=-1) &&
        !((rtmGetTFinal(Project_Simulink_M)-Project_Simulink_M->Timing.taskTime0)
          > Project_Simulink_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Project_Simulink_M, "Simulation finished");
    }

    if (rtmGetStopRequested(Project_Simulink_M)) {
      rtmSetErrorStatus(Project_Simulink_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Project_Simulink_M->Timing.clockTick0)) {
    ++Project_Simulink_M->Timing.clockTickH0;
  }

  Project_Simulink_M->Timing.taskTime0 = Project_Simulink_M->Timing.clockTick0 *
    Project_Simulink_M->Timing.stepSize0 +
    Project_Simulink_M->Timing.clockTickH0 *
    Project_Simulink_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Project_Simulink_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Project_Simulink_M, 0,
                sizeof(RT_MODEL_Project_Simulink_T));
  rtmSetTFinal(Project_Simulink_M, -1);
  Project_Simulink_M->Timing.stepSize0 = 1.0;

  /* External mode info */
  Project_Simulink_M->Sizes.checksums[0] = (2084246023U);
  Project_Simulink_M->Sizes.checksums[1] = (462410784U);
  Project_Simulink_M->Sizes.checksums[2] = (3653520536U);
  Project_Simulink_M->Sizes.checksums[3] = (1245194945U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    Project_Simulink_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Project_Simulink_M->extModeInfo,
      &Project_Simulink_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Project_Simulink_M->extModeInfo,
                        Project_Simulink_M->Sizes.checksums);
    rteiSetTPtr(Project_Simulink_M->extModeInfo, rtmGetTPtr(Project_Simulink_M));
  }

  /* block I/O */
  (void) memset(((void *) &Project_Simulink_B), 0,
                sizeof(B_Project_Simulink_T));

  /* states (dwork) */
  (void) memset((void *)&Project_Simulink_DW, 0,
                sizeof(DW_Project_Simulink_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Project_Simulink_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (arduinodigitalinput_sfcn): '<Root>/Digital Input' */
  MW_pinModeInput(Project_Simulink_P.DigitalInput_p1);

  /* Start for S-Function (arduinodigitalinput_sfcn): '<Root>/Digital Input2' */
  MW_pinModeInput(Project_Simulink_P.DigitalInput2_p1);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_pinModeOutput(Project_Simulink_P.DigitalOutput_pinNumber);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
  MW_pinModeOutput(Project_Simulink_P.DigitalOutput_pinNum_igrvltb5jj);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S3>/Digital Output' */
  MW_pinModeOutput(Project_Simulink_P.DigitalOutput_pinNum_be11dsugft);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S4>/Digital Output' */
  MW_pinModeOutput(Project_Simulink_P.DigitalOutput_pinNum_cegre2zem4);
}

/* Model terminate function */
void Project_Simulink_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
