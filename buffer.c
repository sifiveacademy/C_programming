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


    /* Check our return value to make sure we got memory */
    if (/* YOUR CODE HERE */) {
            allocation_failed();
    }

    /* Now we need to initialize our data.
          Since buffer->data should be able to dynamically grow */
    buffer->size = /* YOUR CODE HERE */
    buffer->data = /* YOUR CODE HERE */

    /* Check the data attribute of our vector to make sure we got memory */
    if (/* YOUR CODE HERE */) {
            free(buffer);           /* Think about why this is necessary! */
            allocation_failed();
    }

    /* Complete the initialization by setting the single component to
         a space */
    /* YOUR CODE HERE */

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
    if (* YOUR CODE HERE */) {
            /* YOUR CODE HERE */
    } else {
            return 0;
    }
}

/* Set a value in the buffer. If the extra memory allocation fails, call
   allocation_failed(). */
void buffer_set(buffer_t *buffer, size_t loc, char value) {
    /* What do we do if buffer is NULL? */
    /* YOUR SOLUTION HERE */
    if(buffer == NULL) {
            /* YOUR CODE HERE */
    }
    /* What do you need to do if the location is greater than the size we
     * allocated? Remember that unset locations should contain a value of an
     * empty string, ' '.
     */
    if (loc >= v->size) {
        /* YOUR CODE HERE */

        if (/* YOUR CODE HERE */) {
            allocation_failed();
        }
        for (/* YOUR CODE HERE */) {
            (buffer->data)[i] = /* YOUR CODE HERE */;
        }
    }
    (buffer->data)[loc] = value;
}

/* Free up the memory allocated for the passed buffer.
   Remember, you need to free up ALL the memory that was allocated. */
void buffer_delete(buffer_t *buffer) {
    /* YOUR SOLUTION HERE */
}
