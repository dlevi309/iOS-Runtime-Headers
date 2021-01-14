/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

