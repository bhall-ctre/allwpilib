// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

// THIS FILE WAS AUTO-GENERATED BY ./ntcore/generate_topics.py. DO NOT MODIFY

package edu.wpi.first.networktables;

/** NetworkTables timestamped String. */
@SuppressWarnings("PMD.ArrayIsStoredDirectly")
public final class TimestampedString {
  /**
   * Create a timestamped value.
   *
   * @param timestamp timestamp in local time base
   * @param serverTime timestamp in server time base
   * @param value value
   */
  public TimestampedString(long timestamp, long serverTime, String value) {
    this.timestamp = timestamp;
    this.serverTime = serverTime;
    this.value = value;
  }

  /**
   * Timestamp in local time base.
   */
  @SuppressWarnings("MemberName")
  public final long timestamp;

  /**
   * Timestamp in server time base.  May be 0 or 1 for locally set values.
   */
  @SuppressWarnings("MemberName")
  public final long serverTime;

  /**
   * Value.
   */
  @SuppressWarnings("MemberName")
  public final String value;
}