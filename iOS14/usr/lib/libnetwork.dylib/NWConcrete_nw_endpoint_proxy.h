/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_endpoint_proxy.h>

@protocol OS_nw_array, OS_xpc_object;
@class NSObject, NWConcrete_nw_endpoint_handler, NSString;

@interface NWConcrete_nw_endpoint_proxy : NSObject <OS_nw_endpoint_proxy> {

	NSObject*<OS_nw_array> child_endpoint_handlers;
	NSObject*<OS_nw_array> failed_child_endpoint_handlers;
	unsigned next_child_endpoint_index;
	NWConcrete_nw_endpoint_handler* connected_child;
	NSObject*<OS_xpc_object> proxy_settings;
	NSObject*<OS_xpc_object> parsed_proxy_settings;
	CFURLRef url;
	NSObject*<OS_nw_array> pac_resolvers;
	unsigned direct_prohibited : 1;
	unsigned synthesized_url : 1;
	unsigned pac_failed_missing_url : 1;
	unsigned overrode_to_https : 1;
	unsigned has_pac : 1;
	unsigned transport_finished : 1;
	unsigned is_custom_proxy : 1;
	unsigned is_pac_connection : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updatePathWithHandler:(id)arg1 ;
-(BOOL)applyWithHandler:(id)arg1 toChildren:(/*^block*/id)arg2 ;
-(void)startWithHandler:(id)arg1 ;
-(void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2 ;
-(void)dealloc;
@end

