/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_drive_manual_webots.c
 *
 * Code generated for Simulink model 'control_drive_manual_webots'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Mon May 18 12:32:52 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "control_drive_manual_webots.h"
#include <math.h>
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
extern real_T rt_roundd_snf(real_T u);
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void control_drive_manual_webots_step(void)
{
  real_T R_left;
  real_T R_right;
  real_T controlLF_tmp;
  real_T controlLF_tmp_tmp;
  real_T controlLM_tmp;
  real_T rtb_R;
  real_T rtb_deltaL;
  real_T rtb_deltaR;

  /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
   *  Constant: '<S1>/integer maximum1'
   *  Constant: '<S1>/smallest turn radius'
   *  Inport: '<Root>/controllerSteering'
   */
  if (rtU.controllerSteering != 0.0) {
    rtb_R = 0.0;
  } else {
    rtb_R = 3.0 / (rtU.controllerSteering / 2.147483647E+9);
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function' */

  /* MATLAB Function: '<S1>/getting the steering angles and turing radii' incorporates:
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant6'
   */
  if (rtb_R < 0.0) {
    R_left = rtb_R + 0.37;
    R_right = rtb_R - 0.37;
    rtb_deltaL = atan(0.57 / (rtb_R + 0.37));
    rtb_deltaR = atan(0.57 / (rtb_R - 0.37));
  } else if (rtb_R > 0.0) {
    R_left = rtb_R - 0.37;
    R_right = rtb_R + 0.37;
    rtb_deltaL = -atan(0.57 / (rtb_R - 0.37));
    rtb_deltaR = -atan(0.57 / (rtb_R + 0.37));
  } else {
    rtb_deltaL = 0.0;
    rtb_deltaR = 0.0;
    R_left = rtb_R;
    R_right = rtb_R;
  }

  /* MATLAB Function: '<S1>/getting the wheel speeds from the turning radii' incorporates:
   *  Constant: '<S1>/Constant2'
   *  MATLAB Function: '<S1>/getting the steering angles and turing radii'
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  if (rtb_R == 0.0) {
    controlLF_tmp = rtDW.UnitDelay2_DSTATE / 0.1;

    /* Outport: '<Root>/controlLF' incorporates:
     *  Constant: '<S1>/Constant2'
     *  UnitDelay: '<S1>/Unit Delay2'
     */
    rtY.controlLF = controlLF_tmp;

    /* Outport: '<Root>/controlLM' */
    rtY.controlLM = controlLF_tmp;

    /* Outport: '<Root>/controlLB' */
    rtY.controlLB = controlLF_tmp;

    /* Outport: '<Root>/controlRF' */
    rtY.controlRF = controlLF_tmp;

    /* Outport: '<Root>/controlRM' */
    rtY.controlRM = controlLF_tmp;

    /* Outport: '<Root>/controlRB' */
    rtY.controlRB = controlLF_tmp;
  } else {
    controlLF_tmp_tmp = rtDW.UnitDelay2_DSTATE / 0.1;
    controlLF_tmp = sqrt(R_left * R_left + 0.081224999999999992) *
      controlLF_tmp_tmp / rtb_R;

    /* Outport: '<Root>/controlLF' incorporates:
     *  Constant: '<S1>/Constant2'
     *  MATLAB Function: '<S1>/getting the steering angles and turing radii'
     *  UnitDelay: '<S1>/Unit Delay2'
     */
    rtY.controlLF = controlLF_tmp;
    controlLM_tmp = rtb_R * 0.1;

    /* Outport: '<Root>/controlLM' incorporates:
     *  Constant: '<S1>/Constant2'
     *  MATLAB Function: '<S1>/getting the steering angles and turing radii'
     *  UnitDelay: '<S1>/Unit Delay2'
     */
    rtY.controlLM = rtDW.UnitDelay2_DSTATE * R_left / controlLM_tmp;

    /* Outport: '<Root>/controlLB' */
    rtY.controlLB = controlLF_tmp;
    rtb_R = sqrt(R_right * R_right + 0.081224999999999992) * controlLF_tmp_tmp /
      rtb_R;

    /* Outport: '<Root>/controlRF' incorporates:
     *  MATLAB Function: '<S1>/getting the steering angles and turing radii'
     */
    rtY.controlRF = rtb_R;

    /* Outport: '<Root>/controlRM' incorporates:
     *  MATLAB Function: '<S1>/getting the steering angles and turing radii'
     *  UnitDelay: '<S1>/Unit Delay2'
     */
    rtY.controlRM = rtDW.UnitDelay2_DSTATE * R_right / controlLM_tmp;

    /* Outport: '<Root>/controlRB' */
    rtY.controlRB = rtb_R;
  }

  /* End of MATLAB Function: '<S1>/getting the wheel speeds from the turning radii' */

  /* Outport: '<Root>/stepperLFSteps' incorporates:
   *  Constant: '<S1>/Constant7'
   *  Gain: '<S1>/Gain'
   *  Product: '<S1>/Divide2'
   *  Rounding: '<S1>/Round1'
   */
  rtY.stepperLFSteps = rt_roundd_snf(57.295779513082323 * rtb_deltaL / 1.8);

  /* Outport: '<Root>/stepperLBSteps' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Gain: '<S1>/Gain1'
   *  Gain: '<S1>/Gain4'
   *  Product: '<S1>/Divide1'
   *  Rounding: '<S1>/Round2'
   */
  rtY.stepperLBSteps = rt_roundd_snf(57.295779513082323 * -rtb_deltaL / 1.8);

  /* Outport: '<Root>/stepperRFSteps' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Gain: '<S1>/Gain2'
   *  Product: '<S1>/Divide3'
   *  Rounding: '<S1>/Round3'
   */
  rtY.stepperRFSteps = rt_roundd_snf(57.295779513082323 * rtb_deltaR / 1.8);

  /* Outport: '<Root>/stepperRBSteps' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Gain: '<S1>/Gain3'
   *  Gain: '<S1>/Gain5'
   *  Product: '<S1>/Divide4'
   *  Rounding: '<S1>/Round4'
   */
  rtY.stepperRBSteps = rt_roundd_snf(57.295779513082323 * -rtb_deltaR / 1.8);

  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/integer maximum'
   *  Constant: '<S1>/max speed'
   *  Inport: '<Root>/controllerSpeed'
   *  Product: '<S1>/Divide'
   */
  rtb_R = rtU.controllerSpeed / 2.147483647E+9 * 0.7;

  /* MATLAB Function: '<S1>/setting the desired speed of the shassis' incorporates:
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   *  Inport: '<Root>/deltaTime'
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  rtb_deltaL = rtDW.UnitDelay2_DSTATE;
  if (rtDW.UnitDelay2_DSTATE >= 0.0) {
    if (rtDW.UnitDelay2_DSTATE < rtb_R) {
      rtb_deltaL = 0.05 * rtU.deltaTime + rtDW.UnitDelay2_DSTATE;
    }

    if (rtb_deltaL > rtb_R) {
      rtb_deltaL -= 0.1 * rtU.deltaTime;
    }
  }

  if (rtb_deltaL <= 0.0) {
    if (rtb_deltaL > rtb_R) {
      rtb_deltaL -= 0.05 * rtU.deltaTime;
    }

    if (rtb_deltaL < rtb_R) {
      rtb_deltaL += 0.1 * rtU.deltaTime;
    }
  }

  /* Update for UnitDelay: '<S1>/Unit Delay2' incorporates:
   *  MATLAB Function: '<S1>/setting the desired speed of the shassis'
   */
  rtDW.UnitDelay2_DSTATE = rtb_deltaL;
}

/* Model initialize function */
void control_drive_manual_webots_initialize(void)
{
  /* ConstCode for Outport: '<Root>/stepperLFFrequency' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtY.stepperLFFrequency = 100.0;

  /* ConstCode for Outport: '<Root>/stepperLBFrequency' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtY.stepperLBFrequency = 100.0;

  /* ConstCode for Outport: '<Root>/stepperRFFrequency' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtY.stepperRFFrequency = 100.0;

  /* ConstCode for Outport: '<Root>/stepperRBFrequency' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtY.stepperRBFrequency = 100.0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
