/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteServiceDiscovery.framework/RemoteServiceDiscovery
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OS_remote_listening_service : NSObject {

	const char* service_name;
	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id accept_block;
	OS_remote_listening_service* next;

}
-(void)dealloc;
@end

