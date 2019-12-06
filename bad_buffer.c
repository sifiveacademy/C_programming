buffer_t *bad_buffer_new() {
    /* Create the buffer and a pointer to it */
  buffer_t *buffer_ptr, buffer;
  buffer_ptr = &buffer;

  /* Initialize attributes */
  buffer_ptr->size = 1;
  buffer_ptr->data = malloc(sizeof(char));
  if (buffer_ptr->data == NULL) {
    allocation_failed();
  }

  buffer_ptr->data[0] = ' ';
  return buffer_ptr;
}

buffer_t also_bad_buffer_new() {
  /* Create the buffer */
  buffer_t buffer;

  /* Initialize attributes */
  buffer.size = 1;
  buffer.data = malloc(sizeof(char));
  if (buffer.data == NULL) {
    allocation_failed();
  }
  buffer.data[0] = ' ';
  return buffer;
}
