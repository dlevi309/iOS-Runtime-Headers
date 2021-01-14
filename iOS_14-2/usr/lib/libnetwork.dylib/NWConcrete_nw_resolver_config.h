/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_resolver_config.h>

@protocol OS_xpc_object, OS_dispatch_source, OS_nw_fd_wrapper;
@class NSObject, NSString;

@interface NWConcrete_nw_resolver_config : NSObject <OS_nw_resolver_config> {

	NSObject*<OS_xpc_object> dictionary;
	unsigned char identifier[16];
	NSObject*<OS_dispatch_source> kernel_event_source;
	NSObject*<OS_nw_fd_wrapper> kernel_event_wrapper;
	NSObject*<OS_nw_fd_wrapper> agent_fd;
	os_unfair_lock_s lock;
	unsigned generation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)dealloc;
@end

