/* This function takes in an integer array, copies its
 * content into a dynamically allocated array, and
 * returns the pointer to the dynamically allocated array.
 */
int* copy_int_array(const int* source_ar)
{
    /* find the number of ints in SOURCE_AR */
    int num_ints = sizeof(source_ar) / sizeof(int);
    int *dest_ar = (int *) malloc (num_ints * sizeof(int));
    /* check if allocation succeeded */
    if (dest_ar == NULL)
    {
        printf(“malloc failed\n”);
        return NULL;
    }
    int i;
    /* copy */
    for (i = 0; i < num_ints; i++) {
        dest_ar[i] = source_ar[i];
    }
    return dest_ar;
}
