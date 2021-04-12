/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_parameters.h>

@protocol OS_xpc_object, OS_dispatch_data, OS_nw_array, OS_nw_endpoint;
@class NWConcrete_nw_path_parameters, NSObject, NWConcrete_nw_protocol_stack, NSString;

@interface NWConcrete_nw_parameters : NSObject <OS_nw_parameters> {

	SCD_Struct_NW25 value;
	NWConcrete_nw_path_parameters* path_parameters;
	char* e_bundle_id;
	char* proxy_bundle_id;
	NSObject*<OS_xpc_object> tls_session_id;
	NSObject*<OS_xpc_object> proxy_configuration;
	NSObject*<OS_xpc_object> effective_proxy_settings;
	NSObject*<OS_xpc_object> extra_parent_ids;
	NSObject*<OS_dispatch_data> initial_data_payload;
	NWConcrete_nw_protocol_stack* default_stack;
	NSObject*<OS_nw_array> proxy_options;
	NSObject*<OS_nw_endpoint> url_endpoint;
	NSObject*<OS_xpc_object> metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)redactedDescription;
-(void)dealloc;
@end

