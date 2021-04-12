/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_fd_wrapper.h>

@class NSString;

@interface NWConcrete_nw_fd_wrapper : NSObject <OS_nw_fd_wrapper> {

	int fd;
	os_unfair_lock_s lock;
	unsigned long long guard;
	unsigned guarded : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFileDescriptor:(int)arg1 ;
@end

