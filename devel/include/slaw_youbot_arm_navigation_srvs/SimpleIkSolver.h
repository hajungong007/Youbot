// Generated by gencpp from file slaw_youbot_arm_navigation_srvs/SimpleIkSolver.msg
// DO NOT EDIT!


#ifndef SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_SIMPLEIKSOLVER_H
#define SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_SIMPLEIKSOLVER_H

#include <ros/service_traits.h>


#include <slaw_youbot_arm_navigation_srvs/SimpleIkSolverRequest.h>
#include <slaw_youbot_arm_navigation_srvs/SimpleIkSolverResponse.h>


namespace slaw_youbot_arm_navigation_srvs
{

struct SimpleIkSolver
{

typedef SimpleIkSolverRequest Request;
typedef SimpleIkSolverResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SimpleIkSolver
} // namespace slaw_youbot_arm_navigation_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver > {
  static const char* value()
  {
    return "05bbbcf867270d7063ea11257da792a6";
  }

  static const char* value(const ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver&) { return value(); }
};

template<>
struct DataType< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver > {
  static const char* value()
  {
    return "slaw_youbot_arm_navigation_srvs/SimpleIkSolver";
  }

  static const char* value(const ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver&) { return value(); }
};


// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverRequest> should match 
// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver > 
template<>
struct MD5Sum< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverRequest>
{
  static const char* value()
  {
    return MD5Sum< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverRequest> should match 
// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver > 
template<>
struct DataType< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverRequest>
{
  static const char* value()
  {
    return DataType< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverResponse> should match 
// service_traits::MD5Sum< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver > 
template<>
struct MD5Sum< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverResponse>
{
  static const char* value()
  {
    return MD5Sum< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverResponse> should match 
// service_traits::DataType< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver > 
template<>
struct DataType< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverResponse>
{
  static const char* value()
  {
    return DataType< ::slaw_youbot_arm_navigation_srvs::SimpleIkSolver >::value();
  }
  static const char* value(const ::slaw_youbot_arm_navigation_srvs::SimpleIkSolverResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_SIMPLEIKSOLVER_H