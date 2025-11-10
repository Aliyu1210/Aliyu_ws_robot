// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_xarm6_interfaces:srv/PlacePosition.idl
// generated code does not contain a copyright notice

#ifndef MY_XARM6_INTERFACES__SRV__DETAIL__PLACE_POSITION__STRUCT_HPP_
#define MY_XARM6_INTERFACES__SRV__DETAIL__PLACE_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_xarm6_interfaces__srv__PlacePosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_xarm6_interfaces__srv__PlacePosition_Request __declspec(deprecated)
#endif

namespace my_xarm6_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlacePosition_Request_
{
  using Type = PlacePosition_Request_<ContainerAllocator>;

  explicit PlacePosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->frame_id = "";
    }
  }

  explicit PlacePosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->frame_id = "";
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
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;

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
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_xarm6_interfaces__srv__PlacePosition_Request
    std::shared_ptr<my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_xarm6_interfaces__srv__PlacePosition_Request
    std::shared_ptr<my_xarm6_interfaces::srv::PlacePosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlacePosition_Request_ & other) const
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
    if (this->frame_id != other.frame_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlacePosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlacePosition_Request_

// alias to use template instance with default allocator
using PlacePosition_Request =
  my_xarm6_interfaces::srv::PlacePosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_xarm6_interfaces


#ifndef _WIN32
# define DEPRECATED__my_xarm6_interfaces__srv__PlacePosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_xarm6_interfaces__srv__PlacePosition_Response __declspec(deprecated)
#endif

namespace my_xarm6_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlacePosition_Response_
{
  using Type = PlacePosition_Response_<ContainerAllocator>;

  explicit PlacePosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit PlacePosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_xarm6_interfaces__srv__PlacePosition_Response
    std::shared_ptr<my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_xarm6_interfaces__srv__PlacePosition_Response
    std::shared_ptr<my_xarm6_interfaces::srv::PlacePosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlacePosition_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlacePosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlacePosition_Response_

// alias to use template instance with default allocator
using PlacePosition_Response =
  my_xarm6_interfaces::srv::PlacePosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_xarm6_interfaces

namespace my_xarm6_interfaces
{

namespace srv
{

struct PlacePosition
{
  using Request = my_xarm6_interfaces::srv::PlacePosition_Request;
  using Response = my_xarm6_interfaces::srv::PlacePosition_Response;
};

}  // namespace srv

}  // namespace my_xarm6_interfaces

#endif  // MY_XARM6_INTERFACES__SRV__DETAIL__PLACE_POSITION__STRUCT_HPP_
