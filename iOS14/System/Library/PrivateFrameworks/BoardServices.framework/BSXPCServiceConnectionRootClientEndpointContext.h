/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext {

	BOOL _nonLaunching;
	NSObject*<OS_xpc_object> _endpoint;

}
-(BOOL)isClient;
@end

