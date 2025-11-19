// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_xarm6_interfaces:srv/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__STRUCT_H_
#define MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ObjectPosition in the package my_xarm6_interfaces.
typedef struct my_xarm6_interfaces__srv__ObjectPosition_Request
{
  rosidl_runtime_c__String object_name;
} my_xarm6_interfaces__srv__ObjectPosition_Request;

// Struct for a sequence of my_xarm6_interfaces__srv__ObjectPosition_Request.
typedef struct my_xarm6_interfaces__srv__ObjectPosition_Request__Sequence
{
  my_xarm6_interfaces__srv__ObjectPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_xarm6_interfaces__srv__ObjectPosition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ObjectPosition in the package my_xarm6_interfaces.
typedef struct my_xarm6_interfaces__srv__ObjectPosition_Response
{
  double x;
  double y;
  double z;
  bool success;
} my_xarm6_interfaces__srv__ObjectPosition_Response;

// Struct for a sequence of my_xarm6_interfaces__srv__ObjectPosition_Response.
typedef struct my_xarm6_interfaces__srv__ObjectPosition_Response__Sequence
{
  my_xarm6_interfaces__srv__ObjectPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_xarm6_interfaces__srv__ObjectPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__STRUCT_H_
