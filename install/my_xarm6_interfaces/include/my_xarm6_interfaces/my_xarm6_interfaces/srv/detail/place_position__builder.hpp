// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_xarm6_interfaces:srv/PlacePosition.idl
// generated code does not contain a copyright notice

#ifndef MY_XARM6_INTERFACES__SRV__DETAIL__PLACE_POSITION__BUILDER_HPP_
#define MY_XARM6_INTERFACES__SRV__DETAIL__PLACE_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_xarm6_interfaces/srv/detail/place_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_xarm6_interfaces
{

namespace srv
{

namespace builder
{

class Init_PlacePosition_Request_frame_id
{
public:
  explicit Init_PlacePosition_Request_frame_id(::my_xarm6_interfaces::srv::PlacePosition_Request & msg)
  : msg_(msg)
  {}
  ::my_xarm6_interfaces::srv::PlacePosition_Request frame_id(::my_xarm6_interfaces::srv::PlacePosition_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::PlacePosition_Request msg_;
};

class Init_PlacePosition_Request_z
{
public:
  explicit Init_PlacePosition_Request_z(::my_xarm6_interfaces::srv::PlacePosition_Request & msg)
  : msg_(msg)
  {}
  Init_PlacePosition_Request_frame_id z(::my_xarm6_interfaces::srv::PlacePosition_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PlacePosition_Request_frame_id(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::PlacePosition_Request msg_;
};

class Init_PlacePosition_Request_y
{
public:
  explicit Init_PlacePosition_Request_y(::my_xarm6_interfaces::srv::PlacePosition_Request & msg)
  : msg_(msg)
  {}
  Init_PlacePosition_Request_z y(::my_xarm6_interfaces::srv::PlacePosition_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PlacePosition_Request_z(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::PlacePosition_Request msg_;
};

class Init_PlacePosition_Request_x
{
public:
  Init_PlacePosition_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlacePosition_Request_y x(::my_xarm6_interfaces::srv::PlacePosition_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PlacePosition_Request_y(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::PlacePosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_xarm6_interfaces::srv::PlacePosition_Request>()
{
  return my_xarm6_interfaces::srv::builder::Init_PlacePosition_Request_x();
}

}  // namespace my_xarm6_interfaces


namespace my_xarm6_interfaces
{

namespace srv
{

namespace builder
{

class Init_PlacePosition_Response_message
{
public:
  explicit Init_PlacePosition_Response_message(::my_xarm6_interfaces::srv::PlacePosition_Response & msg)
  : msg_(msg)
  {}
  ::my_xarm6_interfaces::srv::PlacePosition_Response message(::my_xarm6_interfaces::srv::PlacePosition_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::PlacePosition_Response msg_;
};

class Init_PlacePosition_Response_success
{
public:
  Init_PlacePosition_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlacePosition_Response_message success(::my_xarm6_interfaces::srv::PlacePosition_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlacePosition_Response_message(msg_);
  }

private:
  ::my_xarm6_interfaces::srv::PlacePosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_xarm6_interfaces::srv::PlacePosition_Response>()
{
  return my_xarm6_interfaces::srv::builder::Init_PlacePosition_Response_success();
}

}  // namespace my_xarm6_interfaces

#endif  // MY_XARM6_INTERFACES__SRV__DETAIL__PLACE_POSITION__BUILDER_HPP_
