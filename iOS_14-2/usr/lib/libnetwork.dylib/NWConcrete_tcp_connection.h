/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_tcp_connection.h>

@protocol OS_xpc_object, OS_nw_connection, OS_nw_error, OS_nw_path, OS_nw_endpoint, OS_nw_parameters, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface NWConcrete_tcp_connection : NSObject <OS_tcp_connection> {

	NSObject*<OS_xpc_object> tc_context;
	NSObject*<OS_nw_connection> tc_nwconn;
	NSObject*<OS_nw_error> tc_last_nw_error;
	NSObject*<OS_nw_path> tc_nw_current_path;
	NSObject*<OS_nw_endpoint> tc_network_endpoint;
	NSObject*<OS_nw_parameters> tc_network_parameters;
	int tc_tls_mode;
	NSObject*<OS_dispatch_queue> tc_client_queue;
	/*^block*/id tc_event;
	/*^block*/id tc_cancel_handler;
	NSObject*<OS_dispatch_source> tc_connection_attempt_timer;
	NWConcrete_tcp_connection* tc_internally_retained_object;
	unsigned long long tc_id;
	unsigned long long tc_attempt_timeout_nanos;
	int tc_error;
	int tc_dup_fd;
	os_unfair_lock_s tc_lock;
	int tc_usage_model;
	long long tc_quality;
	unsigned tc_keepalive_count;
	unsigned tc_keepalive_interval;
	unsigned tc_adaptive_read_count;
	unsigned tc_adaptive_write_count;
	unsigned tc_minimum_throughput;
	unsigned char tc_state;
	unsigned char tc_by;
	unsigned tc_event_read_close_delivered : 1;
	unsigned tc_event_write_close_delivered : 1;
	unsigned tc_event_connected_delivered : 1;
	unsigned tc_event_disconnected_delivered : 1;
	unsigned tc_better_route : 1;
	unsigned tc_not_viable : 1;
	unsigned tc_attempt_timeout_should_generate_event : 1;
	unsigned tc_allow_socket_access : 1;
	unsigned tc_sent_connected : 1;
	unsigned tc_sent_tls_finished : 1;
	unsigned tc_state_has_been_preparing : 1;
	unsigned tc_client_owns_dup_fd : 1;
	unsigned tc_started : 1;
	unsigned tc_keepalive_events : 1;
	unsigned tc_adaptive_read_events : 1;
	unsigned tc_adaptive_write_events : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

