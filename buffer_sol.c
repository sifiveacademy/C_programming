/* buffer_t struct definition */
struct buffer_t {
  size_t size;
  char *data;
};

/* Create a new vector with a size (length) of and set its single
   component to a space, the RIGHT WAY */
buffer_t *buffer_new() {
  buffer_t *buffer;

  /* First, we need to allocate memory on the heap for the struct */
  /* YOUR CODE HERE */
  buffer = (buffer_t *) malloc(sizeof(vector_t));

  /* Check our return value to make sure we got memory */
  if (/* YOUR CODE HERE */buffer == NULL) {
    allocation_failed();
  }

  /* Now we need to initialize our data.
        Since buffer->data should be able to dynamically grow */
  buffer->size = 1;/* YOUR CODE HERE */
  buffer->data = (char *) malloc(sizeof(char));/* YOUR CODE HERE */

  /* Check the data attribute of our vector to make sure we got memory */
  if (/* YOUR CODE HERE */buffer->data == NULL) {
    free(buffer);                /* cleans up memory before exiting */
    allocation_failed();
  }

  /* Complete the initialization by setting the single component to zero */
  /* YOUR CODE HERE */(buffer->data)[0] = ' ';

  /* and return... */
  return buffer;
}

/* Return the value at the specified location LOC */
char buffer_get(buffer_t *buffer, size_t loc) {

  /* If a NULL pointer was passed for buffer, complain about
     it and exit. */
  if(buffer == NULL) {
    fprintf(stderr, "buffer_get: passed a NULL buffer.\n");
    exit(0);
  }

  /* If the requested location is higher than we have allocated, return 0.
   * Otherwise, return what is in the passed location.
   */
  if (loc < buffer->size/* YOUR CODE HERE */) {
    return (buffer->data)[loc];/* YOUR CODE HERE */
  } else {
    return 0;
  }
}

/* Set a value in the buffer. If the extra memory allocation fails, call
   allocation_failed(). */
void buffer_set(buffer_t *buffer, size_t loc, char value) {
  /* initialize a new buffer if the BUFFER passed in is NULL */
  /* YOUR SOLUTION HERE */
  if(buffer == NULL) {
    buffer = buffer_new();
  }
  /* If the location is greater than the size we previously allocated,
   * use REALLOC to allocate more memory. Remember that unset locations
   * should contain a value of an empty string, ' '
   */
  if (loc >= v->size) {
    size_t old_size = buffer->size;
    size_t new_size = loc + 1;
    buffer->size = new_size;
    buffer->data = realloc(buffer->data, new_size * sizeof(char));
    if (buffer->data == NULL) {
      allocation_failed();
    }
    /* initialize unset locations to ' ' */
    for (size_t i = old_size; i < new_size; i++) {
      (buffer->data)[i] = ' ';
    }
  }
  (buffer->data)[loc] = value;
}

/* Free up the memory allocated for the passed buffer.
   Remember, you need to free up ALL the memory that was allocated. */
void buffer_delete(buffer_t *buffer) {
  /* YOUR SOLUTION HERE */
  /* double check that BUFFER is not NULL */
  if (buffer) {
    /* double check that BUFFER->DATA is not NULL */
    if (buffer->data) {
      free(buffer->data);
    }
    free(buffer);
  }
}
