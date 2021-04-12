/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface WRMClientInterface : NSObject {

	NSObject*<OS_xpc_object> mConnection;
	int mProcessId;
	NSObject*<OS_dispatch_queue> mQueue;
	/*^block*/id mNotificationBlock;

}
-(id)init;
-(void)dealloc;
-(void)unregisterClient;
-(void)registerClient:(int)arg1 queue:(id)arg2 notificationHandler:(/*^block*/id)arg3 ;
@end

