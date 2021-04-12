/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreDaemon/ASDSoftwareUpdatesStore.h>

@interface AppStoreKit.UpdateStore : ASDSoftwareUpdatesStore {

	 notificationQueue;
	 coalesceUpdateNotifications;
	 notificationWorkItem;

}
-(id)init;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)broadcastChangeNotificationIfNotCoalescing;
-(void)dealloc;
@end

