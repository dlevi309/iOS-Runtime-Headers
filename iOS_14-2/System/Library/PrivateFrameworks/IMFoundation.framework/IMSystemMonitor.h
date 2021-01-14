/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <libobjc.A.dylib/IDSFoundationSystemMonitor.h>

@class NSHashTable, NSDate, NSTimer, NSString;

@interface IMSystemMonitor : NSObject <IDSFoundationSystemMonitor> {

	BOOL _watchesDataProtectionLockState;
	BOOL _watchesScreenLightState;
	BOOL _receivesMemoryWarnings;
	BOOL _willSleep;
	BOOL _screenLocked;
	BOOL _screensaverActive;
	BOOL _watchesSystemLockState;
	BOOL _underFirstLock;
	BOOL _active;
	BOOL _backingUp;
	BOOL _switchedOut;
	BOOL _screenLit;
	BOOL _systemLocked;
	BOOL _idleOverride;
	BOOL _usesPowerNotifications;
	BOOL _usesSystemIdleState;
	BOOL _inBackground;
	BOOL _listeningForSetupAssistantNotifications;
	int _dataProtectionState;
	int _userIdleToken;
	os_unfair_lock_s _ivarLock;
	NSHashTable* _listeners;
	NSDate* _idleStart;
	NSTimer* _timer;
	NSDate* _dateScreenLightLastChanged;
	NSDate* _dateSystemLockLastChanged;
	NSString* _userID;
	double _delayTime;
	NSHashTable* _earlyListeners;
	long long _resignActiveCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) os_unfair_lock_s ivarLock;                                 //@synthesize ivarLock=_ivarLock - In the implementation block
@property (assign,nonatomic) BOOL isFastUserSwitched;                                   //@synthesize switchedOut=_switchedOut - In the implementation block
@property (assign,nonatomic) long long resignActiveCount;                               //@synthesize resignActiveCount=_resignActiveCount - In the implementation block
@property (nonatomic,retain) NSHashTable * _listeners;                                  //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSHashTable * _earlyListeners;                             //@synthesize earlyListeners=_earlyListeners - In the implementation block
@property (assign,nonatomic) int userIdleToken;                                         //@synthesize userIdleToken=_userIdleToken - In the implementation block
@property (assign,nonatomic) BOOL _idleOverride;                                        //@synthesize idleOverride=_idleOverride - In the implementation block
@property (assign,nonatomic) BOOL _underFirstLock;                                      //@synthesize underFirstLock=_underFirstLock - In the implementation block
@property (assign,nonatomic) int _dataProtectionState;                                  //@synthesize dataProtectionState=_dataProtectionState - In the implementation block
@property (nonatomic,retain) NSDate * _idleStart;                                       //@synthesize idleStart=_idleStart - In the implementation block
@property (assign,nonatomic) BOOL listeningForSetupAssistantNotifications;              //@synthesize listeningForSetupAssistantNotifications=_listeningForSetupAssistantNotifications - In the implementation block
@property (nonatomic,retain) NSTimer * _timer;                                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSString * _userID;                                        //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) double _delayTime;                                         //@synthesize delayTime=_delayTime - In the implementation block
@property (assign,setter=setActive:,nonatomic) BOOL isActive;                           //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL usesPowerNotifications;                               //@synthesize usesPowerNotifications=_usesPowerNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesMemoryWarnings;                               //@synthesize receivesMemoryWarnings=_receivesMemoryWarnings - In the implementation block
@property (assign,nonatomic) BOOL usesSystemIdleState;                                  //@synthesize usesSystemIdleState=_usesSystemIdleState - In the implementation block
@property (assign,nonatomic) BOOL watchesDataProtectionLockState;                       //@synthesize watchesDataProtectionLockState=_watchesDataProtectionLockState - In the implementation block
@property (assign,nonatomic) BOOL watchesSystemLockState;                               //@synthesize watchesSystemLockState=_watchesSystemLockState - In the implementation block
@property (assign,nonatomic) BOOL watchesScreenLightState;                              //@synthesize watchesScreenLightState=_watchesScreenLightState - In the implementation block
@property (nonatomic,readonly) BOOL systemIsSleeping;                                   //@synthesize willSleep=_willSleep - In the implementation block
@property (nonatomic,readonly) BOOL systemIsShuttingDown; 
@property (nonatomic,readonly) BOOL isScreenSaverActive;                                //@synthesize screensaverActive=_screensaverActive - In the implementation block
@property (nonatomic,readonly) BOOL isScreenLocked;                                     //@synthesize screenLocked=_screenLocked - In the implementation block
@property (nonatomic,readonly) BOOL isScreenLit;                                        //@synthesize screenLit=_screenLit - In the implementation block
@property (nonatomic,retain,readonly) NSDate * dateScreenLightLastChanged;              //@synthesize dateScreenLightLastChanged=_dateScreenLightLastChanged - In the implementation block
@property (nonatomic,readonly) BOOL isSystemLocked;                                     //@synthesize systemLocked=_systemLocked - In the implementation block
@property (nonatomic,retain,readonly) NSDate * dateSystemLockLastChanged;               //@synthesize dateSystemLockLastChanged=_dateSystemLockLastChanged - In the implementation block
@property (nonatomic,readonly) BOOL isUnderDataProtectionLock; 
@property (nonatomic,readonly) BOOL isUnderFirstDataProtectionLock; 
@property (nonatomic,readonly) BOOL isBackingUp;                                        //@synthesize backingUp=_backingUp - In the implementation block
@property (nonatomic,readonly) BOOL isSetup; 
@property (nonatomic,readonly) BOOL isSystemIdle; 
@property (nonatomic,readonly) double systemIdleTime; 
@property (nonatomic,readonly) BOOL isInBackground;                                     //@synthesize inBackground=_inBackground - In the implementation block
+(id)sharedInstance;
-(void)addListener:(id)arg1 ;
-(void)_screenLocked:(id)arg1 ;
-(void)_alreadyLocked_clearIdleTimer;
-(void)_applicationWillResignActive:(id)arg1 ;
-(BOOL)isScreenLocked;
-(NSTimer *)_timer;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(BOOL)isFastUserSwitched;
-(void)_setSystemScreenState:(BOOL)arg1 ;
-(NSHashTable *)_earlyListeners;
-(void)setActive:(BOOL)arg1 ;
-(void)setResignActiveCount:(long long)arg1 ;
-(void)set_timer:(NSTimer *)arg1 ;
-(BOOL)watchesSystemLockState;
-(void)_handleLoginWindowNotification:(id)arg1 ;
-(id)init;
-(NSDate *)dateScreenLightLastChanged;
-(void)_receivedMemoryNotification;
-(void)setWatchesScreenLightState:(BOOL)arg1 ;
-(void)_suspend:(id)arg1 ;
-(void)_registerForSetupNotifications;
-(void)set_underFirstLock:(BOOL)arg1 ;
-(void)_armIdleTimer;
-(void)_screenSaverStopped:(id)arg1 ;
-(void)setUsesPowerNotifications:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)_notificationCenterWillAppear:(id)arg1 ;
-(BOOL)usesSystemIdleState;
-(BOOL)isSetup;
-(void)_deliverNotificationSelector:(SEL)arg1 ;
-(BOOL)usesPowerNotifications;
-(void)setUserIdleToken:(int)arg1 ;
-(void)_forceResumed;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_overrideAndDisableIdleTimer:(BOOL)arg1 ;
-(void)setWatchesDataProtectionLockState:(BOOL)arg1 ;
-(BOOL)systemIsShuttingDown;
-(void)_restoreDidStop;
-(void)set_listeners:(NSHashTable *)arg1 ;
-(BOOL)listeningForSetupAssistantNotifications;
-(BOOL)isUnderDataProtectionLock;
-(void)_setIdleState:(BOOL)arg1 ;
-(BOOL)_isUnderDataProtectionLockForState:(int)arg1 ;
-(os_unfair_lock_s)ivarLock;
-(void)_setSystemLockState:(BOOL)arg1 ;
-(BOOL)isUnderFirstDataProtectionLock;
-(void)_screenUnlocked:(id)arg1 ;
-(BOOL)watchesDataProtectionLockState;
-(void)setReceivesMemoryWarnings:(BOOL)arg1 ;
-(void)_notificationCenterDidDisappear:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(BOOL)isSystemLocked;
-(void)setIvarLock:(os_unfair_lock_s)arg1 ;
-(void)_screenSaverStarted:(id)arg1 ;
-(void)_restoreDidStart;
-(void)set_idleOverride:(BOOL)arg1 ;
-(void)setUsesSystemIdleState:(BOOL)arg1 ;
-(BOOL)_underFirstLock;
-(void)_setDataProtectionLockState:(int)arg1 ;
-(int)userIdleToken;
-(void)_setupStateChanged;
-(BOOL)systemIsSleeping;
-(BOOL)isScreenLit;
-(BOOL)isScreenSaverActive;
-(int)_dataProtectionState;
-(void)_updateIdleState;
-(void)_unregisterForLoginWindowNotifications;
-(void)_postScreenSaverStarted;
-(void)_systemWillSleep;
-(void)_registerForRestoreNotifications;
-(void)_removeEarlyListener:(id)arg1 ;
-(void)setListeningForSetupAssistantNotifications:(BOOL)arg1 ;
-(long long)resignActiveCount;
-(void)setIsFastUserSwitched:(BOOL)arg1 ;
-(void)_clearIdleTimer;
-(void)_systemWillShutdown;
-(void)removeListener:(id)arg1 ;
-(void)set_dataProtectionState:(int)arg1 ;
-(void)_resume:(id)arg1 ;
-(double)_delayTime;
-(BOOL)isSystemIdle;
-(void)_addEarlyListener:(id)arg1 ;
-(NSHashTable *)_listeners;
-(BOOL)_idleOverride;
-(void)set_earlyListeners:(NSHashTable *)arg1 ;
-(void)_checkRestoredFromBackup;
-(void)_forceSuspended;
-(BOOL)isInBackground;
-(void)set_delayTime:(double)arg1 ;
-(void)set_userID:(NSString *)arg1 ;
-(NSDate *)_idleStart;
-(BOOL)receivesMemoryWarnings;
-(BOOL)_deviceStillUnderFirstLock;
-(void)_unregisterForRestoreNotifications;
-(void)_resumeEventsOnly:(id)arg1 ;
-(BOOL)watchesScreenLightState;
-(void)_registerForLoginWindowNotifications;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(NSDate *)dateSystemLockLastChanged;
-(BOOL)isBackingUp;
-(void)_postScreenLocked;
-(void)setWatchesSystemLockState:(BOOL)arg1 ;
-(void)_systemDidWake;
-(BOOL)_alreadyLocked_isSystemIdle;
-(double)systemIdleTime;
-(void)_suspendEventsOnly:(id)arg1 ;
-(void)set_idleStart:(NSDate *)arg1 ;
-(void)_checkIdleTime:(id)arg1 ;
-(void)dealloc;
-(NSString *)_userID;
@end

