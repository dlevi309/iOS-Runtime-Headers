/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject;

@interface ATXAppPredictionBlacklist : NSObject {

	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	id _blacklistNotificationToken;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)disabledBundleIds;
-(int)registerPrefsChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterPrefsChangeHandlerWithToken:(int)arg1 ;
-(void)_listenForUpdates;
-(void)_updateBlacklist;
-(void)_resetBlacklistWithSet:(id)arg1 ;
@end

