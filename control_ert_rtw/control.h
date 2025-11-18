/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control.h
 *
 * Code generated for Simulink model 'control'.
 *
 * Model version                  : 1.31
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Nov 18 17:12:39 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef control_h_
#define control_h_
#ifndef control_COMMON_INCLUDES_
#define control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* control_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE[6];          /* '<S1>/Unit Delay' */
  real_T UnitDelay1_DSTATE[4];         /* '<S1>/Unit Delay1' */
  real_T Filter_DSTATE[6];             /* '<S33>/Filter' */
  real_T Integrator_DSTATE[6];         /* '<S38>/Integrator' */
  real_T v;                            /* '<S3>/MATLAB Function2' */
  int32_T clockTickCounter;            /* '<S1>/Pulse Generator' */
  boolean_T v_not_empty;               /* '<S3>/MATLAB Function2' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T alpha;                        /* '<Root>/alpha' */
  real_T R;                            /* '<Root>/R' */
  real_T actspeed[6];                  /* '<Root>/actspeed' */
  real_T actang[4];                    /* '<Root>/actang' */
  real_T dist2goal;                    /* '<Root>/dist2goal' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T desspeed[6];                  /* '<Root>/desspeed' */
  real_T controlb[6];                  /* '<Root>/controlb' */
  real_T desang[4];                    /* '<Root>/desang' */
  real_T pwnenable[4];                 /* '<Root>/pwnenable' */
  real_T pwmrev[4];                    /* '<Root>/pwmrev' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void control_initialize(void);
extern void control_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('testmodelcode/control')    - opens subsystem testmodelcode/control
 * hilite_system('testmodelcode/control/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'testmodelcode'
 * '<S1>'   : 'testmodelcode/control'
 * '<S2>'   : 'testmodelcode/control/PID Controller'
 * '<S3>'   : 'testmodelcode/control/Subsystem1'
 * '<S4>'   : 'testmodelcode/control/PID Controller/Anti-windup'
 * '<S5>'   : 'testmodelcode/control/PID Controller/D Gain'
 * '<S6>'   : 'testmodelcode/control/PID Controller/External Derivative'
 * '<S7>'   : 'testmodelcode/control/PID Controller/Filter'
 * '<S8>'   : 'testmodelcode/control/PID Controller/Filter ICs'
 * '<S9>'   : 'testmodelcode/control/PID Controller/I Gain'
 * '<S10>'  : 'testmodelcode/control/PID Controller/Ideal P Gain'
 * '<S11>'  : 'testmodelcode/control/PID Controller/Ideal P Gain Fdbk'
 * '<S12>'  : 'testmodelcode/control/PID Controller/Integrator'
 * '<S13>'  : 'testmodelcode/control/PID Controller/Integrator ICs'
 * '<S14>'  : 'testmodelcode/control/PID Controller/N Copy'
 * '<S15>'  : 'testmodelcode/control/PID Controller/N Gain'
 * '<S16>'  : 'testmodelcode/control/PID Controller/P Copy'
 * '<S17>'  : 'testmodelcode/control/PID Controller/Parallel P Gain'
 * '<S18>'  : 'testmodelcode/control/PID Controller/Reset Signal'
 * '<S19>'  : 'testmodelcode/control/PID Controller/Saturation'
 * '<S20>'  : 'testmodelcode/control/PID Controller/Saturation Fdbk'
 * '<S21>'  : 'testmodelcode/control/PID Controller/Sum'
 * '<S22>'  : 'testmodelcode/control/PID Controller/Sum Fdbk'
 * '<S23>'  : 'testmodelcode/control/PID Controller/Tracking Mode'
 * '<S24>'  : 'testmodelcode/control/PID Controller/Tracking Mode Sum'
 * '<S25>'  : 'testmodelcode/control/PID Controller/Tsamp - Integral'
 * '<S26>'  : 'testmodelcode/control/PID Controller/Tsamp - Ngain'
 * '<S27>'  : 'testmodelcode/control/PID Controller/postSat Signal'
 * '<S28>'  : 'testmodelcode/control/PID Controller/preInt Signal'
 * '<S29>'  : 'testmodelcode/control/PID Controller/preSat Signal'
 * '<S30>'  : 'testmodelcode/control/PID Controller/Anti-windup/Passthrough'
 * '<S31>'  : 'testmodelcode/control/PID Controller/D Gain/Internal Parameters'
 * '<S32>'  : 'testmodelcode/control/PID Controller/External Derivative/Error'
 * '<S33>'  : 'testmodelcode/control/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S34>'  : 'testmodelcode/control/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S35>'  : 'testmodelcode/control/PID Controller/I Gain/Internal Parameters'
 * '<S36>'  : 'testmodelcode/control/PID Controller/Ideal P Gain/Passthrough'
 * '<S37>'  : 'testmodelcode/control/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S38>'  : 'testmodelcode/control/PID Controller/Integrator/Discrete'
 * '<S39>'  : 'testmodelcode/control/PID Controller/Integrator ICs/Internal IC'
 * '<S40>'  : 'testmodelcode/control/PID Controller/N Copy/Disabled'
 * '<S41>'  : 'testmodelcode/control/PID Controller/N Gain/Internal Parameters'
 * '<S42>'  : 'testmodelcode/control/PID Controller/P Copy/Disabled'
 * '<S43>'  : 'testmodelcode/control/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S44>'  : 'testmodelcode/control/PID Controller/Reset Signal/Disabled'
 * '<S45>'  : 'testmodelcode/control/PID Controller/Saturation/Passthrough'
 * '<S46>'  : 'testmodelcode/control/PID Controller/Saturation Fdbk/Disabled'
 * '<S47>'  : 'testmodelcode/control/PID Controller/Sum/Sum_PID'
 * '<S48>'  : 'testmodelcode/control/PID Controller/Sum Fdbk/Disabled'
 * '<S49>'  : 'testmodelcode/control/PID Controller/Tracking Mode/Disabled'
 * '<S50>'  : 'testmodelcode/control/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S51>'  : 'testmodelcode/control/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S52>'  : 'testmodelcode/control/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S53>'  : 'testmodelcode/control/PID Controller/postSat Signal/Forward_Path'
 * '<S54>'  : 'testmodelcode/control/PID Controller/preInt Signal/Internal PreInt'
 * '<S55>'  : 'testmodelcode/control/PID Controller/preSat Signal/Forward_Path'
 * '<S56>'  : 'testmodelcode/control/Subsystem1/Compare To Constant'
 * '<S57>'  : 'testmodelcode/control/Subsystem1/MATLAB Function'
 * '<S58>'  : 'testmodelcode/control/Subsystem1/MATLAB Function1'
 * '<S59>'  : 'testmodelcode/control/Subsystem1/MATLAB Function2'
 */
#endif                                 /* control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
