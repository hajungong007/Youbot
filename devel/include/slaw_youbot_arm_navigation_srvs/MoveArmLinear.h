// Generated by gencpp from file slaw_youbot_arm_navigation_srvs/MoveArmLinear.msg
// DO NOT EDIT!


#ifndef SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_MOVEARMLINEAR_H
#define SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_MOVEARMLINEAR_H

#include <ros/service_traits.h>


#include <slaw_youbot_arm_navigation_srvs/MoveArmLinearRequest.h>
#include <slaw_youbot_arm_navigation_srvs/MoveArmLinearResponse.h>


namespace slaw_youbot_arm_navigation_srvs
{

struct MoveArmLinear
{

typedef MoveArmLinearRequest Request;
typedef MoveArmLinearResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoveArmLinear
} // namespace slaw_youbot_arm_navigation_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveArmLinear > {
  static const char* value()
  {
    return "ed7d2c59a27b4f7d20eb9d4fc9d98e7d";
  }

  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveArmLinear&) { return value(); }
};

template<>
struct DataType< ::slaw_youbot_arm_navigation_srvs::MoveArmLinear > {
  static const char* value()
  {
    return "slaw_youbot_arm_navigation_srvs/MoveArmLinear";
  }

  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveArmLinear&) { return value(); }
};


// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveArmLinearRequest> should match 
// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveArmLinear > 
template<>
struct MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveArmLinearRequest>
{
  static const char* value()
  {
    return MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveArmLinear >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveArmLinearRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::MoveArmLinearRequest> should match 
// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::MoveArmLinear > 
template<>
struct DataType< ::slaw_youbot_arm_navigation_srvs::MoveArmLinearRequest>
{
  static const char* value()
  {
    return DataType< ::slaw_youbot_arm_navigation_srvs::MoveArmLinear >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveArmLinearRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveArmLinearResponse> should match 
// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveArmLinear > 
template<>
struct MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveArmLinearResponse>
{
  static const char* value()
  {
    return MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveArmLinear >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveArmLinearResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::MoveArmLinearResponse> should match 
// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::MoveArmLinear > 
template<>
struct DataType< ::slaw_youbot_arm_navigation_srvs::MoveArmLinearResponse>
{
  static const char* value()
  {
    return DataType< ::slaw_youbot_arm_navigation_srvs::MoveArmLinear >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveArmLinearResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_MOVEARMLINEAR_H