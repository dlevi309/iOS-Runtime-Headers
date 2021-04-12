/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteServiceDiscovery.framework/RemoteServiceDiscovery
*/


@protocol OS_xpc_object;
@class NSObject, OS_remote_device;

@interface OS_remote_service : NSObject {

	char* name;
	NSObject*<OS_xpc_object> properties;
	NSObject*<OS_xpc_object> connection;
	OS_remote_device* device;
	unsigned connect_timeout;

}
-(void)dealloc;
@end

