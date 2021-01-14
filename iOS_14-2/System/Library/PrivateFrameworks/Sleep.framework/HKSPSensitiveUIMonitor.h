/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


#import <Sleep/Sleep-Structs.h>
@class HKSPObserverSet, NSUserDefaults, NPSManager;

@interface HKSPSensitiveUIMonitor : NSObject {

	BOOL _sensitiveUIOverridden;
	BOOL _hideSensitiveUI;
	BOOL _needPrefsUpdate;
	os_unfair_lock_s _lock;
	HKSPObserverSet* _observers;
	NSUserDefaults* _userDefaults;
	NPSManager* _npsManager;

}

@property (nonatomic,readonly) HKSPObserverSet * observers;                                                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                                              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) NPSManager * npsManager;                                                    //@synthesize npsManager=_npsManager - In the implementation block
@property (nonatomic,readonly) BOOL sensitiveUIOverridden;                                                 //@synthesize sensitiveUIOverridden=_sensitiveUIOverridden - In the implementation block
@property (nonatomic,readonly) BOOL hideSensitiveUI;                                                       //@synthesize hideSensitiveUI=_hideSensitiveUI - In the implementation block
@property (nonatomic,readonly) BOOL needPrefsUpdate;                                                       //@synthesize needPrefsUpdate=_needPrefsUpdate - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                                                      //@synthesize lock=_lock - In the implementation block
@property (assign,getter=isCurrentSensitiveUIHidden,nonatomic) BOOL currentSensitiveUIHidden; 
+(id)sharedMonitor;
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NPSManager *)npsManager;
-(HKSPObserverSet *)observers;
-(id)initWithCallbackScheduler:(id)arg1 ;
-(BOOL)needPrefsUpdate;
-(void)_withLock:(/*^block*/id)arg1 ;
-(BOOL)_hideSensitiveUI;
-(os_unfair_lock_s)lock;
-(NSUserDefaults *)userDefaults;
-(BOOL)_isVendorRelease;
-(void)registerForNotifications;
-(void)removeObserver:(id)arg1 ;
-(void)_handleNotification;
-(void)overrideHideSensitiveUI:(BOOL)arg1 ;
-(BOOL)isCurrentSensitiveUIHidden;
-(void)setCurrentSensitiveUIHidden:(BOOL)arg1 ;
-(BOOL)sensitiveUIOverridden;
-(BOOL)shouldHideForSensitivity:(long long)arg1 ;
-(void)unregisterForNotifications;
-(BOOL)hideSensitiveUI;
-(void)dealloc;
@end

