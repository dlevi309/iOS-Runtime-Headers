/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_protocol_transform.h>

@protocol OS_nw_endpoint, OS_xpc_object, OS_nw_protocol_stack;
@class NSObject, NSString;

@interface NWConcrete_nw_protocol_transform : NSObject <OS_nw_protocol_transform> {

	unsigned clear_application : 1;
	unsigned clear_transport : 1;
	unsigned clear_internet : 1;
	unsigned no_proxy : 1;
	unsigned prohibit_direct : 1;
	unsigned tfo : 1;
	unsigned tfo_no_cookie : 1;
	unsigned no_fallback : 1;
	unsigned fast_open_force_enable : 1;
	unsigned set_multipath_service : 1;
	int fallback_mode;
	int multipath_service;
	int data_mode;
	NSObject*<OS_nw_endpoint> replace_endpoint;
	NSObject*<OS_xpc_object> disabled_protocols;
	NSObject*<OS_nw_protocol_stack> transform_stack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

