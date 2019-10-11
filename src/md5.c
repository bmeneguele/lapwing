/* MD5 message-digest algorithm
 *
 * This algorithm performs 5 different steps:
 * 1. add padding bits
 */

#include <stdlib.h>
#include <lapwing/md5.h>

/* TODO: complete all 5 steps for md5 */

/* Function unfinished */
int _lw_md5_padding(char const *in, char *out)
{
	char *padding;
	size_t in_len = sizeof(in);
	size_t padding_len;

	if (in_len >= 448)
		padding_len = (in_len - 448) % 512;
	else
		padding_len = in_len - 448;

	return 0;
}
