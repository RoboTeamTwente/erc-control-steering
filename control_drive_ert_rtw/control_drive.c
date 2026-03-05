/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_drive.c
 *
 * Code generated for Simulink model 'control_drive'.
 *
 * Model version                  : 3.26
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Wed Mar  4 15:59:44 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: STMicroelectronics->ST10/Super10
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "control_drive.h"
#include "rtwtypes.h"
#include <math.h>
#include "math.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void MATLABFunction1(real_T rtu_current, real_T rtu_desired, real_T
  rtu_accelleration, real_T *rty_out);
static real_T rtGetNaN(void);
static real32_T rtGetNaNF(void);
extern real_T rtInf;
extern real_T rtMinusInf;
extern real_T rtNaN;
extern real32_T rtInfF;
extern real32_T rtMinusInfF;
extern real32_T rtNaNF;
static boolean_T rtIsInf(real_T value);
static boolean_T rtIsInfF(real32_T value);
static boolean_T rtIsNaN(real_T value);
static boolean_T rtIsNaNF(real32_T value);
real_T rtNaN = -(real_T)NAN;
real_T rtInf = (real_T)INFINITY;
real_T rtMinusInf = -(real_T)INFINITY;
real32_T rtNaNF = -(real32_T)NAN;
real32_T rtInfF = (real32_T)INFINITY;
real32_T rtMinusInfF = -(real32_T)INFINITY;

/* Return rtNaN needed by the generated code. */
static real_T rtGetNaN(void)
{
  return rtNaN;
}

/* Return rtNaNF needed by the generated code. */
static real32_T rtGetNaNF(void)
{
  return rtNaNF;
}

/* Test if value is infinite */
static boolean_T rtIsInf(real_T value)
{
  return (boolean_T)isinf(value);
}

/* Test if single-precision value is infinite */
static boolean_T rtIsInfF(real32_T value)
{
  return (boolean_T)isinf(value);
}

/* Test if value is not a number */
static boolean_T rtIsNaN(real_T value)
{
  return (boolean_T)(isnan(value) != 0);
}

/* Test if single-precision value is not a number */
static boolean_T rtIsNaNF(real32_T value)
{
  return (boolean_T)(isnan(value) != 0);
}

/*
 * Output and update for atomic system:
 *    '<S1>/MATLAB Function1'
 *    '<S1>/MATLAB Function2'
 *    '<S1>/MATLAB Function3'
 *    '<S1>/MATLAB Function4'
 *    '<S1>/MATLAB Function5'
 *    '<S1>/MATLAB Function6'
 */
static void MATLABFunction1(real_T rtu_current, real_T rtu_desired, real_T
  rtu_accelleration, real_T *rty_out)
{
  real_T current;
  current = rtu_current;
  if (rtu_current < rtu_desired) {
    current = rtu_current + rtu_accelleration;
  }

  if (current > rtu_desired) {
    current -= rtu_accelleration;
  }

  *rty_out = current;
}

/* Model step function */
void control_drive_step(void)
{
  real_T UnitDelay10_DSTATE_tmp;
  real_T UnitDelay8_DSTATE_tmp;
  real_T alpha;
  real_T rtb_Integrator;
  real_T rtb_Integrator_b_tmp;
  real_T rtb_Integrator_c;
  real_T rtb_Integrator_gs;
  real_T rtb_Integrator_o;
  real_T rtb_Product;
  real_T rtb_deltaR;
  real_T rtb_out_d;
  real_T rtb_v_out;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  rtb_Integrator_o = ((rtDW.clockTickCounter < 1L) && (rtDW.clockTickCounter >=
    0L));
  if (rtDW.clockTickCounter >= 1L) {
    rtDW.clockTickCounter = 0L;
  } else {
    rtDW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator1' */

  /* Outport: '<Root>/stepperLFENA' incorporates:
   *  Abs: '<S1>/Abs1'
   *  Constant: '<S2>/Constant'
   *  Gain: '<S1>/Gain6'
   *  Product: '<S1>/Product1'
   *  RelationalOperator: '<S2>/Compare'
   *  UnitDelay: '<S1>/Unit Delay12'
   */
  rtY.stepperLFENA = (real_T)(fabs(rtDW.UnitDelay12_DSTATE) > 0.017) *
    rtb_Integrator_o * 5.0;

  /* Signum: '<S1>/Sign2' incorporates:
   *  UnitDelay: '<S1>/Unit Delay12'
   */
  if (rtIsNaN(rtDW.UnitDelay12_DSTATE)) {
    /* Gain: '<S1>/Gain1' */
    rtb_Integrator_o = (rtNaN);
  } else if (rtDW.UnitDelay12_DSTATE < 0.0) {
    /* Gain: '<S1>/Gain1' */
    rtb_Integrator_o = 1.0;
  } else {
    /* Gain: '<S1>/Gain1' */
    rtb_Integrator_o = -(real_T)(rtDW.UnitDelay12_DSTATE > 0.0);
  }

  /* End of Signum: '<S1>/Sign2' */

  /* Saturate: '<S1>/Saturation6' */
  if (rtb_Integrator_o < 0.0) {
    rtb_Integrator_o = 0.0;
  }

  /* Outport: '<Root>/stepperLFREV' incorporates:
   *  Gain: '<S1>/Gain2'
   *  Saturate: '<S1>/Saturation6'
   */
  rtY.stepperLFREV = 5.0 * rtb_Integrator_o;

  /* Saturate: '<S1>/Saturation' incorporates:
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (rtDW.UnitDelay_DSTATE > 5.0) {
    /* Outport: '<Root>/controlLF' */
    rtY.controlLF = 5.0;
  } else if (rtDW.UnitDelay_DSTATE < -5.0) {
    /* Outport: '<Root>/controlLF' */
    rtY.controlLF = -5.0;
  } else {
    /* Outport: '<Root>/controlLF' */
    rtY.controlLF = rtDW.UnitDelay_DSTATE;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  rtb_Integrator_o = ((rtDW.clockTickCounter_j < 1L) && (rtDW.clockTickCounter_j
    >= 0L));
  if (rtDW.clockTickCounter_j >= 1L) {
    rtDW.clockTickCounter_j = 0L;
  } else {
    rtDW.clockTickCounter_j++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator2' */

  /* Outport: '<Root>/stepperLBENA' incorporates:
   *  Abs: '<S1>/Abs2'
   *  Constant: '<S3>/Constant'
   *  Gain: '<S1>/Gain8'
   *  Product: '<S1>/Product2'
   *  RelationalOperator: '<S3>/Compare'
   *  UnitDelay: '<S1>/Unit Delay13'
   */
  rtY.stepperLBENA = (real_T)(fabs(rtDW.UnitDelay13_DSTATE) > 0.017) *
    rtb_Integrator_o * 5.0;

  /* Signum: '<S1>/Sign1' incorporates:
   *  UnitDelay: '<S1>/Unit Delay13'
   */
  if (rtIsNaN(rtDW.UnitDelay13_DSTATE)) {
    /* Gain: '<S1>/Gain3' */
    rtb_Integrator_o = (rtNaN);
  } else if (rtDW.UnitDelay13_DSTATE < 0.0) {
    /* Gain: '<S1>/Gain3' */
    rtb_Integrator_o = 1.0;
  } else {
    /* Gain: '<S1>/Gain3' */
    rtb_Integrator_o = -(real_T)(rtDW.UnitDelay13_DSTATE > 0.0);
  }

  /* End of Signum: '<S1>/Sign1' */

  /* Saturate: '<S1>/Saturation7' */
  if (rtb_Integrator_o < 0.0) {
    rtb_Integrator_o = 0.0;
  }

  /* Outport: '<Root>/stepperLBREV' incorporates:
   *  Gain: '<S1>/Gain7'
   *  Saturate: '<S1>/Saturation7'
   */
  rtY.stepperLBREV = 5.0 * rtb_Integrator_o;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  rtb_Integrator_o = ((rtDW.clockTickCounter_e < 1L) && (rtDW.clockTickCounter_e
    >= 0L));
  if (rtDW.clockTickCounter_e >= 1L) {
    rtDW.clockTickCounter_e = 0L;
  } else {
    rtDW.clockTickCounter_e++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator3' */

  /* Outport: '<Root>/stepperRFENA' incorporates:
   *  Abs: '<S1>/Abs3'
   *  Constant: '<S4>/Constant'
   *  Gain: '<S1>/Gain11'
   *  Product: '<S1>/Product3'
   *  RelationalOperator: '<S4>/Compare'
   *  UnitDelay: '<S1>/Unit Delay14'
   */
  rtY.stepperRFENA = (real_T)(fabs(rtDW.UnitDelay14_DSTATE) > 0.017) *
    rtb_Integrator_o * 5.0;

  /* Signum: '<S1>/Sign3' incorporates:
   *  UnitDelay: '<S1>/Unit Delay14'
   */
  if (rtIsNaN(rtDW.UnitDelay14_DSTATE)) {
    /* Gain: '<S1>/Gain9' */
    rtb_Integrator_o = (rtNaN);
  } else if (rtDW.UnitDelay14_DSTATE < 0.0) {
    /* Gain: '<S1>/Gain9' */
    rtb_Integrator_o = 1.0;
  } else {
    /* Gain: '<S1>/Gain9' */
    rtb_Integrator_o = -(real_T)(rtDW.UnitDelay14_DSTATE > 0.0);
  }

  /* End of Signum: '<S1>/Sign3' */

  /* Saturate: '<S1>/Saturation8' */
  if (rtb_Integrator_o < 0.0) {
    rtb_Integrator_o = 0.0;
  }

  /* Outport: '<Root>/stepperRFREV' incorporates:
   *  Gain: '<S1>/Gain10'
   *  Saturate: '<S1>/Saturation8'
   */
  rtY.stepperRFREV = 5.0 * rtb_Integrator_o;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  rtb_Integrator_o = ((rtDW.clockTickCounter_p < 1L) && (rtDW.clockTickCounter_p
    >= 0L));
  if (rtDW.clockTickCounter_p >= 1L) {
    rtDW.clockTickCounter_p = 0L;
  } else {
    rtDW.clockTickCounter_p++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator4' */

  /* Outport: '<Root>/stepperRBENA' incorporates:
   *  Abs: '<S1>/Abs4'
   *  Constant: '<S5>/Constant'
   *  Gain: '<S1>/Gain13'
   *  Product: '<S1>/Product4'
   *  RelationalOperator: '<S5>/Compare'
   *  UnitDelay: '<S1>/Unit Delay15'
   */
  rtY.stepperRBENA = (real_T)(fabs(rtDW.UnitDelay15_DSTATE) > 0.017) *
    rtb_Integrator_o * 5.0;

  /* Signum: '<S1>/Sign4' incorporates:
   *  UnitDelay: '<S1>/Unit Delay15'
   */
  if (rtIsNaN(rtDW.UnitDelay15_DSTATE)) {
    /* Gain: '<S1>/Gain14' */
    rtb_Integrator_o = (rtNaN);
  } else if (rtDW.UnitDelay15_DSTATE < 0.0) {
    /* Gain: '<S1>/Gain14' */
    rtb_Integrator_o = 1.0;
  } else {
    /* Gain: '<S1>/Gain14' */
    rtb_Integrator_o = -(real_T)(rtDW.UnitDelay15_DSTATE > 0.0);
  }

  /* End of Signum: '<S1>/Sign4' */

  /* Saturate: '<S1>/Saturation9' */
  if (rtb_Integrator_o < 0.0) {
    rtb_Integrator_o = 0.0;
  }

  /* Outport: '<Root>/stepperRBREV' incorporates:
   *  Gain: '<S1>/Gain12'
   *  Saturate: '<S1>/Saturation9'
   */
  rtY.stepperRBREV = 5.0 * rtb_Integrator_o;

  /* Saturate: '<S1>/Saturation1' incorporates:
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  if (rtDW.UnitDelay2_DSTATE > 5.0) {
    /* Outport: '<Root>/controlLM' */
    rtY.controlLM = 5.0;
  } else if (rtDW.UnitDelay2_DSTATE < -5.0) {
    /* Outport: '<Root>/controlLM' */
    rtY.controlLM = -5.0;
  } else {
    /* Outport: '<Root>/controlLM' */
    rtY.controlLM = rtDW.UnitDelay2_DSTATE;
  }

  /* End of Saturate: '<S1>/Saturation1' */

  /* Saturate: '<S1>/Saturation2' incorporates:
   *  UnitDelay: '<S1>/Unit Delay4'
   */
  if (rtDW.UnitDelay4_DSTATE > 5.0) {
    /* Outport: '<Root>/controlLB' */
    rtY.controlLB = 5.0;
  } else if (rtDW.UnitDelay4_DSTATE < -5.0) {
    /* Outport: '<Root>/controlLB' */
    rtY.controlLB = -5.0;
  } else {
    /* Outport: '<Root>/controlLB' */
    rtY.controlLB = rtDW.UnitDelay4_DSTATE;
  }

  /* End of Saturate: '<S1>/Saturation2' */

  /* Saturate: '<S1>/Saturation3' incorporates:
   *  UnitDelay: '<S1>/Unit Delay6'
   */
  if (rtDW.UnitDelay6_DSTATE > 5.0) {
    /* Outport: '<Root>/controlRF' */
    rtY.controlRF = 5.0;
  } else if (rtDW.UnitDelay6_DSTATE < -5.0) {
    /* Outport: '<Root>/controlRF' */
    rtY.controlRF = -5.0;
  } else {
    /* Outport: '<Root>/controlRF' */
    rtY.controlRF = rtDW.UnitDelay6_DSTATE;
  }

  /* End of Saturate: '<S1>/Saturation3' */

  /* Saturate: '<S1>/Saturation4' incorporates:
   *  UnitDelay: '<S1>/Unit Delay8'
   */
  if (rtDW.UnitDelay8_DSTATE > 5.0) {
    /* Outport: '<Root>/controlRM' */
    rtY.controlRM = 5.0;
  } else if (rtDW.UnitDelay8_DSTATE < -5.0) {
    /* Outport: '<Root>/controlRM' */
    rtY.controlRM = -5.0;
  } else {
    /* Outport: '<Root>/controlRM' */
    rtY.controlRM = rtDW.UnitDelay8_DSTATE;
  }

  /* End of Saturate: '<S1>/Saturation4' */

  /* Saturate: '<S1>/Saturation5' incorporates:
   *  UnitDelay: '<S1>/Unit Delay10'
   */
  if (rtDW.UnitDelay10_DSTATE > 5.0) {
    /* Outport: '<Root>/controlRB' */
    rtY.controlRB = 5.0;
  } else if (rtDW.UnitDelay10_DSTATE < -5.0) {
    /* Outport: '<Root>/controlRB' */
    rtY.controlRB = -5.0;
  } else {
    /* Outport: '<Root>/controlRB' */
    rtY.controlRB = rtDW.UnitDelay10_DSTATE;
  }

  /* End of Saturate: '<S1>/Saturation5' */

  /* MATLAB Function: '<S1>/getting the steering angles and turing radii' incorporates:
   *  Inport: '<Root>/R'
   *  Inport: '<Root>/dist2goal'
   */
  if (rtU.R == 0.0) {
    alpha = 0.0;
  } else {
    alpha = rtU.dist2goal / rtU.R;
  }

  rtb_Integrator_o = fabs(rtU.R);
  if (alpha < 0.0) {
    rtb_Product = rtb_Integrator_o + 0.37;
    rtb_Integrator = rtb_Integrator_o - 0.37;
    alpha = atan(0.57 / (rtb_Integrator_o + 0.37));
    rtb_deltaR = atan(0.57 / (rtb_Integrator_o - 0.37));
  } else if (alpha > 0.0) {
    rtb_Product = rtb_Integrator_o - 0.37;
    rtb_Integrator = rtb_Integrator_o + 0.37;
    alpha = -atan(0.57 / (rtb_Integrator_o - 0.37));
    rtb_deltaR = -atan(0.57 / (rtb_Integrator_o + 0.37));
  } else {
    alpha = 0.0;
    rtb_deltaR = 0.0;
    rtb_Product = rtb_Integrator_o;
    rtb_Integrator = rtb_Integrator_o;
  }

  /* MATLAB Function: '<S1>/setting desired speed dependant on the goal' incorporates:
   *  Constant: '<S1>/desired speed'
   *  Inport: '<Root>/dist2goal'
   */
  if (rtU.dist2goal <= 1.0) {
    rtb_v_out = 0.0;
  } else if (rtU.dist2goal <= 2.0) {
    rtb_v_out = 0.35;
  } else {
    rtb_v_out = 0.7;
  }

  /* End of MATLAB Function: '<S1>/setting desired speed dependant on the goal' */

  /* MATLAB Function: '<S1>/getting the wheel speeds from the turning radii' incorporates:
   *  Constant: '<S1>/Constant2'
   *  MATLAB Function: '<S1>/getting the steering angles and turing radii'
   */
  if (rtb_Integrator_o > 0.0) {
    rtb_Integrator_gs = rtb_v_out / 0.1;
    rtb_out_d = sqrt(rtb_Product * rtb_Product + 0.081224999999999992) *
      rtb_Integrator_gs / rtb_Integrator_o;
    rtb_Integrator_b_tmp = rtb_Integrator_o * 0.1;
    rtb_Integrator_c = rtb_v_out * rtb_Product / rtb_Integrator_b_tmp;
    rtb_Integrator_gs = sqrt(rtb_Integrator * rtb_Integrator +
      0.081224999999999992) * rtb_Integrator_gs / rtb_Integrator_o;
    rtb_Integrator = rtb_v_out * rtb_Integrator / rtb_Integrator_b_tmp;
  } else {
    rtb_out_d = rtb_v_out / 0.1;
    rtb_Integrator_c = rtb_out_d;
    rtb_Integrator_gs = rtb_out_d;
    rtb_Integrator = rtb_out_d;
  }

  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/acceleration'
   *  Inport: '<Root>/deltaTime'
   */
  rtb_Product = 43.0 * rtU.deltaTime;

  /* MATLAB Function: '<S1>/getting the wheel speeds from the turning radii' */
  rtb_Integrator_b_tmp = rtb_out_d * 43.0;

  /* MATLAB Function: '<S1>/MATLAB Function1' incorporates:
   *  MATLAB Function: '<S1>/getting the wheel speeds from the turning radii'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  MATLABFunction1(rtDW.UnitDelay1_DSTATE, rtb_Integrator_b_tmp, rtb_Product,
                  &rtb_Integrator_o);

  /* MATLAB Function: '<S1>/MATLAB Function2' incorporates:
   *  MATLAB Function: '<S1>/getting the wheel speeds from the turning radii'
   *  UnitDelay: '<S1>/Unit Delay3'
   */
  MATLABFunction1(rtDW.UnitDelay3_DSTATE, rtb_Integrator_c * 43.0, rtb_Product,
                  &rtb_out_d);

  /* MATLAB Function: '<S1>/MATLAB Function3' incorporates:
   *  UnitDelay: '<S1>/Unit Delay5'
   */
  MATLABFunction1(rtDW.UnitDelay5_DSTATE, rtb_Integrator_b_tmp, rtb_Product,
                  &rtb_Integrator_c);

  /* MATLAB Function: '<S1>/getting the wheel speeds from the turning radii' */
  rtb_Integrator_b_tmp = rtb_Integrator_gs * 43.0;

  /* MATLAB Function: '<S1>/MATLAB Function4' incorporates:
   *  MATLAB Function: '<S1>/getting the wheel speeds from the turning radii'
   *  UnitDelay: '<S1>/Unit Delay7'
   */
  MATLABFunction1(rtDW.UnitDelay7_DSTATE, rtb_Integrator_b_tmp, rtb_Product,
                  &rtb_Integrator_gs);

  /* MATLAB Function: '<S1>/MATLAB Function5' incorporates:
   *  MATLAB Function: '<S1>/getting the wheel speeds from the turning radii'
   *  UnitDelay: '<S1>/Unit Delay9'
   */
  MATLABFunction1(rtDW.UnitDelay9_DSTATE, rtb_Integrator * 43.0, rtb_Product,
                  &rtb_v_out);

  /* MATLAB Function: '<S1>/MATLAB Function6' incorporates:
   *  UnitDelay: '<S1>/Unit Delay11'
   */
  MATLABFunction1(rtDW.UnitDelay11_DSTATE, rtb_Integrator_b_tmp, rtb_Product,
                  &rtb_Integrator);

  /* Update for UnitDelay: '<S1>/Unit Delay12' incorporates:
   *  Inport: '<Root>/stepperLFActualPosition'
   *  Sum: '<S1>/Sum7'
   */
  rtDW.UnitDelay12_DSTATE = alpha - rtU.stepperLFActualPosition;

  /* Gain: '<S60>/Proportional Gain' incorporates:
   *  Gain: '<S52>/Integral Gain'
   *  Inport: '<Root>/LFActualSpeed'
   *  Sum: '<S1>/Sum'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  rtb_Product = (rtDW.UnitDelay1_DSTATE - rtU.LFActualSpeed) * 0.2;

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  DiscreteIntegrator: '<S55>/Integrator'
   *  Gain: '<S60>/Proportional Gain'
   *  Sum: '<S64>/Sum'
   */
  rtDW.UnitDelay_DSTATE = rtb_Product + rtDW.Integrator_DSTATE_p;

  /* Update for UnitDelay: '<S1>/Unit Delay13' incorporates:
   *  Gain: '<S1>/Gain4'
   *  Inport: '<Root>/stepperLBActualPosition'
   *  Sum: '<S1>/Sum1'
   */
  rtDW.UnitDelay13_DSTATE = -alpha - rtU.stepperLBActualPosition;

  /* Update for UnitDelay: '<S1>/Unit Delay14' incorporates:
   *  Inport: '<Root>/stepperRFActualPosition'
   *  Sum: '<S1>/Sum8'
   */
  rtDW.UnitDelay14_DSTATE = rtb_deltaR - rtU.stepperRFActualPosition;

  /* Update for UnitDelay: '<S1>/Unit Delay15' incorporates:
   *  Gain: '<S1>/Gain5'
   *  Inport: '<Root>/stepperRBActualPosition'
   *  Sum: '<S1>/Sum9'
   */
  rtDW.UnitDelay15_DSTATE = -rtb_deltaR - rtU.stepperRBActualPosition;

  /* Gain: '<S112>/Proportional Gain' incorporates:
   *  Gain: '<S104>/Integral Gain'
   *  Inport: '<Root>/LMActualSpeed'
   *  Sum: '<S1>/Sum2'
   *  UnitDelay: '<S1>/Unit Delay3'
   */
  alpha = (rtDW.UnitDelay3_DSTATE - rtU.LMActualSpeed) * 0.2;

  /* Update for UnitDelay: '<S1>/Unit Delay2' incorporates:
   *  DiscreteIntegrator: '<S107>/Integrator'
   *  Gain: '<S112>/Proportional Gain'
   *  Sum: '<S116>/Sum'
   */
  rtDW.UnitDelay2_DSTATE = alpha + rtDW.Integrator_DSTATE;

  /* Gain: '<S164>/Proportional Gain' incorporates:
   *  Gain: '<S156>/Integral Gain'
   *  Inport: '<Root>/LBActualSpeed'
   *  Sum: '<S1>/Sum3'
   *  UnitDelay: '<S1>/Unit Delay5'
   */
  rtb_deltaR = (rtDW.UnitDelay5_DSTATE - rtU.LBActualSpeed) * 0.2;

  /* Update for UnitDelay: '<S1>/Unit Delay4' incorporates:
   *  DiscreteIntegrator: '<S159>/Integrator'
   *  Gain: '<S164>/Proportional Gain'
   *  Sum: '<S168>/Sum'
   */
  rtDW.UnitDelay4_DSTATE = rtb_deltaR + rtDW.Integrator_DSTATE_n;

  /* Gain: '<S216>/Proportional Gain' incorporates:
   *  Gain: '<S208>/Integral Gain'
   *  Inport: '<Root>/RFActualSpeed'
   *  Sum: '<S1>/Sum4'
   *  UnitDelay: '<S1>/Unit Delay7'
   */
  rtb_Integrator_b_tmp = (rtDW.UnitDelay7_DSTATE - rtU.RFActualSpeed) * 0.2;

  /* Update for UnitDelay: '<S1>/Unit Delay6' incorporates:
   *  DiscreteIntegrator: '<S211>/Integrator'
   *  Gain: '<S216>/Proportional Gain'
   *  Sum: '<S220>/Sum'
   */
  rtDW.UnitDelay6_DSTATE = rtb_Integrator_b_tmp + rtDW.Integrator_DSTATE_o;

  /* Gain: '<S268>/Proportional Gain' incorporates:
   *  Gain: '<S260>/Integral Gain'
   *  Inport: '<Root>/RMActualSpeed'
   *  Sum: '<S1>/Sum5'
   *  UnitDelay: '<S1>/Unit Delay9'
   */
  UnitDelay8_DSTATE_tmp = (rtDW.UnitDelay9_DSTATE - rtU.RMActualSpeed) * 0.2;

  /* Update for UnitDelay: '<S1>/Unit Delay8' incorporates:
   *  DiscreteIntegrator: '<S263>/Integrator'
   *  Gain: '<S268>/Proportional Gain'
   *  Sum: '<S272>/Sum'
   */
  rtDW.UnitDelay8_DSTATE = UnitDelay8_DSTATE_tmp + rtDW.Integrator_DSTATE_f;

  /* Gain: '<S320>/Proportional Gain' incorporates:
   *  Gain: '<S312>/Integral Gain'
   *  Inport: '<Root>/RBActualSpeed'
   *  Sum: '<S1>/Sum6'
   *  UnitDelay: '<S1>/Unit Delay11'
   */
  UnitDelay10_DSTATE_tmp = (rtDW.UnitDelay11_DSTATE - rtU.RBActualSpeed) * 0.2;

  /* Update for UnitDelay: '<S1>/Unit Delay10' incorporates:
   *  DiscreteIntegrator: '<S315>/Integrator'
   *  Gain: '<S320>/Proportional Gain'
   *  Sum: '<S324>/Sum'
   */
  rtDW.UnitDelay10_DSTATE = UnitDelay10_DSTATE_tmp + rtDW.Integrator_DSTATE_e;

  /* Update for UnitDelay: '<S1>/Unit Delay1' */
  rtDW.UnitDelay1_DSTATE = rtb_Integrator_o;

  /* Update for UnitDelay: '<S1>/Unit Delay3' */
  rtDW.UnitDelay3_DSTATE = rtb_out_d;

  /* Update for DiscreteIntegrator: '<S107>/Integrator' incorporates:
   *  Inport: '<Root>/deltaTime'
   *  Product: '<S120>/Uintegral*Ts Prod Out'
   */
  rtDW.Integrator_DSTATE += alpha * rtU.deltaTime;

  /* Update for UnitDelay: '<S1>/Unit Delay5' */
  rtDW.UnitDelay5_DSTATE = rtb_Integrator_c;

  /* Update for DiscreteIntegrator: '<S159>/Integrator' incorporates:
   *  Inport: '<Root>/deltaTime'
   *  Product: '<S172>/Uintegral*Ts Prod Out'
   */
  rtDW.Integrator_DSTATE_n += rtb_deltaR * rtU.deltaTime;

  /* Update for UnitDelay: '<S1>/Unit Delay7' */
  rtDW.UnitDelay7_DSTATE = rtb_Integrator_gs;

  /* Update for DiscreteIntegrator: '<S211>/Integrator' incorporates:
   *  Inport: '<Root>/deltaTime'
   *  Product: '<S224>/Uintegral*Ts Prod Out'
   */
  rtDW.Integrator_DSTATE_o += rtb_Integrator_b_tmp * rtU.deltaTime;

  /* Update for UnitDelay: '<S1>/Unit Delay9' */
  rtDW.UnitDelay9_DSTATE = rtb_v_out;

  /* Update for DiscreteIntegrator: '<S263>/Integrator' incorporates:
   *  Inport: '<Root>/deltaTime'
   *  Product: '<S276>/Uintegral*Ts Prod Out'
   */
  rtDW.Integrator_DSTATE_f += UnitDelay8_DSTATE_tmp * rtU.deltaTime;

  /* Update for UnitDelay: '<S1>/Unit Delay11' */
  rtDW.UnitDelay11_DSTATE = rtb_Integrator;

  /* Update for DiscreteIntegrator: '<S315>/Integrator' incorporates:
   *  Inport: '<Root>/deltaTime'
   *  Product: '<S328>/Uintegral*Ts Prod Out'
   */
  rtDW.Integrator_DSTATE_e += UnitDelay10_DSTATE_tmp * rtU.deltaTime;

  /* Update for DiscreteIntegrator: '<S55>/Integrator' incorporates:
   *  Inport: '<Root>/deltaTime'
   *  Product: '<S68>/Uintegral*Ts Prod Out'
   */
  rtDW.Integrator_DSTATE_p += rtb_Product * rtU.deltaTime;
}

/* Model initialize function */
void control_drive_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
