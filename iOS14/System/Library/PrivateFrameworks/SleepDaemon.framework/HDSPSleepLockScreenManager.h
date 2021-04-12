/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSleepLockScreenStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPSleepLockScreenStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPSleepLockScreenAssertionManagerDelegate.h>
#import <libobjc.A.dylib/HKSPSensitiveUIObserver.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPSleepModeObserver.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPGoodMorningAlertObserver.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class NSDate, HKSPSleepScheduleModel, NSDictionary, HDSPEnvironment, HDSPSleepLockScreenStateMachine, HDSPSleepLockScreenAssertionManager, NSString;

@interface HDSPSleepLockScreenManager : NSObject <HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenAssertionManagerDelegate, HKSPSensitiveUIObserver, HDSPDiagnosticsProvider, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPGoodMorningAlertObserver, HDSPEnvironmentAware> {

	long long _state;
	long long _overrideState;
	NSDictionary* _overrideUserInfo;
	os_unfair_lock_s _sleepLockScreenLock;
	HDSPEnvironment* _environment;
	HDSPSleepLockScreenStateMachine* _stateMachine;
	HDSPSleepLockScreenAssertionManager* _assertionManager;
	long long _currentLockScreenState;
	/*^block*/id _didUpdateAlertAssertion;

}

@property (nonatomic,readonly) os_unfair_lock_s sleepLockScreenLock;                                //@synthesize sleepLockScreenLock=_sleepLockScreenLock - In the implementation block
@property (nonatomic,readonly) HDSPSleepLockScreenStateMachine * stateMachine;                      //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) HDSPSleepLockScreenAssertionManager * assertionManager;              //@synthesize assertionManager=_assertionManager - In the implementation block
@property (assign,nonatomic) long long currentLockScreenState;                                      //@synthesize currentLockScreenState=_currentLockScreenState - In the implementation block
@property (nonatomic,copy) id didUpdateAlertAssertion;                                              //@synthesize didUpdateAlertAssertion=_didUpdateAlertAssertion - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) long long sleepMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                                //@synthesize environment=_environment - In the implementation block
-(id)diagnosticInfo;
-(void)presentAlertForGoodMorning;
-(id)_currentState;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)dismissAlertForGoodMorning;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(long long)currentLockScreenState;
-(NSDate *)currentDate;
-(os_unfair_lock_s)sleepLockScreenLock;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)_withLock:(/*^block*/id)arg1 ;
-(HDSPSleepLockScreenAssertionManager *)assertionManager;
-(void)setCurrentLockScreenState:(long long)arg1 ;
-(void)lockScreenDidConnect;
-(id)initWithEnvironment:(id)arg1 assertionManager:(id)arg2 ;
-(void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3 ;
-(long long)sleepMode;
-(id)initWithEnvironment:(id)arg1 ;
-(id)didUpdateAlertAssertion;
-(id)diagnosticDescription;
-(void)sleepLockScreenStateDidChange:(long long)arg1 previousState:(long long)arg2 ;
-(HDSPSleepLockScreenStateMachine *)stateMachine;
-(void)setDidUpdateAlertAssertion:(id)arg1 ;
-(long long)_lock_resolvedLockScreenState;
-(void)sensitiveUIStateChanged;
-(void)overrideLockScreenState:(long long)arg1 userInfo:(id)arg2 ;
-(HDSPEnvironment *)environment;
-(BOOL)_lock_shouldShowLockScreenForState:(long long)arg1 ;
-(BOOL)_lock_overridingLockScreenState;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepSettings:(id)arg3 ;
-(void)_lock_updateLockScreenAssertion;
@end

