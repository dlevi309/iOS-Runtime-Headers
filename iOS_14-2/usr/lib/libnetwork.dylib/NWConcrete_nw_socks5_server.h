/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_socks5_server.h>

@protocol OS_dispatch_queue, OS_nw_parameters, OS_nw_listener, OS_nw_array, OS_dispatch_source;
@class NSObject, NSString;

@interface NWConcrete_nw_socks5_server : NSObject <OS_nw_socks5_server> {

	unsigned long long ss_id;
	NWConcrete_nw_socks5_server* ss_internally_retained_object;
	os_unfair_lock_s ss_lock;
	NSObject*<OS_dispatch_queue> ss_queue;
	NSObject*<OS_nw_parameters> ss_parameters;
	NSObject*<OS_dispatch_queue> ss_client_queue;
	/*^block*/id ss_state_handler;
	/*^block*/id ss_error;
	NSObject*<OS_nw_listener> ss_listener;
	NSObject*<OS_nw_array> ss_socks5_connections;
	nw_shoes_statistics ss_stats;
	unsigned long long ss_assertion_toggle_mach_time;
	NSObject*<OS_dispatch_source> ss_assertion_timer;
	unsigned ss_assertion;
	unsigned ss_busy_count;
	unsigned ss_shoes : 1;
	unsigned ss_assertion_timer_running : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
@end

