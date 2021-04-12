/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteServiceDiscovery.framework/RemoteServiceDiscovery
*/


@protocol OS_xpc_object;
@class NSObject;

@interface OS_remote_pending_event : NSObject {

	const char* service_name;
	NSObject*<OS_xpc_object> event;
	OS_remote_pending_event* next;

}
@end

