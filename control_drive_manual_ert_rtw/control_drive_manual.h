/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_drive_manual.h
 *
 * Code generated for Simulink model 'control_drive_manual'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Tue Apr 28 11:11:02 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: STMicroelectronics->ST10/Super10
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef control_drive_manual_h_
#define control_drive_manual_h_
#ifndef control_drive_manual_COMMON_INCLUDES_
#define control_drive_manual_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                               /* control_drive_manual_COMMON_INCLUDES_ */

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
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T UnitDelay2_DSTATE;            /* '<S1>/Unit Delay2' */
  real_T UnitDelay4_DSTATE;            /* '<S1>/Unit Delay4' */
  real_T UnitDelay6_DSTATE;            /* '<S1>/Unit Delay6' */
  real_T UnitDelay8_DSTATE;            /* '<S1>/Unit Delay8' */
  real_T UnitDelay10_DSTATE;           /* '<S1>/Unit Delay10' */
  real_T UnitDelay1_DSTATE;            /* '<S1>/Unit Delay1' */
  real_T UnitDelay3_DSTATE;            /* '<S1>/Unit Delay3' */
  real_T Integrator_DSTATE;            /* '<S102>/Integrator' */
  real_T UnitDelay5_DSTATE;            /* '<S1>/Unit Delay5' */
  real_T Integrator_DSTATE_h;          /* '<S154>/Integrator' */
  real_T UnitDelay7_DSTATE;            /* '<S1>/Unit Delay7' */
  real_T Integrator_DSTATE_c;          /* '<S206>/Integrator' */
  real_T UnitDelay9_DSTATE;            /* '<S1>/Unit Delay9' */
  real_T Integrator_DSTATE_f;          /* '<S258>/Integrator' */
  real_T UnitDelay11_DSTATE;           /* '<S1>/Unit Delay11' */
  real_T Integrator_DSTATE_p;          /* '<S310>/Integrator' */
  real_T Integrator_DSTATE_cz;         /* '<S50>/Integrator' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T turning_input;                /* '<Root>/turning_input' */
  real_T speed_input;                  /* '<Root>/speed_input' */
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
  real_T FreqLF;                       /* '<Root>/FreqLF' */
  real_T StepsLF;                      /* '<Root>/StepsLF' */
  real_T FreqLB;                       /* '<Root>/FreqLB' */
  real_T StepsLB;                      /* '<Root>/StepsLB' */
  real_T FreqRF;                       /* '<Root>/FreqRF' */
  real_T StepsRF;                      /* '<Root>/StepsRF' */
  real_T FreqRB;                       /* '<Root>/FreqRB' */
  real_T StepsRB;                      /* '<Root>/StepsRB' */
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
extern void control_drive_manual_initialize(void);
extern void control_drive_manual_step(void);

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
 * hilite_system('codegen_drive_manual/control_drive_manual')    - opens subsystem codegen_drive_manual/control_drive_manual
 * hilite_system('codegen_drive_manual/control_drive_manual/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'codegen_drive_manual'
 * '<S1>'   : 'codegen_drive_manual/control_drive_manual'
 * '<S2>'   : 'codegen_drive_manual/control_drive_manual/MATLAB Function1'
 * '<S3>'   : 'codegen_drive_manual/control_drive_manual/MATLAB Function2'
 * '<S4>'   : 'codegen_drive_manual/control_drive_manual/MATLAB Function3'
 * '<S5>'   : 'codegen_drive_manual/control_drive_manual/MATLAB Function4'
 * '<S6>'   : 'codegen_drive_manual/control_drive_manual/MATLAB Function5'
 * '<S7>'   : 'codegen_drive_manual/control_drive_manual/MATLAB Function6'
 * '<S8>'   : 'codegen_drive_manual/control_drive_manual/PID Controller1'
 * '<S9>'   : 'codegen_drive_manual/control_drive_manual/PID Controller2'
 * '<S10>'  : 'codegen_drive_manual/control_drive_manual/PID Controller3'
 * '<S11>'  : 'codegen_drive_manual/control_drive_manual/PID Controller4'
 * '<S12>'  : 'codegen_drive_manual/control_drive_manual/PID Controller5'
 * '<S13>'  : 'codegen_drive_manual/control_drive_manual/PID Controller6'
 * '<S14>'  : 'codegen_drive_manual/control_drive_manual/getting the steering angles and turing radii'
 * '<S15>'  : 'codegen_drive_manual/control_drive_manual/getting the wheel speeds from the turning radii'
 * '<S16>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Anti-windup'
 * '<S17>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/D Gain'
 * '<S18>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/External Derivative'
 * '<S19>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Filter'
 * '<S20>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Filter ICs'
 * '<S21>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/I Gain'
 * '<S22>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Ideal P Gain'
 * '<S23>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Ideal P Gain Fdbk'
 * '<S24>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Integrator'
 * '<S25>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Integrator ICs'
 * '<S26>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/N Copy'
 * '<S27>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/N Gain'
 * '<S28>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/P Copy'
 * '<S29>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Parallel P Gain'
 * '<S30>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Reset Signal'
 * '<S31>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Saturation'
 * '<S32>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Saturation Fdbk'
 * '<S33>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Sum'
 * '<S34>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Sum Fdbk'
 * '<S35>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Tracking Mode'
 * '<S36>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Tracking Mode Sum'
 * '<S37>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Tsamp - Integral'
 * '<S38>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Tsamp - Ngain'
 * '<S39>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/postSat Signal'
 * '<S40>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/preInt Signal'
 * '<S41>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/preSat Signal'
 * '<S42>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Anti-windup/Passthrough'
 * '<S43>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/D Gain/Disabled'
 * '<S44>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/External Derivative/Disabled'
 * '<S45>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Filter/Disabled'
 * '<S46>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Filter ICs/Disabled'
 * '<S47>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/I Gain/Internal Parameters'
 * '<S48>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Ideal P Gain/Passthrough'
 * '<S49>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S50>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Integrator/Discrete'
 * '<S51>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Integrator ICs/Internal IC'
 * '<S52>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S53>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/N Gain/Disabled'
 * '<S54>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/P Copy/Disabled'
 * '<S55>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S56>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Reset Signal/Disabled'
 * '<S57>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Saturation/Passthrough'
 * '<S58>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Saturation Fdbk/Disabled'
 * '<S59>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Sum/Sum_PI'
 * '<S60>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Sum Fdbk/Disabled'
 * '<S61>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Tracking Mode/Disabled'
 * '<S62>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S63>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Tsamp - Integral/External Ts'
 * '<S64>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S65>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/postSat Signal/Forward_Path'
 * '<S66>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/preInt Signal/Internal PreInt'
 * '<S67>'  : 'codegen_drive_manual/control_drive_manual/PID Controller1/preSat Signal/Forward_Path'
 * '<S68>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Anti-windup'
 * '<S69>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/D Gain'
 * '<S70>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/External Derivative'
 * '<S71>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Filter'
 * '<S72>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Filter ICs'
 * '<S73>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/I Gain'
 * '<S74>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Ideal P Gain'
 * '<S75>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Ideal P Gain Fdbk'
 * '<S76>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Integrator'
 * '<S77>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Integrator ICs'
 * '<S78>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/N Copy'
 * '<S79>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/N Gain'
 * '<S80>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/P Copy'
 * '<S81>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Parallel P Gain'
 * '<S82>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Reset Signal'
 * '<S83>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Saturation'
 * '<S84>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Saturation Fdbk'
 * '<S85>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Sum'
 * '<S86>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Sum Fdbk'
 * '<S87>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Tracking Mode'
 * '<S88>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Tracking Mode Sum'
 * '<S89>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Tsamp - Integral'
 * '<S90>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Tsamp - Ngain'
 * '<S91>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/postSat Signal'
 * '<S92>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/preInt Signal'
 * '<S93>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/preSat Signal'
 * '<S94>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Anti-windup/Passthrough'
 * '<S95>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/D Gain/Disabled'
 * '<S96>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/External Derivative/Disabled'
 * '<S97>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Filter/Disabled'
 * '<S98>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/Filter ICs/Disabled'
 * '<S99>'  : 'codegen_drive_manual/control_drive_manual/PID Controller2/I Gain/Internal Parameters'
 * '<S100>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Ideal P Gain/Passthrough'
 * '<S101>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S102>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Integrator/Discrete'
 * '<S103>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Integrator ICs/Internal IC'
 * '<S104>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/N Copy/Disabled wSignal Specification'
 * '<S105>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/N Gain/Disabled'
 * '<S106>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/P Copy/Disabled'
 * '<S107>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Parallel P Gain/Internal Parameters'
 * '<S108>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Reset Signal/Disabled'
 * '<S109>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Saturation/Passthrough'
 * '<S110>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Saturation Fdbk/Disabled'
 * '<S111>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Sum/Sum_PI'
 * '<S112>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Sum Fdbk/Disabled'
 * '<S113>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Tracking Mode/Disabled'
 * '<S114>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S115>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Tsamp - Integral/External Ts'
 * '<S116>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/Tsamp - Ngain/Passthrough'
 * '<S117>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/postSat Signal/Forward_Path'
 * '<S118>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/preInt Signal/Internal PreInt'
 * '<S119>' : 'codegen_drive_manual/control_drive_manual/PID Controller2/preSat Signal/Forward_Path'
 * '<S120>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Anti-windup'
 * '<S121>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/D Gain'
 * '<S122>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/External Derivative'
 * '<S123>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Filter'
 * '<S124>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Filter ICs'
 * '<S125>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/I Gain'
 * '<S126>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Ideal P Gain'
 * '<S127>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Ideal P Gain Fdbk'
 * '<S128>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Integrator'
 * '<S129>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Integrator ICs'
 * '<S130>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/N Copy'
 * '<S131>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/N Gain'
 * '<S132>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/P Copy'
 * '<S133>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Parallel P Gain'
 * '<S134>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Reset Signal'
 * '<S135>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Saturation'
 * '<S136>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Saturation Fdbk'
 * '<S137>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Sum'
 * '<S138>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Sum Fdbk'
 * '<S139>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Tracking Mode'
 * '<S140>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Tracking Mode Sum'
 * '<S141>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Tsamp - Integral'
 * '<S142>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Tsamp - Ngain'
 * '<S143>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/postSat Signal'
 * '<S144>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/preInt Signal'
 * '<S145>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/preSat Signal'
 * '<S146>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Anti-windup/Passthrough'
 * '<S147>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/D Gain/Disabled'
 * '<S148>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/External Derivative/Disabled'
 * '<S149>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Filter/Disabled'
 * '<S150>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Filter ICs/Disabled'
 * '<S151>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/I Gain/Internal Parameters'
 * '<S152>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Ideal P Gain/Passthrough'
 * '<S153>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S154>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Integrator/Discrete'
 * '<S155>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Integrator ICs/Internal IC'
 * '<S156>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/N Copy/Disabled wSignal Specification'
 * '<S157>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/N Gain/Disabled'
 * '<S158>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/P Copy/Disabled'
 * '<S159>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Parallel P Gain/Internal Parameters'
 * '<S160>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Reset Signal/Disabled'
 * '<S161>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Saturation/Passthrough'
 * '<S162>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Saturation Fdbk/Disabled'
 * '<S163>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Sum/Sum_PI'
 * '<S164>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Sum Fdbk/Disabled'
 * '<S165>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Tracking Mode/Disabled'
 * '<S166>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S167>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Tsamp - Integral/External Ts'
 * '<S168>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/Tsamp - Ngain/Passthrough'
 * '<S169>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/postSat Signal/Forward_Path'
 * '<S170>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/preInt Signal/Internal PreInt'
 * '<S171>' : 'codegen_drive_manual/control_drive_manual/PID Controller3/preSat Signal/Forward_Path'
 * '<S172>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Anti-windup'
 * '<S173>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/D Gain'
 * '<S174>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/External Derivative'
 * '<S175>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Filter'
 * '<S176>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Filter ICs'
 * '<S177>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/I Gain'
 * '<S178>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Ideal P Gain'
 * '<S179>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Ideal P Gain Fdbk'
 * '<S180>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Integrator'
 * '<S181>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Integrator ICs'
 * '<S182>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/N Copy'
 * '<S183>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/N Gain'
 * '<S184>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/P Copy'
 * '<S185>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Parallel P Gain'
 * '<S186>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Reset Signal'
 * '<S187>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Saturation'
 * '<S188>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Saturation Fdbk'
 * '<S189>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Sum'
 * '<S190>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Sum Fdbk'
 * '<S191>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Tracking Mode'
 * '<S192>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Tracking Mode Sum'
 * '<S193>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Tsamp - Integral'
 * '<S194>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Tsamp - Ngain'
 * '<S195>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/postSat Signal'
 * '<S196>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/preInt Signal'
 * '<S197>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/preSat Signal'
 * '<S198>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Anti-windup/Passthrough'
 * '<S199>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/D Gain/Disabled'
 * '<S200>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/External Derivative/Disabled'
 * '<S201>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Filter/Disabled'
 * '<S202>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Filter ICs/Disabled'
 * '<S203>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/I Gain/Internal Parameters'
 * '<S204>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Ideal P Gain/Passthrough'
 * '<S205>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Ideal P Gain Fdbk/Disabled'
 * '<S206>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Integrator/Discrete'
 * '<S207>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Integrator ICs/Internal IC'
 * '<S208>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/N Copy/Disabled wSignal Specification'
 * '<S209>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/N Gain/Disabled'
 * '<S210>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/P Copy/Disabled'
 * '<S211>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Parallel P Gain/Internal Parameters'
 * '<S212>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Reset Signal/Disabled'
 * '<S213>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Saturation/Passthrough'
 * '<S214>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Saturation Fdbk/Disabled'
 * '<S215>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Sum/Sum_PI'
 * '<S216>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Sum Fdbk/Disabled'
 * '<S217>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Tracking Mode/Disabled'
 * '<S218>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Tracking Mode Sum/Passthrough'
 * '<S219>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Tsamp - Integral/External Ts'
 * '<S220>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/Tsamp - Ngain/Passthrough'
 * '<S221>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/postSat Signal/Forward_Path'
 * '<S222>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/preInt Signal/Internal PreInt'
 * '<S223>' : 'codegen_drive_manual/control_drive_manual/PID Controller4/preSat Signal/Forward_Path'
 * '<S224>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Anti-windup'
 * '<S225>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/D Gain'
 * '<S226>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/External Derivative'
 * '<S227>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Filter'
 * '<S228>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Filter ICs'
 * '<S229>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/I Gain'
 * '<S230>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Ideal P Gain'
 * '<S231>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Ideal P Gain Fdbk'
 * '<S232>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Integrator'
 * '<S233>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Integrator ICs'
 * '<S234>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/N Copy'
 * '<S235>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/N Gain'
 * '<S236>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/P Copy'
 * '<S237>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Parallel P Gain'
 * '<S238>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Reset Signal'
 * '<S239>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Saturation'
 * '<S240>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Saturation Fdbk'
 * '<S241>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Sum'
 * '<S242>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Sum Fdbk'
 * '<S243>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Tracking Mode'
 * '<S244>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Tracking Mode Sum'
 * '<S245>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Tsamp - Integral'
 * '<S246>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Tsamp - Ngain'
 * '<S247>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/postSat Signal'
 * '<S248>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/preInt Signal'
 * '<S249>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/preSat Signal'
 * '<S250>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Anti-windup/Passthrough'
 * '<S251>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/D Gain/Disabled'
 * '<S252>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/External Derivative/Disabled'
 * '<S253>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Filter/Disabled'
 * '<S254>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Filter ICs/Disabled'
 * '<S255>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/I Gain/Internal Parameters'
 * '<S256>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Ideal P Gain/Passthrough'
 * '<S257>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Ideal P Gain Fdbk/Disabled'
 * '<S258>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Integrator/Discrete'
 * '<S259>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Integrator ICs/Internal IC'
 * '<S260>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/N Copy/Disabled wSignal Specification'
 * '<S261>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/N Gain/Disabled'
 * '<S262>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/P Copy/Disabled'
 * '<S263>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Parallel P Gain/Internal Parameters'
 * '<S264>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Reset Signal/Disabled'
 * '<S265>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Saturation/Passthrough'
 * '<S266>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Saturation Fdbk/Disabled'
 * '<S267>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Sum/Sum_PI'
 * '<S268>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Sum Fdbk/Disabled'
 * '<S269>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Tracking Mode/Disabled'
 * '<S270>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Tracking Mode Sum/Passthrough'
 * '<S271>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Tsamp - Integral/External Ts'
 * '<S272>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/Tsamp - Ngain/Passthrough'
 * '<S273>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/postSat Signal/Forward_Path'
 * '<S274>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/preInt Signal/Internal PreInt'
 * '<S275>' : 'codegen_drive_manual/control_drive_manual/PID Controller5/preSat Signal/Forward_Path'
 * '<S276>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Anti-windup'
 * '<S277>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/D Gain'
 * '<S278>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/External Derivative'
 * '<S279>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Filter'
 * '<S280>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Filter ICs'
 * '<S281>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/I Gain'
 * '<S282>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Ideal P Gain'
 * '<S283>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Ideal P Gain Fdbk'
 * '<S284>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Integrator'
 * '<S285>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Integrator ICs'
 * '<S286>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/N Copy'
 * '<S287>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/N Gain'
 * '<S288>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/P Copy'
 * '<S289>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Parallel P Gain'
 * '<S290>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Reset Signal'
 * '<S291>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Saturation'
 * '<S292>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Saturation Fdbk'
 * '<S293>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Sum'
 * '<S294>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Sum Fdbk'
 * '<S295>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Tracking Mode'
 * '<S296>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Tracking Mode Sum'
 * '<S297>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Tsamp - Integral'
 * '<S298>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Tsamp - Ngain'
 * '<S299>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/postSat Signal'
 * '<S300>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/preInt Signal'
 * '<S301>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/preSat Signal'
 * '<S302>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Anti-windup/Passthrough'
 * '<S303>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/D Gain/Disabled'
 * '<S304>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/External Derivative/Disabled'
 * '<S305>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Filter/Disabled'
 * '<S306>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Filter ICs/Disabled'
 * '<S307>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/I Gain/Internal Parameters'
 * '<S308>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Ideal P Gain/Passthrough'
 * '<S309>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Ideal P Gain Fdbk/Disabled'
 * '<S310>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Integrator/Discrete'
 * '<S311>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Integrator ICs/Internal IC'
 * '<S312>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/N Copy/Disabled wSignal Specification'
 * '<S313>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/N Gain/Disabled'
 * '<S314>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/P Copy/Disabled'
 * '<S315>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Parallel P Gain/Internal Parameters'
 * '<S316>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Reset Signal/Disabled'
 * '<S317>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Saturation/Passthrough'
 * '<S318>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Saturation Fdbk/Disabled'
 * '<S319>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Sum/Sum_PI'
 * '<S320>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Sum Fdbk/Disabled'
 * '<S321>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Tracking Mode/Disabled'
 * '<S322>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Tracking Mode Sum/Passthrough'
 * '<S323>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Tsamp - Integral/External Ts'
 * '<S324>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/Tsamp - Ngain/Passthrough'
 * '<S325>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/postSat Signal/Forward_Path'
 * '<S326>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/preInt Signal/Internal PreInt'
 * '<S327>' : 'codegen_drive_manual/control_drive_manual/PID Controller6/preSat Signal/Forward_Path'
 */
#endif                                 /* control_drive_manual_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
