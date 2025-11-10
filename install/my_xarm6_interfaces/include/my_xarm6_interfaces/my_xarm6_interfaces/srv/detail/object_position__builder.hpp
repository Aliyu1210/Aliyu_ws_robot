// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_xarm6_interfaces:srv/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__BUILDER_HPP_
#define MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_xarm6_interfaces/srv/detail/object_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_xarm6_interfaces
{

namespace srv
{

namespace builder
{

class Init_ObjectPosition_Request_object_name
{
public:
  Init_ObjectPosition_Request_object_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_xarm6_interfaces::srv::ObjectPosition_Request object_name(::my_xarm6_interfaces::srv::ObjectPosition_Request::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::ObjectPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_xarm6_interfaces::srv::ObjectPosition_Request>()
{
  return my_xarm6_interfaces::srv::builder::Init_ObjectPosition_Request_object_name();
}

}  // namespace my_xarm6_interfaces


namespace my_xarm6_interfaces
{

namespace srv
{

namespace builder
{

class Init_ObjectPosition_Response_success
{
public:
  explicit Init_ObjectPosition_Response_success(::my_xarm6_interfaces::srv::ObjectPosition_Response & msg)
  : msg_(msg)
  {}
  ::my_xarm6_interfaces::srv::ObjectPosition_Response success(::my_xarm6_interfaces::srv::ObjectPosition_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::ObjectPosition_Response msg_;
};

class Init_ObjectPosition_Response_z
{
public:
  explicit Init_ObjectPosition_Response_z(::my_xarm6_interfaces::srv::ObjectPosition_Response & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_Response_success z(::my_xarm6_interfaces::srv::ObjectPosition_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ObjectPosition_Response_success(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::ObjectPosition_Response msg_;
};

class Init_ObjectPosition_Response_y
{
public:
  explicit Init_ObjectPosition_Response_y(::my_xarm6_interfaces::srv::ObjectPosition_Response & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_Response_z y(::my_xarm6_interfaces::srv::ObjectPosition_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ObjectPosition_Response_z(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::ObjectPosition_Response msg_;
};

class Init_ObjectPosition_Response_x
{
public:
  Init_ObjectPosition_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectPosition_Response_y x(::my_xarm6_interfaces::srv::ObjectPosition_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ObjectPosition_Response_y(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::ObjectPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_xarm6_interfaces::srv::ObjectPosition_Response>()
{
  return my_xarm6_interfaces::srv::builder::Init_ObjectPosition_Response_x();
}

}  // namespace my_xarm6_interfaces

#endif  // MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__BUILDER_HPP_
