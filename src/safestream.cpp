#include "safestream.hpp"

/** Start a session.
  *
  * Will block if is a session is already started.
  */
template<>
SafeStream & SafeStream::operator<< <SafeStream::Begin> (const SafeStream::Begin &) {
    start();
    return *this;
}

/** Stop the current session. */
template<>
SafeStream & SafeStream::operator<< <SafeStream::End> (const SafeStream::End &) {
    stop();
    return *this;
}
