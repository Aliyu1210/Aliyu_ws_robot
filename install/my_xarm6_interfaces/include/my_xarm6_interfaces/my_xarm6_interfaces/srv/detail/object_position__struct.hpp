// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_xarm6_interfaces:srv/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__STRUCT_HPP_
#define MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_xarm6_interfaces__srv__ObjectPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_xarm6_interfaces__srv__ObjectPosition_Request __declspec(deprecated)
#endif

namespace my_xarm6_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObjectPosition_Request_
{
  using Type = ObjectPosition_Request_<ContainerAllocator>;

  explicit ObjectPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
    }
  }

  explicit ObjectPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
    }
  }

  // field types and members
  using _object_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_name_type object_name;

  // setters for named parameter idiom
  Type & set__object_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_xarm6_interfaces__srv__ObjectPosition_Request
    std::shared_ptr<my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_xarm6_interfaces__srv__ObjectPosition_Request
    std::shared_ptr<my_xarm6_interfaces::srv::ObjectPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectPosition_Request_ & other) const
  {
    if (this->object_name != other.object_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectPosition_Request_

// alias to use template instance with default allocator
using ObjectPosition_Request =
  my_xarm6_interfaces::srv::ObjectPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_xarm6_interfaces


#ifndef _WIN32
# define DEPRECATED__my_xarm6_interfaces__srv__ObjectPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_xarm6_interfaces__srv__ObjectPosition_Response __declspec(deprecated)
#endif

namespace my_xarm6_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObjectPosition_Response_
{
  using Type = ObjectPosition_Response_<ContainerAllocator>;

  explicit ObjectPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->success = false;
    }
  }

  explicit ObjectPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->success = false;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_xarm6_interfaces__srv__ObjectPosition_Response
    std::shared_ptr<my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_xarm6_interfaces__srv__ObjectPosition_Response
    std::shared_ptr<my_xarm6_interfaces::srv::ObjectPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectPosition_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectPosition_Response_

// alias to use template instance with default allocator
using ObjectPosition_Response =
  my_xarm6_interfaces::srv::ObjectPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_xarm6_interfaces

namespace my_xarm6_interfaces
{

namespace srv
{

struct ObjectPosition
{
  using Request = my_xarm6_interfaces::srv::ObjectPosition_Request;
  using Response = my_xarm6_interfaces::srv::ObjectPosition_Response;
};

}  // namespace srv

}  // namespace my_xarm6_interfaces

#endif  // MY_XARM6_INTERFACES__SRV__DETAIL__OBJECT_POSITION__STRUCT_HPP_
