#! /usr/bin/python

import rospy
import snap7
import struct

from geometry_msgs.msg import Twist
from actionlib_msgs.msg import GoalStatusArray

ip = '192.168.10.10'
db = 40

plc = snap7.client.Client()
plc.connect(ip, 0, 2)

def callback(data):
    
    if data.linear.x != 0.0 and data.angular.z != 0.0:
        vel = data.linear.x * 3.6
        if vel > 0 and vel < 3:
            vel = 3
        elif vel < 0 and vel > -3:
            vel = -3
        angle = 0
        if data.angular.z > 0:
            angle = int((data.angular.z) * -5000)
        elif data.angular.z < 0:
            angle = int((data.angular.z) * -5000)

        print(angle, vel)

        enable = struct.pack('>?', True)
        angle = struct.pack('>i', angle)
        vel = struct.pack('>f', vel)

        plc.db_write(db, 0, enable)
        plc.db_write(db, 2, vel)
        plc.db_write(db, 6, angle)

    return

def cmd_vel_listener():
    rospy.init_node("listener", anonymous=True)
    rospy.Subscriber("cmd_vel", Twist, callback)
    rospy.spin()

if __name__ == "__main__":
    print("Starting Comands Listener")
    cmd_vel_listener()