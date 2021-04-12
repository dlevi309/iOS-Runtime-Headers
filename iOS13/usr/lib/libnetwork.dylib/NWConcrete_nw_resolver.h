/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_resolver.h>

@protocol OS_nw_parameters, OS_nw_endpoint, OS_nw_context, OS_dispatch_group, OS_dispatch_queue, OS_nw_array, OS_nw_path, OS_nw_interface, OS_nw_txt_record;
@class NSObject, NSString;

@interface NWConcrete_nw_resolver : NSObject <OS_nw_resolver> {

	int status;
	os_unfair_lock_s lock;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_context> context;
	NSObject*<OS_dispatch_group> cancel_group;
	unsigned dns_service_id;
	DNSServiceRef_tRef dns_service;
	DNSServiceRef_tRef dns_service_secondary_pointer;
	unsigned forced_protocol;
	int dns_error;
	unsigned char flags;
	/*^block*/id update_block;
	/*^block*/id cancel_handler;
	NSObject*<OS_dispatch_queue> client_queue;
	void* query_timer;
	void* crazy_eyeballs_timer;
	NSObject*<OS_nw_array> endpoint_array;
	NSObject*<OS_nw_path> path;
	NSObject*<OS_nw_interface> path_required_interface;
	NSObject*<OS_nw_txt_record> esni_record;
	NWConcrete_nw_resolver* internally_retained_object;
	char log_str[84];
	unsigned is_custom_resolver : 1;
	unsigned used_local_cache : 1;
	unsigned ipv4_used_resolver_cache : 1;
	unsigned ipv6_used_resolver_cache : 1;
	unsigned local_only : 1;
	unsigned suppress_logging : 1;
	unsigned resolve_esni : 1;
	unsigned has_ipv4 : 1;
	unsigned has_ipv6 : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 path:(id)arg3 ;
@end

