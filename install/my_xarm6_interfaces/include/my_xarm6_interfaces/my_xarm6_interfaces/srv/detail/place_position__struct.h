// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_xarm6_interfaces:srv/PlacePosition.idl
// generated code does not contain a copyright notice

#ifndef MY_XARM6_INTERFACES__SRV__DETAIL__PLACE_POSITION__STRUCT_H_
#define MY_XARM6_INTERFACES__SRV__DETAIL__PLACE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlacePosition in the package my_xarm6_interfaces.
typedef struct my_xarm6_interfaces__srv__PlacePosition_Request
{
  double x;
  double y;
  double z;
  rosidl_runtime_c__String frame_id;
} my_xarm6_interfaces__srv__PlacePosition_Request;

// Struct for a sequence of my_xarm6_interfaces__srv__PlacePosition_Request.
typedef struct my_xarm6_interfaces__srv__PlacePosition_Request__Sequence
{
  my_xarm6_interfaces__srv__PlacePosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_xarm6_interfaces__srv__PlacePosition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlacePosition in the package my_xarm6_interfaces.
typedef struct my_xarm6_interfaces__srv__PlacePosition_Response
{
  bool success;
  rosidl_runtime_c__String message;
} my_xarm6_interfaces__srv__PlacePosition_Response;

// Struct for a sequence of my_xarm6_interfaces__srv__PlacePosition_Response.
typedef struct my_xarm6_interfaces__srv__PlacePosition_Response__Sequence
{
  my_xarm6_interfaces__srv__PlacePosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_xarm6_interfaces__srv__PlacePosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_XARM6_INTERFACES__SRV__DETAIL__PLACE_POSITION__STRUCT_H_
