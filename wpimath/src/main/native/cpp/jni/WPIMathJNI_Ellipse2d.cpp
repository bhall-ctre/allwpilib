// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include <jni.h>

#include <wpi/array.h>
#include <wpi/jni_util.h>

#include "edu_wpi_first_math_WPIMathJNI.h"
#include "frc/geometry/Ellipse2d.h"

using namespace wpi::java;

extern "C" {

/*
 * Class:     edu_wpi_first_math_WPIMathJNI
 * Method:    ellipse2dFindNearestPoint
 * Signature: (DDDDDDD[D)V
 */
JNIEXPORT void JNICALL
Java_edu_wpi_first_math_WPIMathJNI_ellipse2dFindNearestPoint
  (JNIEnv* env, jclass, jdouble centerX, jdouble centerY, jdouble centerHeading,
   jdouble xSemiAxis, jdouble ySemiAxis, jdouble pointX, jdouble pointY,
   jdoubleArray nearestPoint)
{
  auto point =
      frc::Ellipse2d{
          frc::Pose2d{units::meter_t{centerX}, units::meter_t{centerY},
                      units::radian_t{centerHeading}},
          units::meter_t{xSemiAxis}, units::meter_t{ySemiAxis}}
          .FindNearestPoint({units::meter_t{pointX}, units::meter_t{pointY}});

  wpi::array buf{point.X().value(), point.Y().value()};
  env->SetDoubleArrayRegion(nearestPoint, 0, 2, buf.data());
}

}  // extern "C"
