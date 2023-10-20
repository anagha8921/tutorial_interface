// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/Shutdown.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/shutdown__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Shutdown_Request_req
{
public:
  Init_Shutdown_Request_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::Shutdown_Request req(::tutorial_interfaces::srv::Shutdown_Request::_req_type arg)
  {
    msg_.req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Shutdown_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Shutdown_Request>()
{
  return tutorial_interfaces::srv::builder::Init_Shutdown_Request_req();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Shutdown_Response_resp
{
public:
  Init_Shutdown_Response_resp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::Shutdown_Response resp(::tutorial_interfaces::srv::Shutdown_Response::_resp_type arg)
  {
    msg_.resp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Shutdown_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Shutdown_Response>()
{
  return tutorial_interfaces::srv::builder::Init_Shutdown_Response_resp();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__BUILDER_HPP_
