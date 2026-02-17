/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control.h
 *
 * Code generated for Simulink model 'control'.
 *
 * Model version                  : 3.20
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Tue Feb 17 09:55:39 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: STMicroelectronics->ST10/Super10
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
#include "math.h"
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
  real_T UnitDelay12_DSTATE;           /* '<S1>/Unit Delay12' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T UnitDelay13_DSTATE;           /* '<S1>/Unit Delay13' */
  real_T UnitDelay14_DSTATE;           /* '<S1>/Unit Delay14' */
  real_T UnitDelay15_DSTATE;           /* '<S1>/Unit Delay15' */
  real_T UnitDelay2_DSTATE;            /* '<S1>/Unit Delay2' */
  real_T UnitDelay4_DSTATE;            /* '<S1>/Unit Delay4' */
  real_T UnitDelay6_DSTATE;            /* '<S1>/Unit Delay6' */
  real_T UnitDelay8_DSTATE;            /* '<S1>/Unit Delay8' */
  real_T UnitDelay10_DSTATE;           /* '<S1>/Unit Delay10' */
  real_T UnitDelay1_DSTATE;            /* '<S1>/Unit Delay1' */
  real_T UnitDelay3_DSTATE;            /* '<S1>/Unit Delay3' */
  real_T Integrator_DSTATE;            /* '<S107>/Integrator' */
  real_T UnitDelay5_DSTATE;            /* '<S1>/Unit Delay5' */
  real_T Integrator_DSTATE_o;          /* '<S159>/Integrator' */
  real_T UnitDelay7_DSTATE;            /* '<S1>/Unit Delay7' */
  real_T Integrator_DSTATE_i;          /* '<S211>/Integrator' */
  real_T UnitDelay9_DSTATE;            /* '<S1>/Unit Delay9' */
  real_T Integrator_DSTATE_e;          /* '<S263>/Integrator' */
  real_T UnitDelay11_DSTATE;           /* '<S1>/Unit Delay11' */
  real_T Integrator_DSTATE_j;          /* '<S315>/Integrator' */
  real_T Integrator_DSTATE_f;          /* '<S55>/Integrator' */
  int32_T clockTickCounter;            /* '<S1>/Pulse Generator1' */
  int32_T clockTickCounter_j;          /* '<S1>/Pulse Generator2' */
  int32_T clockTickCounter_jz;         /* '<S1>/Pulse Generator3' */
  int32_T clockTickCounter_p;          /* '<S1>/Pulse Generator4' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T R;                            /* '<Root>/R' */
  real_T dist2goal;                    /* '<Root>/dist2goal' */
  real_T LFActualSpeed;                /* '<Root>/LFActualSpeed' */
  real_T LMActualSpeed;                /* '<Root>/LMActualSpeed' */
  real_T LBActualSpeed;                /* '<Root>/LBActualSpeed' */
  real_T RFActualSpeed;                /* '<Root>/RFActualSpeed' */
  real_T RMActualSpeed;                /* '<Root>/RMActualSpeed' */
  real_T RBActualSpeed;                /* '<Root>/RBActualSpeed' */
  real_T stepperLFActualPosition;      /* '<Root>/stepperLFActualPosition' */
  real_T stepperLBActualPosition;      /* '<Root>/stepperLBActualPosition' */
  real_T stepperRFActualPosition;      /* '<Root>/stepperRFActualPosition' */
  real_T stepperRBActualPosition;      /* '<Root>/stepperRBActualPosition' */
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
  real_T stepperLFENA;                 /* '<Root>/stepperLFENA' */
  real_T stepperLFREV;                 /* '<Root>/stepperLFREV' */
  real_T stepperLBENA;                 /* '<Root>/stepperLBENA' */
  real_T stepperLBREV;                 /* '<Root>/stepperLBREV' */
  real_T stepperRFENA;                 /* '<Root>/stepperRFENA' */
  real_T stepperRFREV;                 /* '<Root>/stepperRFREV' */
  real_T stepperRBENA;                 /* '<Root>/stepperRBENA' */
  real_T stepperRBREV;                 /* '<Root>/stepperRBREV' */
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
 * hilite_system('codegen/control')    - opens subsystem codegen/control
 * hilite_system('codegen/control/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'codegen'
 * '<S1>'   : 'codegen/control'
 * '<S2>'   : 'codegen/control/Compare To Constant1'
 * '<S3>'   : 'codegen/control/Compare To Constant2'
 * '<S4>'   : 'codegen/control/Compare To Constant3'
 * '<S5>'   : 'codegen/control/Compare To Constant4'
 * '<S6>'   : 'codegen/control/MATLAB Function1'
 * '<S7>'   : 'codegen/control/MATLAB Function2'
 * '<S8>'   : 'codegen/control/MATLAB Function3'
 * '<S9>'   : 'codegen/control/MATLAB Function4'
 * '<S10>'  : 'codegen/control/MATLAB Function5'
 * '<S11>'  : 'codegen/control/MATLAB Function6'
 * '<S12>'  : 'codegen/control/PID Controller1'
 * '<S13>'  : 'codegen/control/PID Controller2'
 * '<S14>'  : 'codegen/control/PID Controller3'
 * '<S15>'  : 'codegen/control/PID Controller4'
 * '<S16>'  : 'codegen/control/PID Controller5'
 * '<S17>'  : 'codegen/control/PID Controller6'
 * '<S18>'  : 'codegen/control/getting the steering angles and turing radii'
 * '<S19>'  : 'codegen/control/getting the wheel speeds from the turning radii'
 * '<S20>'  : 'codegen/control/setting desired speed dependant on the goal'
 * '<S21>'  : 'codegen/control/PID Controller1/Anti-windup'
 * '<S22>'  : 'codegen/control/PID Controller1/D Gain'
 * '<S23>'  : 'codegen/control/PID Controller1/External Derivative'
 * '<S24>'  : 'codegen/control/PID Controller1/Filter'
 * '<S25>'  : 'codegen/control/PID Controller1/Filter ICs'
 * '<S26>'  : 'codegen/control/PID Controller1/I Gain'
 * '<S27>'  : 'codegen/control/PID Controller1/Ideal P Gain'
 * '<S28>'  : 'codegen/control/PID Controller1/Ideal P Gain Fdbk'
 * '<S29>'  : 'codegen/control/PID Controller1/Integrator'
 * '<S30>'  : 'codegen/control/PID Controller1/Integrator ICs'
 * '<S31>'  : 'codegen/control/PID Controller1/N Copy'
 * '<S32>'  : 'codegen/control/PID Controller1/N Gain'
 * '<S33>'  : 'codegen/control/PID Controller1/P Copy'
 * '<S34>'  : 'codegen/control/PID Controller1/Parallel P Gain'
 * '<S35>'  : 'codegen/control/PID Controller1/Reset Signal'
 * '<S36>'  : 'codegen/control/PID Controller1/Saturation'
 * '<S37>'  : 'codegen/control/PID Controller1/Saturation Fdbk'
 * '<S38>'  : 'codegen/control/PID Controller1/Sum'
 * '<S39>'  : 'codegen/control/PID Controller1/Sum Fdbk'
 * '<S40>'  : 'codegen/control/PID Controller1/Tracking Mode'
 * '<S41>'  : 'codegen/control/PID Controller1/Tracking Mode Sum'
 * '<S42>'  : 'codegen/control/PID Controller1/Tsamp - Integral'
 * '<S43>'  : 'codegen/control/PID Controller1/Tsamp - Ngain'
 * '<S44>'  : 'codegen/control/PID Controller1/postSat Signal'
 * '<S45>'  : 'codegen/control/PID Controller1/preInt Signal'
 * '<S46>'  : 'codegen/control/PID Controller1/preSat Signal'
 * '<S47>'  : 'codegen/control/PID Controller1/Anti-windup/Passthrough'
 * '<S48>'  : 'codegen/control/PID Controller1/D Gain/Disabled'
 * '<S49>'  : 'codegen/control/PID Controller1/External Derivative/Disabled'
 * '<S50>'  : 'codegen/control/PID Controller1/Filter/Disabled'
 * '<S51>'  : 'codegen/control/PID Controller1/Filter ICs/Disabled'
 * '<S52>'  : 'codegen/control/PID Controller1/I Gain/Internal Parameters'
 * '<S53>'  : 'codegen/control/PID Controller1/Ideal P Gain/Passthrough'
 * '<S54>'  : 'codegen/control/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S55>'  : 'codegen/control/PID Controller1/Integrator/Discrete'
 * '<S56>'  : 'codegen/control/PID Controller1/Integrator ICs/Internal IC'
 * '<S57>'  : 'codegen/control/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S58>'  : 'codegen/control/PID Controller1/N Gain/Disabled'
 * '<S59>'  : 'codegen/control/PID Controller1/P Copy/Disabled'
 * '<S60>'  : 'codegen/control/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S61>'  : 'codegen/control/PID Controller1/Reset Signal/Disabled'
 * '<S62>'  : 'codegen/control/PID Controller1/Saturation/Passthrough'
 * '<S63>'  : 'codegen/control/PID Controller1/Saturation Fdbk/Disabled'
 * '<S64>'  : 'codegen/control/PID Controller1/Sum/Sum_PI'
 * '<S65>'  : 'codegen/control/PID Controller1/Sum Fdbk/Disabled'
 * '<S66>'  : 'codegen/control/PID Controller1/Tracking Mode/Disabled'
 * '<S67>'  : 'codegen/control/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S68>'  : 'codegen/control/PID Controller1/Tsamp - Integral/External Ts'
 * '<S69>'  : 'codegen/control/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S70>'  : 'codegen/control/PID Controller1/postSat Signal/Forward_Path'
 * '<S71>'  : 'codegen/control/PID Controller1/preInt Signal/Internal PreInt'
 * '<S72>'  : 'codegen/control/PID Controller1/preSat Signal/Forward_Path'
 * '<S73>'  : 'codegen/control/PID Controller2/Anti-windup'
 * '<S74>'  : 'codegen/control/PID Controller2/D Gain'
 * '<S75>'  : 'codegen/control/PID Controller2/External Derivative'
 * '<S76>'  : 'codegen/control/PID Controller2/Filter'
 * '<S77>'  : 'codegen/control/PID Controller2/Filter ICs'
 * '<S78>'  : 'codegen/control/PID Controller2/I Gain'
 * '<S79>'  : 'codegen/control/PID Controller2/Ideal P Gain'
 * '<S80>'  : 'codegen/control/PID Controller2/Ideal P Gain Fdbk'
 * '<S81>'  : 'codegen/control/PID Controller2/Integrator'
 * '<S82>'  : 'codegen/control/PID Controller2/Integrator ICs'
 * '<S83>'  : 'codegen/control/PID Controller2/N Copy'
 * '<S84>'  : 'codegen/control/PID Controller2/N Gain'
 * '<S85>'  : 'codegen/control/PID Controller2/P Copy'
 * '<S86>'  : 'codegen/control/PID Controller2/Parallel P Gain'
 * '<S87>'  : 'codegen/control/PID Controller2/Reset Signal'
 * '<S88>'  : 'codegen/control/PID Controller2/Saturation'
 * '<S89>'  : 'codegen/control/PID Controller2/Saturation Fdbk'
 * '<S90>'  : 'codegen/control/PID Controller2/Sum'
 * '<S91>'  : 'codegen/control/PID Controller2/Sum Fdbk'
 * '<S92>'  : 'codegen/control/PID Controller2/Tracking Mode'
 * '<S93>'  : 'codegen/control/PID Controller2/Tracking Mode Sum'
 * '<S94>'  : 'codegen/control/PID Controller2/Tsamp - Integral'
 * '<S95>'  : 'codegen/control/PID Controller2/Tsamp - Ngain'
 * '<S96>'  : 'codegen/control/PID Controller2/postSat Signal'
 * '<S97>'  : 'codegen/control/PID Controller2/preInt Signal'
 * '<S98>'  : 'codegen/control/PID Controller2/preSat Signal'
 * '<S99>'  : 'codegen/control/PID Controller2/Anti-windup/Passthrough'
 * '<S100>' : 'codegen/control/PID Controller2/D Gain/Disabled'
 * '<S101>' : 'codegen/control/PID Controller2/External Derivative/Disabled'
 * '<S102>' : 'codegen/control/PID Controller2/Filter/Disabled'
 * '<S103>' : 'codegen/control/PID Controller2/Filter ICs/Disabled'
 * '<S104>' : 'codegen/control/PID Controller2/I Gain/Internal Parameters'
 * '<S105>' : 'codegen/control/PID Controller2/Ideal P Gain/Passthrough'
 * '<S106>' : 'codegen/control/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S107>' : 'codegen/control/PID Controller2/Integrator/Discrete'
 * '<S108>' : 'codegen/control/PID Controller2/Integrator ICs/Internal IC'
 * '<S109>' : 'codegen/control/PID Controller2/N Copy/Disabled wSignal Specification'
 * '<S110>' : 'codegen/control/PID Controller2/N Gain/Disabled'
 * '<S111>' : 'codegen/control/PID Controller2/P Copy/Disabled'
 * '<S112>' : 'codegen/control/PID Controller2/Parallel P Gain/Internal Parameters'
 * '<S113>' : 'codegen/control/PID Controller2/Reset Signal/Disabled'
 * '<S114>' : 'codegen/control/PID Controller2/Saturation/Passthrough'
 * '<S115>' : 'codegen/control/PID Controller2/Saturation Fdbk/Disabled'
 * '<S116>' : 'codegen/control/PID Controller2/Sum/Sum_PI'
 * '<S117>' : 'codegen/control/PID Controller2/Sum Fdbk/Disabled'
 * '<S118>' : 'codegen/control/PID Controller2/Tracking Mode/Disabled'
 * '<S119>' : 'codegen/control/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S120>' : 'codegen/control/PID Controller2/Tsamp - Integral/External Ts'
 * '<S121>' : 'codegen/control/PID Controller2/Tsamp - Ngain/Passthrough'
 * '<S122>' : 'codegen/control/PID Controller2/postSat Signal/Forward_Path'
 * '<S123>' : 'codegen/control/PID Controller2/preInt Signal/Internal PreInt'
 * '<S124>' : 'codegen/control/PID Controller2/preSat Signal/Forward_Path'
 * '<S125>' : 'codegen/control/PID Controller3/Anti-windup'
 * '<S126>' : 'codegen/control/PID Controller3/D Gain'
 * '<S127>' : 'codegen/control/PID Controller3/External Derivative'
 * '<S128>' : 'codegen/control/PID Controller3/Filter'
 * '<S129>' : 'codegen/control/PID Controller3/Filter ICs'
 * '<S130>' : 'codegen/control/PID Controller3/I Gain'
 * '<S131>' : 'codegen/control/PID Controller3/Ideal P Gain'
 * '<S132>' : 'codegen/control/PID Controller3/Ideal P Gain Fdbk'
 * '<S133>' : 'codegen/control/PID Controller3/Integrator'
 * '<S134>' : 'codegen/control/PID Controller3/Integrator ICs'
 * '<S135>' : 'codegen/control/PID Controller3/N Copy'
 * '<S136>' : 'codegen/control/PID Controller3/N Gain'
 * '<S137>' : 'codegen/control/PID Controller3/P Copy'
 * '<S138>' : 'codegen/control/PID Controller3/Parallel P Gain'
 * '<S139>' : 'codegen/control/PID Controller3/Reset Signal'
 * '<S140>' : 'codegen/control/PID Controller3/Saturation'
 * '<S141>' : 'codegen/control/PID Controller3/Saturation Fdbk'
 * '<S142>' : 'codegen/control/PID Controller3/Sum'
 * '<S143>' : 'codegen/control/PID Controller3/Sum Fdbk'
 * '<S144>' : 'codegen/control/PID Controller3/Tracking Mode'
 * '<S145>' : 'codegen/control/PID Controller3/Tracking Mode Sum'
 * '<S146>' : 'codegen/control/PID Controller3/Tsamp - Integral'
 * '<S147>' : 'codegen/control/PID Controller3/Tsamp - Ngain'
 * '<S148>' : 'codegen/control/PID Controller3/postSat Signal'
 * '<S149>' : 'codegen/control/PID Controller3/preInt Signal'
 * '<S150>' : 'codegen/control/PID Controller3/preSat Signal'
 * '<S151>' : 'codegen/control/PID Controller3/Anti-windup/Passthrough'
 * '<S152>' : 'codegen/control/PID Controller3/D Gain/Disabled'
 * '<S153>' : 'codegen/control/PID Controller3/External Derivative/Disabled'
 * '<S154>' : 'codegen/control/PID Controller3/Filter/Disabled'
 * '<S155>' : 'codegen/control/PID Controller3/Filter ICs/Disabled'
 * '<S156>' : 'codegen/control/PID Controller3/I Gain/Internal Parameters'
 * '<S157>' : 'codegen/control/PID Controller3/Ideal P Gain/Passthrough'
 * '<S158>' : 'codegen/control/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S159>' : 'codegen/control/PID Controller3/Integrator/Discrete'
 * '<S160>' : 'codegen/control/PID Controller3/Integrator ICs/Internal IC'
 * '<S161>' : 'codegen/control/PID Controller3/N Copy/Disabled wSignal Specification'
 * '<S162>' : 'codegen/control/PID Controller3/N Gain/Disabled'
 * '<S163>' : 'codegen/control/PID Controller3/P Copy/Disabled'
 * '<S164>' : 'codegen/control/PID Controller3/Parallel P Gain/Internal Parameters'
 * '<S165>' : 'codegen/control/PID Controller3/Reset Signal/Disabled'
 * '<S166>' : 'codegen/control/PID Controller3/Saturation/Passthrough'
 * '<S167>' : 'codegen/control/PID Controller3/Saturation Fdbk/Disabled'
 * '<S168>' : 'codegen/control/PID Controller3/Sum/Sum_PI'
 * '<S169>' : 'codegen/control/PID Controller3/Sum Fdbk/Disabled'
 * '<S170>' : 'codegen/control/PID Controller3/Tracking Mode/Disabled'
 * '<S171>' : 'codegen/control/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S172>' : 'codegen/control/PID Controller3/Tsamp - Integral/External Ts'
 * '<S173>' : 'codegen/control/PID Controller3/Tsamp - Ngain/Passthrough'
 * '<S174>' : 'codegen/control/PID Controller3/postSat Signal/Forward_Path'
 * '<S175>' : 'codegen/control/PID Controller3/preInt Signal/Internal PreInt'
 * '<S176>' : 'codegen/control/PID Controller3/preSat Signal/Forward_Path'
 * '<S177>' : 'codegen/control/PID Controller4/Anti-windup'
 * '<S178>' : 'codegen/control/PID Controller4/D Gain'
 * '<S179>' : 'codegen/control/PID Controller4/External Derivative'
 * '<S180>' : 'codegen/control/PID Controller4/Filter'
 * '<S181>' : 'codegen/control/PID Controller4/Filter ICs'
 * '<S182>' : 'codegen/control/PID Controller4/I Gain'
 * '<S183>' : 'codegen/control/PID Controller4/Ideal P Gain'
 * '<S184>' : 'codegen/control/PID Controller4/Ideal P Gain Fdbk'
 * '<S185>' : 'codegen/control/PID Controller4/Integrator'
 * '<S186>' : 'codegen/control/PID Controller4/Integrator ICs'
 * '<S187>' : 'codegen/control/PID Controller4/N Copy'
 * '<S188>' : 'codegen/control/PID Controller4/N Gain'
 * '<S189>' : 'codegen/control/PID Controller4/P Copy'
 * '<S190>' : 'codegen/control/PID Controller4/Parallel P Gain'
 * '<S191>' : 'codegen/control/PID Controller4/Reset Signal'
 * '<S192>' : 'codegen/control/PID Controller4/Saturation'
 * '<S193>' : 'codegen/control/PID Controller4/Saturation Fdbk'
 * '<S194>' : 'codegen/control/PID Controller4/Sum'
 * '<S195>' : 'codegen/control/PID Controller4/Sum Fdbk'
 * '<S196>' : 'codegen/control/PID Controller4/Tracking Mode'
 * '<S197>' : 'codegen/control/PID Controller4/Tracking Mode Sum'
 * '<S198>' : 'codegen/control/PID Controller4/Tsamp - Integral'
 * '<S199>' : 'codegen/control/PID Controller4/Tsamp - Ngain'
 * '<S200>' : 'codegen/control/PID Controller4/postSat Signal'
 * '<S201>' : 'codegen/control/PID Controller4/preInt Signal'
 * '<S202>' : 'codegen/control/PID Controller4/preSat Signal'
 * '<S203>' : 'codegen/control/PID Controller4/Anti-windup/Passthrough'
 * '<S204>' : 'codegen/control/PID Controller4/D Gain/Disabled'
 * '<S205>' : 'codegen/control/PID Controller4/External Derivative/Disabled'
 * '<S206>' : 'codegen/control/PID Controller4/Filter/Disabled'
 * '<S207>' : 'codegen/control/PID Controller4/Filter ICs/Disabled'
 * '<S208>' : 'codegen/control/PID Controller4/I Gain/Internal Parameters'
 * '<S209>' : 'codegen/control/PID Controller4/Ideal P Gain/Passthrough'
 * '<S210>' : 'codegen/control/PID Controller4/Ideal P Gain Fdbk/Disabled'
 * '<S211>' : 'codegen/control/PID Controller4/Integrator/Discrete'
 * '<S212>' : 'codegen/control/PID Controller4/Integrator ICs/Internal IC'
 * '<S213>' : 'codegen/control/PID Controller4/N Copy/Disabled wSignal Specification'
 * '<S214>' : 'codegen/control/PID Controller4/N Gain/Disabled'
 * '<S215>' : 'codegen/control/PID Controller4/P Copy/Disabled'
 * '<S216>' : 'codegen/control/PID Controller4/Parallel P Gain/Internal Parameters'
 * '<S217>' : 'codegen/control/PID Controller4/Reset Signal/Disabled'
 * '<S218>' : 'codegen/control/PID Controller4/Saturation/Passthrough'
 * '<S219>' : 'codegen/control/PID Controller4/Saturation Fdbk/Disabled'
 * '<S220>' : 'codegen/control/PID Controller4/Sum/Sum_PI'
 * '<S221>' : 'codegen/control/PID Controller4/Sum Fdbk/Disabled'
 * '<S222>' : 'codegen/control/PID Controller4/Tracking Mode/Disabled'
 * '<S223>' : 'codegen/control/PID Controller4/Tracking Mode Sum/Passthrough'
 * '<S224>' : 'codegen/control/PID Controller4/Tsamp - Integral/External Ts'
 * '<S225>' : 'codegen/control/PID Controller4/Tsamp - Ngain/Passthrough'
 * '<S226>' : 'codegen/control/PID Controller4/postSat Signal/Forward_Path'
 * '<S227>' : 'codegen/control/PID Controller4/preInt Signal/Internal PreInt'
 * '<S228>' : 'codegen/control/PID Controller4/preSat Signal/Forward_Path'
 * '<S229>' : 'codegen/control/PID Controller5/Anti-windup'
 * '<S230>' : 'codegen/control/PID Controller5/D Gain'
 * '<S231>' : 'codegen/control/PID Controller5/External Derivative'
 * '<S232>' : 'codegen/control/PID Controller5/Filter'
 * '<S233>' : 'codegen/control/PID Controller5/Filter ICs'
 * '<S234>' : 'codegen/control/PID Controller5/I Gain'
 * '<S235>' : 'codegen/control/PID Controller5/Ideal P Gain'
 * '<S236>' : 'codegen/control/PID Controller5/Ideal P Gain Fdbk'
 * '<S237>' : 'codegen/control/PID Controller5/Integrator'
 * '<S238>' : 'codegen/control/PID Controller5/Integrator ICs'
 * '<S239>' : 'codegen/control/PID Controller5/N Copy'
 * '<S240>' : 'codegen/control/PID Controller5/N Gain'
 * '<S241>' : 'codegen/control/PID Controller5/P Copy'
 * '<S242>' : 'codegen/control/PID Controller5/Parallel P Gain'
 * '<S243>' : 'codegen/control/PID Controller5/Reset Signal'
 * '<S244>' : 'codegen/control/PID Controller5/Saturation'
 * '<S245>' : 'codegen/control/PID Controller5/Saturation Fdbk'
 * '<S246>' : 'codegen/control/PID Controller5/Sum'
 * '<S247>' : 'codegen/control/PID Controller5/Sum Fdbk'
 * '<S248>' : 'codegen/control/PID Controller5/Tracking Mode'
 * '<S249>' : 'codegen/control/PID Controller5/Tracking Mode Sum'
 * '<S250>' : 'codegen/control/PID Controller5/Tsamp - Integral'
 * '<S251>' : 'codegen/control/PID Controller5/Tsamp - Ngain'
 * '<S252>' : 'codegen/control/PID Controller5/postSat Signal'
 * '<S253>' : 'codegen/control/PID Controller5/preInt Signal'
 * '<S254>' : 'codegen/control/PID Controller5/preSat Signal'
 * '<S255>' : 'codegen/control/PID Controller5/Anti-windup/Passthrough'
 * '<S256>' : 'codegen/control/PID Controller5/D Gain/Disabled'
 * '<S257>' : 'codegen/control/PID Controller5/External Derivative/Disabled'
 * '<S258>' : 'codegen/control/PID Controller5/Filter/Disabled'
 * '<S259>' : 'codegen/control/PID Controller5/Filter ICs/Disabled'
 * '<S260>' : 'codegen/control/PID Controller5/I Gain/Internal Parameters'
 * '<S261>' : 'codegen/control/PID Controller5/Ideal P Gain/Passthrough'
 * '<S262>' : 'codegen/control/PID Controller5/Ideal P Gain Fdbk/Disabled'
 * '<S263>' : 'codegen/control/PID Controller5/Integrator/Discrete'
 * '<S264>' : 'codegen/control/PID Controller5/Integrator ICs/Internal IC'
 * '<S265>' : 'codegen/control/PID Controller5/N Copy/Disabled wSignal Specification'
 * '<S266>' : 'codegen/control/PID Controller5/N Gain/Disabled'
 * '<S267>' : 'codegen/control/PID Controller5/P Copy/Disabled'
 * '<S268>' : 'codegen/control/PID Controller5/Parallel P Gain/Internal Parameters'
 * '<S269>' : 'codegen/control/PID Controller5/Reset Signal/Disabled'
 * '<S270>' : 'codegen/control/PID Controller5/Saturation/Passthrough'
 * '<S271>' : 'codegen/control/PID Controller5/Saturation Fdbk/Disabled'
 * '<S272>' : 'codegen/control/PID Controller5/Sum/Sum_PI'
 * '<S273>' : 'codegen/control/PID Controller5/Sum Fdbk/Disabled'
 * '<S274>' : 'codegen/control/PID Controller5/Tracking Mode/Disabled'
 * '<S275>' : 'codegen/control/PID Controller5/Tracking Mode Sum/Passthrough'
 * '<S276>' : 'codegen/control/PID Controller5/Tsamp - Integral/External Ts'
 * '<S277>' : 'codegen/control/PID Controller5/Tsamp - Ngain/Passthrough'
 * '<S278>' : 'codegen/control/PID Controller5/postSat Signal/Forward_Path'
 * '<S279>' : 'codegen/control/PID Controller5/preInt Signal/Internal PreInt'
 * '<S280>' : 'codegen/control/PID Controller5/preSat Signal/Forward_Path'
 * '<S281>' : 'codegen/control/PID Controller6/Anti-windup'
 * '<S282>' : 'codegen/control/PID Controller6/D Gain'
 * '<S283>' : 'codegen/control/PID Controller6/External Derivative'
 * '<S284>' : 'codegen/control/PID Controller6/Filter'
 * '<S285>' : 'codegen/control/PID Controller6/Filter ICs'
 * '<S286>' : 'codegen/control/PID Controller6/I Gain'
 * '<S287>' : 'codegen/control/PID Controller6/Ideal P Gain'
 * '<S288>' : 'codegen/control/PID Controller6/Ideal P Gain Fdbk'
 * '<S289>' : 'codegen/control/PID Controller6/Integrator'
 * '<S290>' : 'codegen/control/PID Controller6/Integrator ICs'
 * '<S291>' : 'codegen/control/PID Controller6/N Copy'
 * '<S292>' : 'codegen/control/PID Controller6/N Gain'
 * '<S293>' : 'codegen/control/PID Controller6/P Copy'
 * '<S294>' : 'codegen/control/PID Controller6/Parallel P Gain'
 * '<S295>' : 'codegen/control/PID Controller6/Reset Signal'
 * '<S296>' : 'codegen/control/PID Controller6/Saturation'
 * '<S297>' : 'codegen/control/PID Controller6/Saturation Fdbk'
 * '<S298>' : 'codegen/control/PID Controller6/Sum'
 * '<S299>' : 'codegen/control/PID Controller6/Sum Fdbk'
 * '<S300>' : 'codegen/control/PID Controller6/Tracking Mode'
 * '<S301>' : 'codegen/control/PID Controller6/Tracking Mode Sum'
 * '<S302>' : 'codegen/control/PID Controller6/Tsamp - Integral'
 * '<S303>' : 'codegen/control/PID Controller6/Tsamp - Ngain'
 * '<S304>' : 'codegen/control/PID Controller6/postSat Signal'
 * '<S305>' : 'codegen/control/PID Controller6/preInt Signal'
 * '<S306>' : 'codegen/control/PID Controller6/preSat Signal'
 * '<S307>' : 'codegen/control/PID Controller6/Anti-windup/Passthrough'
 * '<S308>' : 'codegen/control/PID Controller6/D Gain/Disabled'
 * '<S309>' : 'codegen/control/PID Controller6/External Derivative/Disabled'
 * '<S310>' : 'codegen/control/PID Controller6/Filter/Disabled'
 * '<S311>' : 'codegen/control/PID Controller6/Filter ICs/Disabled'
 * '<S312>' : 'codegen/control/PID Controller6/I Gain/Internal Parameters'
 * '<S313>' : 'codegen/control/PID Controller6/Ideal P Gain/Passthrough'
 * '<S314>' : 'codegen/control/PID Controller6/Ideal P Gain Fdbk/Disabled'
 * '<S315>' : 'codegen/control/PID Controller6/Integrator/Discrete'
 * '<S316>' : 'codegen/control/PID Controller6/Integrator ICs/Internal IC'
 * '<S317>' : 'codegen/control/PID Controller6/N Copy/Disabled wSignal Specification'
 * '<S318>' : 'codegen/control/PID Controller6/N Gain/Disabled'
 * '<S319>' : 'codegen/control/PID Controller6/P Copy/Disabled'
 * '<S320>' : 'codegen/control/PID Controller6/Parallel P Gain/Internal Parameters'
 * '<S321>' : 'codegen/control/PID Controller6/Reset Signal/Disabled'
 * '<S322>' : 'codegen/control/PID Controller6/Saturation/Passthrough'
 * '<S323>' : 'codegen/control/PID Controller6/Saturation Fdbk/Disabled'
 * '<S324>' : 'codegen/control/PID Controller6/Sum/Sum_PI'
 * '<S325>' : 'codegen/control/PID Controller6/Sum Fdbk/Disabled'
 * '<S326>' : 'codegen/control/PID Controller6/Tracking Mode/Disabled'
 * '<S327>' : 'codegen/control/PID Controller6/Tracking Mode Sum/Passthrough'
 * '<S328>' : 'codegen/control/PID Controller6/Tsamp - Integral/External Ts'
 * '<S329>' : 'codegen/control/PID Controller6/Tsamp - Ngain/Passthrough'
 * '<S330>' : 'codegen/control/PID Controller6/postSat Signal/Forward_Path'
 * '<S331>' : 'codegen/control/PID Controller6/preInt Signal/Internal PreInt'
 * '<S332>' : 'codegen/control/PID Controller6/preSat Signal/Forward_Path'
 */
#endif                                 /* control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
