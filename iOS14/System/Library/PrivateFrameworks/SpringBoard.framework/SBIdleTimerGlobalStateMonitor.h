/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBPocketStateMonitorObserver.h>
#import <libobjc.A.dylib/_SBIdleTimerGlobalSettingMonitorDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerServiceDelegate.h>
#import <libobjc.A.dylib/SBFThermalConditionObserver.h>

@protocol SBFThermalBlockProvider, BSInvalidatable;
@class NSHashTable, SBIdleTimerService, SBLocalDefaults, _SBIdleTimerGlobalNumericSettingMonitor, _SBIdleTimerGlobalBoolSettingMonitor, SBIdleTimerAggregateClientConfiguration, NSNumber, NSString;

@interface SBIdleTimerGlobalStateMonitor : NSObject <SBPocketStateMonitorObserver, _SBIdleTimerGlobalSettingMonitorDelegate, SBIdleTimerServiceDelegate, SBFThermalConditionObserver> {

	os_unfair_lock_s _observerLock;
	NSHashTable* _observers;
	SBIdleTimerService* _idleTimerService;
	SBLocalDefaults* _localDefaults;
	id<SBFThermalBlockProvider> _thermalBlockProvider;
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
	BOOL _thermalBlocked;
	id<BSInvalidatable> _stateCaptureAssertion;
	BOOL _faceDownOnTable;

}

@property (nonatomic,readonly) long long pocketState;                                                               //@synthesize pocketState=_pocketState - In the implementation block
@property (nonatomic,readonly) BOOL dontLockEver; 
@property (nonatomic,readonly) BOOL dontDimOrLockOnAC; 
@property (nonatomic,readonly) BOOL disableAttentionAwareness; 
@property (nonatomic,readonly) double minimumLockscreenIdleTime; 
@property (nonatomic,readonly) NSNumber * autoLockTimeout; 
@property (getter=isBatterySaverModeActive,nonatomic,readonly) BOOL batterySaverModeActive; 
@property (getter=isOnACPower,nonatomic,readonly) BOOL onACPower; 
@property (getter=isFaceDownOnTable,nonatomic,readonly) BOOL faceDownOnTable;                                       //@synthesize faceDownOnTable=_faceDownOnTable - In the implementation block
@property (getter=isAutoDimDisabled,nonatomic,readonly) BOOL autoDimDisabled; 
@property (nonatomic,readonly) SBIdleTimerAggregateClientConfiguration * aggregateClientConfiguration;              //@synthesize aggregateClientConfiguration=_aggregateClientConfiguration - In the implementation block
@property (getter=isThermalBlocked,nonatomic,readonly) BOOL thermalBlocked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSNumber *)autoLockTimeout;
-(void)addObserver:(id)arg1 ;
-(void)_addStateCaptureHandlers;
-(void)thermalBlockStatusChanged:(id)arg1 ;
-(void)idleTimerServiceTimeoutAssertionsDidChange:(id)arg1 ;
-(BOOL)isThermalBlocked;
-(void)_updateObserversForReason:(id)arg1 ;
-(id)_initWithLocalDefaults:(id)arg1 profileConnection:(id)arg2 pocketStateMonitor:(id)arg3 uiController:(id)arg4 idleTimerService:(id)arg5 thermalBlockProvider:(id)arg6 ;
-(BOOL)isBatterySaverModeActive;
-(BOOL)disableAttentionAwareness;
-(id)_stateCaptureDescription;
-(SBIdleTimerAggregateClientConfiguration *)aggregateClientConfiguration;
-(long long)pocketState;
-(void)idleTimerGlobalSettingMonitor:(id)arg1 changedForReason:(id)arg2 ;
-(BOOL)isOnACPower;
-(BOOL)isAutoDimDisabled;
-(/*^block*/id)_boolMonitorForProperty:(id)arg1 inDefaults:(id)arg2 fetchingWith:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)_updateAutoDimDisabled;
-(double)minimumLockscreenIdleTime;
-(void)pocketStateMonitor:(id)arg1 pocketStateDidChangeFrom:(long long)arg2 to:(long long)arg3 ;
-(BOOL)dontLockEver;
-(/*^block*/id)_timeIntervalMonitorForProperty:(id)arg1 inDefaults:(id)arg2 fetchingWith:(/*^block*/id)arg3 ;
-(id)_init;
-(BOOL)isFaceDownOnTable;
-(BOOL)dontDimOrLockOnAC;
-(void)_updateFaceDownOnTable;
-(void)dealloc;
@end

