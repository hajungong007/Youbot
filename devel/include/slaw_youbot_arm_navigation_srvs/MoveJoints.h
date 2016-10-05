// Generated by gencpp from file slaw_youbot_arm_navigation_srvs/MoveJoints.msg
// DO NOT EDIT!


#ifndef SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_MOVEJOINTS_H
#define SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_MOVEJOINTS_H

#include <ros/service_traits.h>


#include <slaw_youbot_arm_navigation_srvs/MoveJointsRequest.h>
#include <slaw_youbot_arm_navigation_srvs/MoveJointsResponse.h>


namespace slaw_youbot_arm_navigation_srvs
{

struct MoveJoints
{

typedef MoveJointsRequest Request;
typedef MoveJointsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoveJoints
} // namespace slaw_youbot_arm_navigation_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveJoints > {
  static const char* value()
  {
    return "d07079461c3693f01c6c76f81e4c199e";
  }

  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveJoints&) { return value(); }
};

template<>
struct DataType< ::slaw_youbot_arm_navigation_srvs::MoveJoints > {
  static const char* value()
  {
    return "slaw_youbot_arm_navigation_srvs/MoveJoints";
  }

  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveJoints&) { return value(); }
};


// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest> should match 
// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveJoints > 
template<>
struct MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveJoints >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest> should match 
// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::MoveJoints > 
template<>
struct DataType< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest>
{
  static const char* value()
  {
    return DataType< ::slaw_youbot_arm_navigation_srvs::MoveJoints >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveJointsResponse> should match 
// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveJoints > 
template<>
struct MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveJointsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveJoints >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveJointsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::MoveJointsResponse> should match 
// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::MoveJoints > 
template<>
struct DataType< ::slaw_youbot_arm_navigation_srvs::MoveJointsResponse>
{
  static const char* value()
  {
    return DataType< ::slaw_youbot_arm_navigation_srvs::MoveJoints >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveJointsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_MOVEJOINTS_H