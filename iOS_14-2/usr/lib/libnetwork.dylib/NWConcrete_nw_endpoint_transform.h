/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_endpoint_transform.h>

@protocol OS_nw_array, OS_xpc_object, OS_nw_endpoint;
@class NSObject, NWConcrete_nw_endpoint_handler, NSString;

@interface NWConcrete_nw_endpoint_transform : NSObject <OS_nw_endpoint_transform> {

	NSObject*<OS_nw_array> child_endpoint_handlers;
	NSObject*<OS_nw_array> failed_child_endpoint_handlers;
	NSObject*<OS_xpc_object> fallback_modes;
	NSObject*<OS_nw_array> blocked_protocols;
	unsigned next_child_endpoint_index;
	NWConcrete_nw_endpoint_handler* connected_child;
	NSObject*<OS_nw_endpoint> primary_endpoint;
	void* child_timer;

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

