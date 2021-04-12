/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface TLContentProtectionStateObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSMutableDictionary* _blocksScheduledForProtectedContentUnlockedEvent;
	long long _contentProtectionStatus;
	long long _unlockedSinceBootStatus;
	int _firstUnlockNotifyToken;

}
+(id)sharedContentProtectionStateObserver;
-(id)init;
-(void)dealloc;
-(id)performBlockAfterProtectedContentUnlocked:(/*^block*/id)arg1 ;
-(void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_assertNotRunningOnAccessQueue;
-(void)_cancelFirstUnlockNotifyToken;
-(id)_performBlockAfterProtectedContentUnlocked:(/*^block*/id)arg1 ;
-(void)_loadContentProtectionStatusIfNeeded;
-(void)_loadUnlockedSinceBootStatusIfNeeded;
-(void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1 ;
-(void)_handleFirstUnlockNotification;
-(void)_updateUnlockedSinceBootStatus;
-(long long)_queryCurrentUnlockedSinceBootStatus;
-(void)_registerFirstUnlockNotifyToken;
@end

