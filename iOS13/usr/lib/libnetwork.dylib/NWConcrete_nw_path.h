/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_path.h>

@protocol OS_nw_parameters, OS_nw_endpoint, OS_nw_browse_descriptor, OS_nw_advertise_descriptor, OS_nw_array, OS_nw_interface, OS_xpc_object;
@class NSObject, NSString;

@interface NWConcrete_nw_path : NSObject <OS_nw_path> {

	os_unfair_lock_s lock;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_browse_descriptor> browse_descriptor;
	NSObject*<OS_nw_advertise_descriptor> advertise_descriptor;
	NSObject*<OS_nw_array> discovered_endpoints;
	NSObject*<OS_nw_array> resolved_endpoints;
	NSObject*<OS_nw_array> flows;
	NSObject*<OS_nw_endpoint> override_local_endpoint;
	NSObject*<OS_nw_interface> override_interface;
	NSObject*<OS_nw_interface> direct;
	NSObject*<OS_nw_interface> delegate;
	NSObject*<OS_nw_interface> fallback_interface;
	unsigned char client_id[16];
	unsigned char flow_registration_id[16];
	unsigned char fallback_agent[16];
	NSObject*<OS_xpc_object> fallback_agent_domains;
	NSObject*<OS_xpc_object> fallback_agent_types;
	NSObject*<OS_nw_array> dns_servers;
	NSObject*<OS_xpc_object> dns_search_domains;
	NSObject*<OS_nw_array> gateways;
	NSObject*<OS_xpc_object> network_agent_dictionary;
	NSObject*<OS_xpc_object> proxy_settings;
	char* reason_description;
	nw_path_necp_result* policy_result;
	unsigned effective_mtu;
	unsigned effective_traffic_class;
	unsigned interface_time_delta;
	unsigned fallback_generation;
	int status;
	int reason;
	unsigned short custom_ethertype;
	unsigned char custom_ip_protocol;
	unsigned char recommended_mss;
	unsigned weak_fallback : 1;
	unsigned no_fallback_timer : 1;
	unsigned fallback_is_forced : 1;
	unsigned is_local : 1;
	unsigned is_direct : 1;
	unsigned has_ipv4 : 1;
	unsigned has_ipv6 : 1;
	unsigned traffic_mgmt_background : 1;
	unsigned necp_satisfied : 1;
	unsigned override_viable : 1;
	unsigned changed_from_previous : 1;
	unsigned probe_connectivity : 1;
	unsigned link_quality_abort : 1;
	unsigned checked_dns : 1;
	unsigned is_listener : 1;
	unsigned is_interpose : 1;
	unsigned specific_listener : 1;
	unsigned override_is_expensive : 1;
	unsigned override_is_constrained : 1;
	unsigned override_uses_wifi : 1;
	unsigned override_uses_cellular : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)redactedDescription;
@end

