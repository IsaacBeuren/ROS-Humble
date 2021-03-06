// Generated by gencpp from file rtabmap_ros/GetPlan.msg
// DO NOT EDIT!


#ifndef RTABMAP_ROS_MESSAGE_GETPLAN_H
#define RTABMAP_ROS_MESSAGE_GETPLAN_H

#include <ros/service_traits.h>


#include <rtabmap_ros/GetPlanRequest.h>
#include <rtabmap_ros/GetPlanResponse.h>


namespace rtabmap_ros
{

struct GetPlan
{

typedef GetPlanRequest Request;
typedef GetPlanResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetPlan
} // namespace rtabmap_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rtabmap_ros::GetPlan > {
  static const char* value()
  {
    return "11e7a6b05e2b36bab483bec069bf36b9";
  }

  static const char* value(const ::rtabmap_ros::GetPlan&) { return value(); }
};

template<>
struct DataType< ::rtabmap_ros::GetPlan > {
  static const char* value()
  {
    return "rtabmap_ros/GetPlan";
  }

  static const char* value(const ::rtabmap_ros::GetPlan&) { return value(); }
};


// service_traits::MD5Sum< ::rtabmap_ros::GetPlanRequest> should match 
// service_traits::MD5Sum< ::rtabmap_ros::GetPlan > 
template<>
struct MD5Sum< ::rtabmap_ros::GetPlanRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rtabmap_ros::GetPlan >::value();
  }
  static const char* value(const ::rtabmap_ros::GetPlanRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rtabmap_ros::GetPlanRequest> should match 
// service_traits::DataType< ::rtabmap_ros::GetPlan > 
template<>
struct DataType< ::rtabmap_ros::GetPlanRequest>
{
  static const char* value()
  {
    return DataType< ::rtabmap_ros::GetPlan >::value();
  }
  static const char* value(const ::rtabmap_ros::GetPlanRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rtabmap_ros::GetPlanResponse> should match 
// service_traits::MD5Sum< ::rtabmap_ros::GetPlan > 
template<>
struct MD5Sum< ::rtabmap_ros::GetPlanResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rtabmap_ros::GetPlan >::value();
  }
  static const char* value(const ::rtabmap_ros::GetPlanResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rtabmap_ros::GetPlanResponse> should match 
// service_traits::DataType< ::rtabmap_ros::GetPlan > 
template<>
struct DataType< ::rtabmap_ros::GetPlanResponse>
{
  static const char* value()
  {
    return DataType< ::rtabmap_ros::GetPlan >::value();
  }
  static const char* value(const ::rtabmap_ros::GetPlanResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RTABMAP_ROS_MESSAGE_GETPLAN_H
