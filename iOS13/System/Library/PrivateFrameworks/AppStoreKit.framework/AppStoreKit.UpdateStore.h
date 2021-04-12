/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreDaemon/ASDSoftwareUpdatesStore.h>

@interface AppStoreKit.UpdateStore : ASDSoftwareUpdatesStore {

	 notificationQueue;
	 coalesceUpdateNotifications;
	 notificationWorkItem;

}
-(id)init;
-(void)dealloc;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)broadcastChangeNotificationIfNotCoalescing;
@end

