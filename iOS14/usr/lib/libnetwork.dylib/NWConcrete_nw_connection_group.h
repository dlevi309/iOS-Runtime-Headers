/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_connection_group.h>

@protocol OS_dispatch_queue, OS_nw_error, OS_nw_parameters, OS_nw_group_descriptor, OS_nw_listener, OS_nw_array;
@class NSObject, NSString;

@interface NWConcrete_nw_connection_group : NSObject <OS_nw_connection_group> {

	NSObject*<OS_dispatch_queue> client_queue;
	unsigned client_qos_class;
	NWConcrete_nw_connection_group* internally_retained_object;
	/*^block*/id state_changed_handler;
	int state;
	NSObject*<OS_nw_error> last_error;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_group_descriptor> group_descriptor;
	NSObject*<OS_nw_listener> listener;
	NSObject*<OS_nw_array> connections;
	/*^block*/id receive_handler;
	/*^block*/id message_preview_handler;
	char* description;
	char* redacted_description;
	unsigned log_id;
	os_unfair_lock_s lock;
	unsigned maximum_message_size;
	unsigned short initial_port;
	unsigned started : 1;
	unsigned reject_oversized_messages : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)redactedDescription;
-(void)dealloc;
@end

