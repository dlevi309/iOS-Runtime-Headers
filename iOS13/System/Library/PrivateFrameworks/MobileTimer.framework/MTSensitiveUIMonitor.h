/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


#import <MobileTimer/MobileTimer-Structs.h>
@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject {

	BOOL _hideSensitiveUI;
	BOOL _needPrefsUpdate;
	int _notifyToken;
	os_unfair_lock_s _lock;
	MTObserverStore* _observers;

}

@property (nonatomic,retain) MTObserverStore * observers;              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) int notifyToken;                          //@synthesize notifyToken=_notifyToken - In the implementation block
@property (assign,nonatomic) BOOL hideSensitiveUI;                     //@synthesize hideSensitiveUI=_hideSensitiveUI - In the implementation block
@property (assign,nonatomic) BOOL needPrefsUpdate;                     //@synthesize needPrefsUpdate=_needPrefsUpdate - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                    //@synthesize lock=_lock - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(int)notifyToken;
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(MTObserverStore *)observers;
-(void)registerForNotifications;
-(void)setNotifyToken:(int)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)unregisterForNotifications;
-(BOOL)_isVendorRelease;
-(BOOL)_hideSensitiveUI;
-(void)_handleNotification;
-(void)addSensitiveUIObserver:(id)arg1 ;
-(void)removeSensitiveUIObserver:(id)arg1 ;
-(BOOL)shouldHideForSensitivity:(long long)arg1 ;
-(BOOL)hideSensitiveUI;
-(void)setHideSensitiveUI:(BOOL)arg1 ;
-(BOOL)needPrefsUpdate;
-(void)setNeedPrefsUpdate:(BOOL)arg1 ;
@end

