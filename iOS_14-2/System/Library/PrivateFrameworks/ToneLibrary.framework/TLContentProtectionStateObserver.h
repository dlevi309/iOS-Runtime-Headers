/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1 ;
-(id)init;
-(void)_assertNotRunningOnAccessQueue;
-(void)_cancelFirstUnlockNotifyToken;
-(void)_handleFirstUnlockNotification;
-(id)_performBlockAfterProtectedContentUnlocked:(/*^block*/id)arg1 ;
-(void)_loadUnlockedSinceBootStatusIfNeeded;
-(void)_loadContentProtectionStatusIfNeeded;
-(void)_assertRunningOnAccessQueue;
-(void)_updateUnlockedSinceBootStatus;
-(id)performBlockAfterProtectedContentUnlocked:(/*^block*/id)arg1 ;
-(void)dealloc;
-(long long)_queryCurrentUnlockedSinceBootStatus;
-(void)_registerFirstUnlockNotifyToken;
-(void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1 ;
@end

