/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_protocol_stack.h>

@protocol OS_nw_array, OS_nw_protocol_options;
@class NSObject, NSString;

@interface NWConcrete_nw_protocol_stack : NSObject <OS_nw_protocol_stack> {

	NSObject*<OS_nw_array> application_protocols;
	NSObject*<OS_nw_protocol_options> transport_protocol;
	NSObject*<OS_nw_protocol_options> secondary_transport_protocol;
	NSObject*<OS_nw_protocol_options> internet_protocol;
	NSObject*<OS_nw_protocol_options> link_protocol;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

