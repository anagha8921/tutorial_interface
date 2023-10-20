// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/Shutdown.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Shutdown in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__Shutdown_Request
{
  int64_t req;
} tutorial_interfaces__srv__Shutdown_Request;

// Struct for a sequence of tutorial_interfaces__srv__Shutdown_Request.
typedef struct tutorial_interfaces__srv__Shutdown_Request__Sequence
{
  tutorial_interfaces__srv__Shutdown_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__Shutdown_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Shutdown in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__Shutdown_Response
{
  bool resp;
} tutorial_interfaces__srv__Shutdown_Response;

// Struct for a sequence of tutorial_interfaces__srv__Shutdown_Response.
typedef struct tutorial_interfaces__srv__Shutdown_Response__Sequence
{
  tutorial_interfaces__srv__Shutdown_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__Shutdown_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SHUTDOWN__STRUCT_H_
