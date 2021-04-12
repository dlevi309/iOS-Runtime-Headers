/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

