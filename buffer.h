#ifndef BUFFER_H_
#define BUFFER_H_
/* The #ifndef ... #define ... #endif prevents the file from being included
 * more than once which could've resulted in an infinite loop of
 * file inclusions.
 */

#include <sys/types.h>

/* This typedef says that BUFFER_T is the same as STRUCT BUFFER_T,
 * so we can just write BUFFER_T when we need to refer to STRUCT BUFFER_T.
 */
typedef struct buffer_t buffer_t;

/* Next, we provide the prototypes for the functions defined in vector.c.  This
 * is a way of telling the .c files that #include this header what they will
 * have access to.
 */

/* Create a new vector. */
buffer_t *buffer_new();

/* Free up the memory allocated for the passed buffer. */
void buffer_delete(buffer_t *buffer);

/* Return the value in the vector. */
int buffer_get(buffer_t *buffer, size_t loc);

/* Set a value in the buffer. */
void buffer_set(buffer_t *buffer, size_t loc, int value);

/* Free memory allocated for the passed buffer. */
void buffer_delete(buffer_t *buffer)

#endif
