/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MTObserverStore *)observers;
-(void)setHideSensitiveUI:(BOOL)arg1 ;
-(void)setNotifyToken:(int)arg1 ;
-(id)init;
-(void)removeSensitiveUIObserver:(id)arg1 ;
-(BOOL)needPrefsUpdate;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)addSensitiveUIObserver:(id)arg1 ;
-(BOOL)_hideSensitiveUI;
-(os_unfair_lock_s)lock;
-(int)notifyToken;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(BOOL)_isVendorRelease;
-(void)setNeedPrefsUpdate:(BOOL)arg1 ;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(void)registerForNotifications;
-(void)_handleNotification;
-(BOOL)shouldHideForSensitivity:(long long)arg1 ;
-(void)unregisterForNotifications;
-(BOOL)hideSensitiveUI;
-(void)dealloc;
@end

