/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control.c
 *
 * Code generated for Simulink model 'control'.
 *
 * Model version                  : 3.11
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Wed Nov 26 17:03:59 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "control.h"
#include <math.h>
#include <emmintrin.h>
#include "rtwtypes.h"
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

/* Model step function */
void control_step(void)
{
  __m128d tmp;
  real_T rtb_Integrator[6];
  real_T rtb_TmpSignalConversionAtSFunct[6];
  real_T R_L;
  real_T R_R;
  real_T alpha;
  real_T rtb_PulseGenerator;
  real_T rtb_TmpSignalConversionAtSFun_0;
  real_T rtb_TmpSignalConversionAtSFun_1;
  real_T rtb_TmpSignalConversionAtSFun_2;
  real_T rtb_deltaR;
  real_T rtb_v_out_f;
  int32_T i;
  int32_T i_0;
  boolean_T x[6];
  boolean_T exitg1;
  boolean_T y;

  /* Outport: '<Root>/controlb' */
  for (i = 0; i < 6; i++) {
    /* UnitDelay: '<S1>/Unit Delay' */
    rtb_PulseGenerator = rtDW.UnitDelay_DSTATE[i];

    /* Saturate: '<S1>/Saturation' */
    if (rtb_PulseGenerator > 24.0) {
      rtY.controlb[i] = 24.0;
    } else if (rtb_PulseGenerator < -24.0) {
      rtY.controlb[i] = -24.0;
    } else {
      rtY.controlb[i] = rtb_PulseGenerator;
    }

    /* End of Saturate: '<S1>/Saturation' */
  }

  /* End of Outport: '<Root>/controlb' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator' */
  rtb_PulseGenerator = ((rtDW.clockTickCounter < 1) && (rtDW.clockTickCounter >=
    0));
  if (rtDW.clockTickCounter >= 9) {
    rtDW.clockTickCounter = 0;
  } else {
    rtDW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator' */

  /* Saturate: '<S1>/Saturation2' incorporates:
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  if (rtDW.UnitDelay1_DSTATE[0] > 1.0) {
    alpha = 1.0;
  } else if (rtDW.UnitDelay1_DSTATE[0] < -1.0) {
    alpha = -1.0;
  } else {
    alpha = rtDW.UnitDelay1_DSTATE[0];
  }

  /* Signum: '<S1>/Sign' incorporates:
   *  Abs: '<S1>/Abs'
   *  Gain: '<S1>/Gain'
   */
  if (rtIsNaN(-alpha)) {
    rtb_deltaR = (rtNaN);
  } else if (-alpha < 0.0) {
    /* Saturate: '<S1>/Saturation1' */
    rtb_deltaR = 0.0;
  } else {
    rtb_deltaR = (-alpha > 0.0);
  }

  /* Outport: '<Root>/pwmrev' incorporates:
   *  Gain: '<S1>/Gain1'
   *  Saturate: '<S1>/Saturation1'
   */
  rtY.pwmrev[0] = 5.0 * rtb_deltaR;

  /* Outport: '<Root>/pwnenable' incorporates:
   *  Abs: '<S1>/Abs'
   *  Gain: '<S1>/Gain2'
   *  Product: '<S1>/Product'
   */
  rtY.pwnenable[0] = rtb_PulseGenerator * fabs(alpha) * 5.0;

  /* Saturate: '<S1>/Saturation2' incorporates:
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  if (rtDW.UnitDelay1_DSTATE[1] > 1.0) {
    alpha = 1.0;
  } else if (rtDW.UnitDelay1_DSTATE[1] < -1.0) {
    alpha = -1.0;
  } else {
    alpha = rtDW.UnitDelay1_DSTATE[1];
  }

  /* Signum: '<S1>/Sign' incorporates:
   *  Abs: '<S1>/Abs'
   *  Gain: '<S1>/Gain'
   */
  if (rtIsNaN(-alpha)) {
    rtb_deltaR = (rtNaN);
  } else if (-alpha < 0.0) {
    /* Saturate: '<S1>/Saturation1' */
    rtb_deltaR = 0.0;
  } else {
    rtb_deltaR = (-alpha > 0.0);
  }

  /* Outport: '<Root>/pwmrev' incorporates:
   *  Gain: '<S1>/Gain1'
   *  Saturate: '<S1>/Saturation1'
   */
  rtY.pwmrev[1] = 5.0 * rtb_deltaR;

  /* Outport: '<Root>/pwnenable' incorporates:
   *  Abs: '<S1>/Abs'
   *  Gain: '<S1>/Gain2'
   *  Product: '<S1>/Product'
   */
  rtY.pwnenable[1] = rtb_PulseGenerator * fabs(alpha) * 5.0;

  /* Saturate: '<S1>/Saturation2' incorporates:
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  if (rtDW.UnitDelay1_DSTATE[2] > 1.0) {
    alpha = 1.0;
  } else if (rtDW.UnitDelay1_DSTATE[2] < -1.0) {
    alpha = -1.0;
  } else {
    alpha = rtDW.UnitDelay1_DSTATE[2];
  }

  /* Signum: '<S1>/Sign' incorporates:
   *  Abs: '<S1>/Abs'
   *  Gain: '<S1>/Gain'
   */
  if (rtIsNaN(-alpha)) {
    rtb_deltaR = (rtNaN);
  } else if (-alpha < 0.0) {
    /* Saturate: '<S1>/Saturation1' */
    rtb_deltaR = 0.0;
  } else {
    rtb_deltaR = (-alpha > 0.0);
  }

  /* Outport: '<Root>/pwmrev' incorporates:
   *  Gain: '<S1>/Gain1'
   *  Saturate: '<S1>/Saturation1'
   */
  rtY.pwmrev[2] = 5.0 * rtb_deltaR;

  /* Outport: '<Root>/pwnenable' incorporates:
   *  Abs: '<S1>/Abs'
   *  Gain: '<S1>/Gain2'
   *  Product: '<S1>/Product'
   */
  rtY.pwnenable[2] = rtb_PulseGenerator * fabs(alpha) * 5.0;

  /* Saturate: '<S1>/Saturation2' incorporates:
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  if (rtDW.UnitDelay1_DSTATE[3] > 1.0) {
    alpha = 1.0;
  } else if (rtDW.UnitDelay1_DSTATE[3] < -1.0) {
    alpha = -1.0;
  } else {
    alpha = rtDW.UnitDelay1_DSTATE[3];
  }

  /* Signum: '<S1>/Sign' incorporates:
   *  Abs: '<S1>/Abs'
   *  Gain: '<S1>/Gain'
   */
  if (rtIsNaN(-alpha)) {
    rtb_deltaR = (rtNaN);
  } else if (-alpha < 0.0) {
    /* Saturate: '<S1>/Saturation1' */
    rtb_deltaR = 0.0;
  } else {
    rtb_deltaR = (-alpha > 0.0);
  }

  /* Outport: '<Root>/pwmrev' incorporates:
   *  Gain: '<S1>/Gain1'
   *  Saturate: '<S1>/Saturation1'
   */
  rtY.pwmrev[3] = 5.0 * rtb_deltaR;

  /* Outport: '<Root>/pwnenable' incorporates:
   *  Abs: '<S1>/Abs'
   *  Gain: '<S1>/Gain2'
   *  Product: '<S1>/Product'
   */
  rtY.pwnenable[3] = rtb_PulseGenerator * fabs(alpha) * 5.0;
  for (i = 0; i <= 4; i += 2) {
    /* Outport: '<Root>/desspeed' incorporates:
     *  UnitDelay: '<S1>/Unit Delay2'
     */
    tmp = _mm_loadu_pd(&rtDW.UnitDelay2_DSTATE[i]);
    _mm_storeu_pd(&rtY.desspeed[i], tmp);

    /* Sum: '<S1>/Sum' incorporates:
     *  DiscreteIntegrator: '<S41>/Integrator'
     *  Inport: '<Root>/actspeed'
     *  Outport: '<Root>/desspeed'
     *  UnitDelay: '<S1>/Unit Delay2'
     */
    _mm_storeu_pd(&rtb_Integrator[i], _mm_sub_pd(tmp, _mm_loadu_pd
      (&rtU.actspeed[i])));
  }

  /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
   *  Inport: '<Root>/R'
   *  Inport: '<Root>/dist2goal'
   */
  if (rtU.R == 0.0) {
    alpha = 0.0;
  } else {
    alpha = 360.0 * rtU.dist2goal / (6.2831853071795862 * rtU.R);
  }

  rtb_PulseGenerator = fabs(rtU.R);
  if (alpha < 0.0) {
    R_L = rtb_PulseGenerator + 0.185;
    R_R = rtb_PulseGenerator - 0.185;
    alpha = atan(0.57 / (rtb_PulseGenerator + 0.185));
    rtb_deltaR = atan(0.57 / (rtb_PulseGenerator - 0.185));
  } else if (alpha > 0.0) {
    R_L = rtb_PulseGenerator - 0.185;
    R_R = rtb_PulseGenerator + 0.185;
    alpha = -atan(0.57 / (rtb_PulseGenerator - 0.185));
    rtb_deltaR = -atan(0.57 / (rtb_PulseGenerator + 0.185));
  } else {
    alpha = 0.0;
    rtb_deltaR = 0.0;
    R_L = rtb_PulseGenerator;
    R_R = rtb_PulseGenerator;
  }

  /* MATLAB Function: '<S1>/MATLAB Function2' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Inport: '<Root>/dist2goal'
   */
  if (rtU.dist2goal <= 1.0) {
    rtb_v_out_f = 0.0;
  } else if (rtU.dist2goal <= 10.0) {
    rtb_v_out_f = 0.15;
  } else {
    rtb_v_out_f = 0.3;
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function2' */

  /* MATLAB Function: '<S1>/MATLAB Function1' incorporates:
   *  Constant: '<S1>/Constant2'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_1 = rtb_v_out_f / 0.1;
  rtb_TmpSignalConversionAtSFun_0 = sqrt(R_L * R_L + 0.32489999999999997) *
    rtb_TmpSignalConversionAtSFun_1 / rtb_PulseGenerator;

  /* SignalConversion generated from: '<S5>/ SFunction ' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function1'
   *  MATLAB Function: '<S1>/MATLAB Function3'
   */
  rtb_TmpSignalConversionAtSFunct[0] = rtb_TmpSignalConversionAtSFun_0;

  /* MATLAB Function: '<S1>/MATLAB Function1' incorporates:
   *  Constant: '<S1>/Constant2'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_2 = rtb_PulseGenerator * 0.1;

  /* SignalConversion generated from: '<S5>/ SFunction ' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   *  MATLAB Function: '<S1>/MATLAB Function1'
   *  MATLAB Function: '<S1>/MATLAB Function3'
   */
  rtb_TmpSignalConversionAtSFunct[1] = rtb_v_out_f * R_L /
    rtb_TmpSignalConversionAtSFun_2;
  rtb_TmpSignalConversionAtSFunct[2] = rtb_TmpSignalConversionAtSFun_0;

  /* MATLAB Function: '<S1>/MATLAB Function1' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_0 = sqrt(R_R * R_R + 0.32489999999999997) *
    rtb_TmpSignalConversionAtSFun_1 / rtb_PulseGenerator;

  /* SignalConversion generated from: '<S5>/ SFunction ' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   *  MATLAB Function: '<S1>/MATLAB Function1'
   *  MATLAB Function: '<S1>/MATLAB Function3'
   */
  rtb_TmpSignalConversionAtSFunct[3] = rtb_TmpSignalConversionAtSFun_0;
  rtb_TmpSignalConversionAtSFunct[4] = rtb_v_out_f * R_R /
    rtb_TmpSignalConversionAtSFun_2;
  rtb_TmpSignalConversionAtSFunct[5] = rtb_TmpSignalConversionAtSFun_0;

  /* Outport: '<Root>/desang' incorporates:
   *  Gain: '<S1>/Gain4'
   *  Gain: '<S1>/Gain5'
   */
  rtY.desang[0] = alpha;
  rtY.desang[1] = -alpha;
  rtY.desang[2] = rtb_deltaR;
  rtY.desang[3] = -rtb_deltaR;

  /* Update for UnitDelay: '<S1>/Unit Delay1' incorporates:
   *  Gain: '<S1>/Gain4'
   *  Gain: '<S1>/Gain5'
   *  Inport: '<Root>/actang'
   *  Sum: '<S1>/Sum1'
   */
  _mm_storeu_pd(&rtDW.UnitDelay1_DSTATE[0], _mm_sub_pd(_mm_set_pd(-alpha, alpha),
    _mm_loadu_pd(&rtU.actang[0])));
  _mm_storeu_pd(&rtDW.UnitDelay1_DSTATE[2], _mm_sub_pd(_mm_set_pd(-rtb_deltaR,
    rtb_deltaR), _mm_loadu_pd(&rtU.actang[2])));
  for (i = 0; i < 6; i++) {
    /* MATLAB Function: '<S1>/MATLAB Function3' incorporates:
     *  UnitDelay: '<S1>/Unit Delay2'
     */
    if (rtDW.UnitDelay2_DSTATE[i] < rtb_TmpSignalConversionAtSFunct[i]) {
      rtDW.v[i] += 0.0007;
      for (i_0 = 0; i_0 < 6; i_0++) {
        x[i_0] = (rtDW.v[i_0] > rtb_TmpSignalConversionAtSFunct[i]);
      }

      y = true;
      i_0 = 0;
      exitg1 = false;
      while ((!exitg1) && (i_0 < 6)) {
        if (!x[i_0]) {
          y = false;
          exitg1 = true;
        } else {
          i_0++;
        }
      }

      if (y) {
        rtDW.v[i] = rtb_TmpSignalConversionAtSFunct[i];
      }
    } else {
      rtb_PulseGenerator = rtDW.v[i] - 0.002;
      rtDW.v[i] = rtb_PulseGenerator;
      if (rtb_PulseGenerator < 0.0) {
        rtDW.v[i] = 0.0;
      }
    }

    /* Gain: '<S46>/Proportional Gain' incorporates:
     *  DiscreteIntegrator: '<S41>/Integrator'
     */
    rtb_PulseGenerator = rtb_Integrator[i];

    /* DiscreteIntegrator: '<S41>/Integrator' */
    alpha = rtDW.Integrator_DSTATE[i];

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  DiscreteIntegrator: '<S41>/Integrator'
     *  Gain: '<S46>/Proportional Gain'
     *  Sum: '<S50>/Sum'
     */
    rtDW.UnitDelay_DSTATE[i] = 4.0 * rtb_PulseGenerator + alpha;

    /* Update for UnitDelay: '<S1>/Unit Delay2' incorporates:
     *  MATLAB Function: '<S1>/MATLAB Function3'
     */
    rtDW.UnitDelay2_DSTATE[i] = rtDW.v[i];

    /* Update for DiscreteIntegrator: '<S41>/Integrator' incorporates:
     *  Gain: '<S38>/Integral Gain'
     */
    rtDW.Integrator_DSTATE[i] = 0.8 * rtb_PulseGenerator * 0.001 + alpha;
  }
}

/* Model initialize function */
void control_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
