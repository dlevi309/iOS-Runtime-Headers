/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned overrode_to_https : 1;
	unsigned has_pac : 1;
	unsigned transport_finished : 1;
	unsigned __pad_bits : 5;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)applyWithHandler:(id)arg1 toChildren:(/*^block*/id)arg2 ;
-(void)startWithHandler:(id)arg1 ;
-(void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2 ;
-(void)updatePathWithHandler:(id)arg1 ;
@end

