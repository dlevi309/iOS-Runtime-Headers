/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

