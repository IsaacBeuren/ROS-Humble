#! /usr/bin/python

import rospy
import snap7
import struct

from actionlib_msgs.msg import GoalStatusArray

ip = '192.168.10.10'
db = 40

plc = snap7.client.Client()
plc.connect(ip, 0, 2)

done = 0

def status_callback(data):
    #print(data.status_list[0].text)
    global done

    if data.status_list[0].text == "Goal reached." and done == 0:
        enable = struct.pack('>?', False)
        angle = struct.pack('>i', 0)
        vel = struct.pack('>f', 0)

        plc.db_write(db, 0, enable)
        plc.db_write(db, 2, vel)
        plc.db_write(db, 6, angle)

        done = 1

    return

def status_listener():
    rospy.init_node("listener", anonymous=True)
    rospy.Subscriber("move_base/status", GoalStatusArray, status_callback)
    rospy.spin()

if __name__ == "__main__":
    print("Starting Status Listener")
    status_listener()