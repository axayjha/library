#ifndef DEFINE_H_
#define DEFINE_H_

#define decode(s,t,u,m,p,e,d)   \
		m ## s ## u ## t

#define begin decode(a,n,i,m,a,t,e)

#define paste(a,b) a ## b

#define str2(a) #a
#define str(a) str2(a)

#define likely(x)       \
	__builtin_expect((x),1)


#define unlikely(x)     \
	__builtin_expect((x),0)

#define less_than <
#define is_less_than <
#define grtr_than >
#define is_grtr_than >
#define equals ==
#define is =
#define start int main() { 
#define end	}
#define forever for(;;)
#define NOT !
#define io_library <stdio.h>
#define str_library <string.h>
#define std_library <stdlib.h>
#define array_lib "array.h"
#define print printf
#define scanf scan
#define AND &&
#define OR ||
#define by /
#define plus +
#define minus -
#define adressOf(x) &(x)
#define contentAt(x) *(x)
#define mod %
#define blank_line printf("\n");
#define new_line printf("\n");
#define increment ++
#define decrement --
#define is_incremented_by +=
#define is_decremented_by -=	
#define tada ^=
#define next ;
#define _while ;
#define _and ;

#define loop_while	for(
#define again_loop_while	for(
#define go )
#define done ;	
#define check_if if(
#define and_do )	
#define and_ )	
#define _and_ };
#define _is ={	

#endif

