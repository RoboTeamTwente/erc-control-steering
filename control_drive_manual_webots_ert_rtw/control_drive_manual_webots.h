/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_drive_manual_webots.h
 *
 * Code generated for Simulink model 'control_drive_manual_webots'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Fri May 15 11:30:04 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef control_drive_manual_webots_h_
#define control_drive_manual_webots_h_
#ifndef control_drive_manual_webots_COMMON_INCLUDES_
#define control_drive_manual_webots_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                        /* control_drive_manual_webots_COMMON_INCLUDES_ */

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
  real_T UnitDelay2_DSTATE;            /* '<S1>/Unit Delay2' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T R;                            /* '<Root>/R' */
  real_T desiredSpeed;                 /* '<Root>/desiredSpeed' */
  real_T LFActualSpeed;                /* '<Root>/LFActualSpeed' */
  real_T LMActualSpeed;                /* '<Root>/LMActualSpeed' */
  real_T LBActualSpeed;                /* '<Root>/LBActualSpeed' */
  real_T RFActualSpeed;                /* '<Root>/RFActualSpeed' */
  real_T RMActualSpeed;                /* '<Root>/RMActualSpeed' */
  real_T RBActualSpeed;                /* '<Root>/RBActualSpeed' */
  real_T deltaTime;                    /* '<Root>/deltaTime' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T controlLF;                    /* '<Root>/controlLF' */
  real_T controlLM;                    /* '<Root>/controlLM' */
  real_T controlLB;                    /* '<Root>/controlLB' */
  real_T controlRF;                    /* '<Root>/controlRF' */
  real_T controlRM;                    /* '<Root>/controlRM' */
  real_T controlRB;                    /* '<Root>/controlRB' */
  real_T stepperLFSteps;               /* '<Root>/stepperLFSteps' */
  real_T stepperLFFrequency;           /* '<Root>/stepperLFFrequency' */
  real_T stepperLBSteps;               /* '<Root>/stepperLBSteps' */
  real_T stepperLBFrequency;           /* '<Root>/stepperLBFrequency' */
  real_T stepperRFSteps;               /* '<Root>/stepperRFSteps' */
  real_T stepperRFFrequency;           /* '<Root>/stepperRFFrequency' */
  real_T stepperRBSteps;               /* '<Root>/stepperRBSteps' */
  real_T stepperRBFrequency;           /* '<Root>/stepperRBFrequency' */
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
extern void control_drive_manual_webots_initialize(void);
extern void control_drive_manual_webots_step(void);

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
 * hilite_system('codegen_drive_manual_webots/control_drive_manual_webots')    - opens subsystem codegen_drive_manual_webots/control_drive_manual_webots
 * hilite_system('codegen_drive_manual_webots/control_drive_manual_webots/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'codegen_drive_manual_webots'
 * '<S1>'   : 'codegen_drive_manual_webots/control_drive_manual_webots'
 * '<S2>'   : 'codegen_drive_manual_webots/control_drive_manual_webots/getting the steering angles and turing radii'
 * '<S3>'   : 'codegen_drive_manual_webots/control_drive_manual_webots/getting the wheel speeds from the turning radii'
 * '<S4>'   : 'codegen_drive_manual_webots/control_drive_manual_webots/setting the desired speed of the shassis'
 */
#endif                                 /* control_drive_manual_webots_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
