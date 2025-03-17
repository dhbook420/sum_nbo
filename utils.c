#include "utils.h"


int read_file(uint32_t *val_ptr, char* filename)
{
	    FILE *pfile = fopen(filename, "r");
	        uint32_t bytes;
		    uint32_t read_bytes;

		        if (pfile == NULL)
				    {
					            printf("Cannot open file %s", filename);
						            return 1;
							        }
			    
			    read_bytes = fread(&bytes, 1, 4, pfile);

			        if (read_bytes < 4)
					    {
						            printf("%s is not 4byte.\n", filename);
							            return 1;
								        }

				    *val_ptr = ntohl(bytes);

				        fclose(pfile);
					    return 0;
}


void print_all(uint32_t sum, uint32_t *values, int len)
{
	    for (int i = 0; i < len; i++)
		        {
				        printf("%d(%04x) ", values[i], values[i]);
					        if (i < len - 1)
							            printf(" + ");
						    }
	        printf(" = %d(%04x)", sum, sum);
}



uint32_t ntohl(uint32_t n)
{
	        uint8_t n1 = (n >> 24) & 0xff;
		        uint8_t n2 = (n >> 16) & 0xff;
			        uint8_t n3 = (n >> 8) & 0xff;
				        uint8_t n4 = n & 0xff;

					        return (n4 << 24) | (n3 << 16) | (n2 << 8) | n1 ;
}

