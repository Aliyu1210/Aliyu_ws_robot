// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_xarm6_interfaces:srv/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__TRAITS_HPP_
#define MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_xarm6_interfaces/srv/detail/object_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_xarm6_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObjectPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_name
  {
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_xarm6_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_xarm6_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_xarm6_interfaces::srv::ObjectPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_xarm6_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_xarm6_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_xarm6_interfaces::srv::ObjectPosition_Request & msg)
{
  return my_xarm6_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_xarm6_interfaces::srv::ObjectPosition_Request>()
{
  return "my_xarm6_interfaces::srv::ObjectPosition_Request";
}

template<>
inline const char * name<my_xarm6_interfaces::srv::ObjectPosition_Request>()
{
  return "my_xarm6_interfaces/srv/ObjectPosition_Request";
}

template<>
struct has_fixed_size<my_xarm6_interfaces::srv::ObjectPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_xarm6_interfaces::srv::ObjectPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_xarm6_interfaces::srv::ObjectPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_xarm6_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObjectPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_xarm6_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_xarm6_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_xarm6_interfaces::srv::ObjectPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_xarm6_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_xarm6_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_xarm6_interfaces::srv::ObjectPosition_Response & msg)
{
  return my_xarm6_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_xarm6_interfaces::srv::ObjectPosition_Response>()
{
  return "my_xarm6_interfaces::srv::ObjectPosition_Response";
}

template<>
inline const char * name<my_xarm6_interfaces::srv::ObjectPosition_Response>()
{
  return "my_xarm6_interfaces/srv/ObjectPosition_Response";
}

template<>
struct has_fixed_size<my_xarm6_interfaces::srv::ObjectPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_xarm6_interfaces::srv::ObjectPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_xarm6_interfaces::srv::ObjectPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_xarm6_interfaces::srv::ObjectPosition>()
{
  return "my_xarm6_interfaces::srv::ObjectPosition";
}

template<>
inline const char * name<my_xarm6_interfaces::srv::ObjectPosition>()
{
  return "my_xarm6_interfaces/srv/ObjectPosition";
}

template<>
struct has_fixed_size<my_xarm6_interfaces::srv::ObjectPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<my_xarm6_interfaces::srv::ObjectPosition_Request>::value &&
    has_fixed_size<my_xarm6_interfaces::srv::ObjectPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_xarm6_interfaces::srv::ObjectPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<my_xarm6_interfaces::srv::ObjectPosition_Request>::value &&
    has_bounded_size<my_xarm6_interfaces::srv::ObjectPosition_Response>::value
  >
{
};

template<>
struct is_service<my_xarm6_interfaces::srv::ObjectPosition>
  : std::true_type
{
};

template<>
struct is_service_request<my_xarm6_interfaces::srv::ObjectPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_xarm6_interfaces::srv::ObjectPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__TRAITS_HPP_
