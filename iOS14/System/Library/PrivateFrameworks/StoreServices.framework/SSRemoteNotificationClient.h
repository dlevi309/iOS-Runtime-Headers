/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)popQueuedNotifications;
-(void)registerForRemoteNotifications;
-(void)unregisterForRemoteNotifications;
-(void)dealloc;
@end

