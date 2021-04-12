/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SSRemoteNotificationClient : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _notifyToken;

}
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(void)registerForRemoteNotifications;
-(void)unregisterForRemoteNotifications;
-(id)popQueuedNotifications;
@end

