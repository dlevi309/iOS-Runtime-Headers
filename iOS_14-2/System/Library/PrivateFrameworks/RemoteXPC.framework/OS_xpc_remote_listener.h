/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OS_xpc_remote_listener : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	int type;
	/*^block*/id accept_handler;
	/*^block*/id cancel_handler;
	BOOL canceled;

}
-(void)dealloc;
@end

