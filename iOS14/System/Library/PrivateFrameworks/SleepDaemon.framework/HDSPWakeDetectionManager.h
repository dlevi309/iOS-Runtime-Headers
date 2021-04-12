/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPWakeDetectorDelegate.h>
#import <libobjc.A.dylib/HDSPWakeDetectionStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPWakeDetectionStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPSleepEventHandler.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>
#import <libobjc.A.dylib/HDSPSleepEventProvider.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>

@protocol HDSPSleepEventDelegate;
@class NSDate, HKSPSleepScheduleOccurrence, HKSPSleepScheduleModel, HDSPEnvironment, NSArray, HDSPWakeDetectionStateMachine, NSString;

@interface HDSPWakeDetectionManager : NSObject <HDSPWakeDetectorDelegate, HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepScheduleStateObserver, HDSPSleepEventProvider, HDSPTimeChangeObserver> {

	os_unfair_lock_s _wakeDetectionLock;
	HDSPEnvironment* _environment;
	id<HDSPSleepEventDelegate> _sleepEventDelegate;
	NSArray* _wakeDetectors;
	HDSPWakeDetectionStateMachine* _stateMachine;

}

@property (nonatomic,readonly) NSArray * wakeDetectors;                                         //@synthesize wakeDetectors=_wakeDetectors - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s wakeDetectionLock;                              //@synthesize wakeDetectionLock=_wakeDetectionLock - In the implementation block
@property (nonatomic,readonly) HDSPWakeDetectionStateMachine * stateMachine;                    //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) BOOL isDetecting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleOccurrence * relevantOccurrence; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) BOOL sleepModeIsOff; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (assign,nonatomic,__weak) id<HDSPSleepEventDelegate> sleepEventDelegate;              //@synthesize sleepEventDelegate=_sleepEventDelegate - In the implementation block
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id<HDSPSleepEventDelegate>)sleepEventDelegate;
-(void)sleepEventIsDue:(id)arg1 ;
-(id)upcomingEventsDueAfterDate:(id)arg1 ;
-(NSString *)providerIdentifier;
-(void)setSleepEventDelegate:(id<HDSPSleepEventDelegate>)arg1 ;
-(id)_currentState;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(NSDate *)currentDate;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(BOOL)isDetecting;
-(unsigned long long)sleepScheduleState;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(void)updateState;
-(id)diagnosticDescription;
-(HDSPWakeDetectionStateMachine *)stateMachine;
-(BOOL)isWaiting;
-(HDSPEnvironment *)environment;
-(BOOL)sleepFeaturesEnabled;
-(id)detectionWindowAfterDate:(id)arg1 ;
-(void)wakeDetector:(id)arg1 didDetectWakeUpEventOnDate:(id)arg2 ;
-(void)postWakeDetectionNotification;
-(id)standardProviders;
-(id)initWithEnvironment:(id)arg1 wakeDetectorProviders:(id)arg2 ;
-(HKSPSleepScheduleOccurrence *)relevantOccurrence;
-(void)scheduleWakeDetection;
-(void)unscheduleWakeDetection;
-(void)startWakeDetection;
-(void)stopWakeDetection;
-(BOOL)sleepModeIsOff;
-(NSArray *)wakeDetectors;
-(os_unfair_lock_s)wakeDetectionLock;
@end

