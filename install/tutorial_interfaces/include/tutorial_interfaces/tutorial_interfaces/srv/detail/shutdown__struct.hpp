// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:srv/Shutdown.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__STRUCT_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__Shutdown_Request __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__Shutdown_Request __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Shutdown_Request_
{
  using Type = Shutdown_Request_<ContainerAllocator>;

  explicit Shutdown_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = 0ll;
    }
  }

  explicit Shutdown_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = 0ll;
    }
  }

  // field types and members
  using _req_type =
    int64_t;
  _req_type req;

  // setters for named parameter idiom
  Type & set__req(
    const int64_t & _arg)
  {
    this->req = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__Shutdown_Request
    std::shared_ptr<tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__Shutdown_Request
    std::shared_ptr<tutorial_interfaces::srv::Shutdown_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shutdown_Request_ & other) const
  {
    if (this->req != other.req) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shutdown_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shutdown_Request_

// alias to use template instance with default allocator
using Shutdown_Request =
  tutorial_interfaces::srv::Shutdown_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__Shutdown_Response __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__Shutdown_Response __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Shutdown_Response_
{
  using Type = Shutdown_Response_<ContainerAllocator>;

  explicit Shutdown_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resp = false;
    }
  }

  explicit Shutdown_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resp = false;
    }
  }

  // field types and members
  using _resp_type =
    bool;
  _resp_type resp;

  // setters for named parameter idiom
  Type & set__resp(
    const bool & _arg)
  {
    this->resp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__Shutdown_Response
    std::shared_ptr<tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__Shutdown_Response
    std::shared_ptr<tutorial_interfaces::srv::Shutdown_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shutdown_Response_ & other) const
  {
    if (this->resp != other.resp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shutdown_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shutdown_Response_

// alias to use template instance with default allocator
using Shutdown_Response =
  tutorial_interfaces::srv::Shutdown_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces

namespace tutorial_interfaces
{

namespace srv
{

struct Shutdown
{
  using Request = tutorial_interfaces::srv::Shutdown_Request;
  using Response = tutorial_interfaces::srv::Shutdown_Response;
};

}  // namespace srv

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__STRUCT_HPP_
