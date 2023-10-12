#pragma once
#include <iostream>
#include <cmath>
#include <Windows.h>

// 速度を角度に変換する関数
void velocitytoangle(double velocity, double time) {
    // 速度を RPM から rad/s に変換します
    double velocity_rad_s = velocity * 2 * M_PI / 60;

    // 角度を計算する
    double angle_rad = velocity_rad_s * time;

    // 角度をラジアンから度に変換します
    double angle_deg = angle_rad * 180 / M_PI;

    return angle_deg;
}
