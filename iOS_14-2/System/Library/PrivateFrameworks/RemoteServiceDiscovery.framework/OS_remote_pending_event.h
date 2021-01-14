/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

