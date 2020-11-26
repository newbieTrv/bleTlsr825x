#ifndef MG_KEY_H_
#define MG_KEY_H_

#include "tl_common.h"

#define key_no           0
#define key_click  1
#define key_double       2
#define key_long_2s      3
#define key_long_5s      4

//API
extern unsigned char key_read(void);

#endif /* MG_KEY_H_ */
