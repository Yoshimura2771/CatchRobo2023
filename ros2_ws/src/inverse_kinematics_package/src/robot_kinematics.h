//
// Created by yuta on 2023/09/02.
//

#ifndef CATCHROBO2023_ROBOT_KINEMATICS_H
#define CATCHROBO2023_ROBOT_KINEMATICS_H

#include <Eigen>

class robot_kinematics {
    /*
     * The unit of length is [mm], and the unit of angle is [rad].
     * Field origin is set on the top surface of the center of the plate_connector
     * The origin of hand coordinate is set at the point that hand rotation axis and the bottom surface of the endfactor_adapter cross.
     * Positive of field Y axle is set toward opponent.
     * Positive of field X axle is set toward right facing opponent.
     * Joints and links are numbered from the base (0,1,2)
     * Origin of Joint0 is set toward positive field Y axle
     * Origins of Joint1 and 2 are set toward positive field Z axle
     */
private:
    float link_len[3];//mm
    float joint_angle_lim[3];//rad

};


#endif //CATCHROBO2023_ROBOT_KINEMATICS_H
