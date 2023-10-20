// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/Shutdown.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tutorial_interfaces/srv/detail/shutdown__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Shutdown_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: req
  {
    out << "req: ";
    rosidl_generator_traits::value_to_yaml(msg.req, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Shutdown_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req: ";
    rosidl_generator_traits::value_to_yaml(msg.req, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Shutdown_Request & msg, bool use_flow_style = false)
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

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::Shutdown_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::Shutdown_Request & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::Shutdown_Request>()
{
  return "tutorial_interfaces::srv::Shutdown_Request";
}

template<>
inline const char * name<tutorial_interfaces::srv::Shutdown_Request>()
{
  return "tutorial_interfaces/srv/Shutdown_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Shutdown_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Shutdown_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::srv::Shutdown_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Shutdown_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: resp
  {
    out << "resp: ";
    rosidl_generator_traits::value_to_yaml(msg.resp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Shutdown_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resp: ";
    rosidl_generator_traits::value_to_yaml(msg.resp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Shutdown_Response & msg, bool use_flow_style = false)
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

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::Shutdown_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::Shutdown_Response & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::Shutdown_Response>()
{
  return "tutorial_interfaces::srv::Shutdown_Response";
}

template<>
inline const char * name<tutorial_interfaces::srv::Shutdown_Response>()
{
  return "tutorial_interfaces/srv/Shutdown_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Shutdown_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Shutdown_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::srv::Shutdown_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::Shutdown>()
{
  return "tutorial_interfaces::srv::Shutdown";
}

template<>
inline const char * name<tutorial_interfaces::srv::Shutdown>()
{
  return "tutorial_interfaces/srv/Shutdown";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Shutdown>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::Shutdown_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::Shutdown_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Shutdown>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::Shutdown_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::Shutdown_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::srv::Shutdown>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::srv::Shutdown_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::srv::Shutdown_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__TRAITS_HPP_
