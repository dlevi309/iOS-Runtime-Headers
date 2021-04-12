/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBPocketStateMonitorObserver.h>
#import <libobjc.A.dylib/_SBIdleTimerGlobalSettingMonitorDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerServiceDelegate.h>

@protocol BSInvalidatable;
@class NSHashTable, SBIdleTimerService, SBLocalDefaults, _SBIdleTimerGlobalNumericSettingMonitor, _SBIdleTimerGlobalBoolSettingMonitor, SBIdleTimerAggregateClientConfiguration, NSNumber, NSString;

@interface SBIdleTimerGlobalStateMonitor : NSObject <SBPocketStateMonitorObserver, _SBIdleTimerGlobalSettingMonitorDelegate, SBIdleTimerServiceDelegate> {

	os_unfair_lock_s _observerLock;
	NSHashTable* _observers;
	SBIdleTimerService* _idleTimerService;
	SBLocalDefaults* _localDefaults;
	/*^block*/id _dontLockEver;
	/*^block*/id _dontDimOrLockOnAC;
	/*^block*/id _disableAttentionAwareness;
	/*^block*/id _minimumLockscreenIdleTime;
	_SBIdleTimerGlobalNumericSettingMonitor* _autoLockTimeoutMonitor;
	_SBIdleTimerGlobalBoolSettingMonitor* _batterySaverModeMonitor;
	_SBIdleTimerGlobalBoolSettingMonitor* _onACPowerMonitor;
	long long _pocketState;
	BOOL _autoDimDisabled;
	SBIdleTimerAggregateClientConfiguration* _aggregateClientConfiguration;
	id<BSInvalidatable> _stateCaptureAssertion;

}

@property (nonatomic,readonly) BOOL dontLockEver; 
@property (nonatomic,readonly) BOOL dontDimOrLockOnAC; 
@property (nonatomic,readonly) BOOL disableAttentionAwareness; 
@property (nonatomic,readonly) double minimumLockscreenIdleTime; 
@property (nonatomic,readonly) NSNumber * autoLockTimeout; 
@property (getter=isBatterySaverModeActive,nonatomic,readonly) BOOL batterySaverModeActive; 
@property (getter=isOnACPower,nonatomic,readonly) BOOL onACPower; 
@property (nonatomic,readonly) long long pocketState;                                                               //@synthesize pocketState=_pocketState - In the implementation block
@property (getter=isAutoDimDisabled,nonatomic,readonly) BOOL autoDimDisabled; 
@property (nonatomic,readonly) SBIdleTimerAggregateClientConfiguration * aggregateClientConfiguration;              //@synthesize aggregateClientConfiguration=_aggregateClientConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isBatterySaverModeActive;
-(NSNumber *)autoLockTimeout;
-(void)_addStateCaptureHandlers;
-(BOOL)disableAttentionAwareness;
-(BOOL)dontLockEver;
-(BOOL)dontDimOrLockOnAC;
-(BOOL)isOnACPower;
-(SBIdleTimerAggregateClientConfiguration *)aggregateClientConfiguration;
-(double)minimumLockscreenIdleTime;
-(long long)pocketState;
-(void)idleTimerServiceTimeoutAssertionsDidChange:(id)arg1 ;
-(id)_stateCaptureDescription;
-(BOOL)isAutoDimDisabled;
-(void)pocketStateMonitor:(id)arg1 pocketStateDidChangeFrom:(long long)arg2 to:(long long)arg3 ;
-(/*^block*/id)_boolMonitorForProperty:(id)arg1 inDefaults:(id)arg2 fetchingWith:(/*^block*/id)arg3 ;
-(/*^block*/id)_timeIntervalMonitorForProperty:(id)arg1 inDefaults:(id)arg2 fetchingWith:(/*^block*/id)arg3 ;
-(void)_updateAutoDimDisabled;
-(id)_initWithLocalDefaults:(id)arg1 profileConnection:(id)arg2 pocketStateMonitor:(id)arg3 uiController:(id)arg4 idleTimerService:(id)arg5 ;
-(void)_updateObserversForReason:(id)arg1 ;
-(void)idleTimerGlobalSettingMonitor:(id)arg1 changedForReason:(id)arg2 ;
@end

