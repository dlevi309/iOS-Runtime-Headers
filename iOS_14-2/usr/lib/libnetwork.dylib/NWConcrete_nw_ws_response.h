/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_ws_response.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface NWConcrete_nw_ws_response : NSObject <OS_nw_ws_response> {

	int status;
	char* selected_subprotocol;
	NSObject*<OS_xpc_object> header_names;
	NSObject*<OS_xpc_object> header_values;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

