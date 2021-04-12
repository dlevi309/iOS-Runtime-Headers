/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSleepEventHandler.h>
#import <libobjc.A.dylib/HDSPSleepEventProvider.h>
#import <libobjc.A.dylib/HDSPTimeAsleepTrackerStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPTimeAsleepTrackerStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>
#import <libobjc.A.dylib/HDSPSleepModeObserver.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPWakeDetector.h>
#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPDevicePowerObserver.h>
#import <libobjc.A.dylib/HDSPSleepTracker.h>

@protocol HDSPSleepTrackerDelegate, HDSPWakeDetectorDelegate, HDSPSleepEventDelegate, HDSPTimeAsleepTracker;
@class NSString, NSDate, HKSPSleepScheduleModel, HDSPEnvironment, HDSPTimeAsleepTrackerStateMachine, NSArray;

@interface HDSPTimeAsleepTracker : NSObject <HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPTimeAsleepTrackerStateMachineInfoProvider, HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeChangeObserver, HDSPDiagnosticsProvider, HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPWakeDetector, HDSPNotificationObserver, HDSPDevicePowerObserver, HDSPSleepTracker> {

	os_unfair_lock_s _timeAsleepTrackerLock;
	HDSPEnvironment* _environment;
	id<HDSPSleepTrackerDelegate> _delegate;
	id<HDSPWakeDetectorDelegate> _wakeDetectorDelegate;
	id<HDSPSleepEventDelegate> _sleepEventDelegate;
	/*^block*/id _sleepTrackerProvider;
	id<HDSPTimeAsleepTracker> _sleepTracker;
	HDSPTimeAsleepTrackerStateMachine* _stateMachine;
	NSArray* _appLaunchRegistrations;

}

@property (nonatomic,copy,readonly) id sleepTrackerProvider;                                        //@synthesize sleepTrackerProvider=_sleepTrackerProvider - In the implementation block
@property (nonatomic,readonly) id<HDSPTimeAsleepTracker> sleepTracker;                              //@synthesize sleepTracker=_sleepTracker - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s timeAsleepTrackerLock;                              //@synthesize timeAsleepTrackerLock=_timeAsleepTrackerLock - In the implementation block
@property (nonatomic,readonly) HDSPTimeAsleepTrackerStateMachine * stateMachine;                    //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NSArray * appLaunchRegistrations;                                    //@synthesize appLaunchRegistrations=_appLaunchRegistrations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (assign,nonatomic,__weak) id<HDSPSleepEventDelegate> sleepEventDelegate;                  //@synthesize sleepEventDelegate=_sleepEventDelegate - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) BOOL isCharging; 
@property (nonatomic,readonly) BOOL inUserRequestedSleepMode; 
@property (nonatomic,readonly) BOOL inWakeDetectionWindow; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (assign,nonatomic,__weak) id<HDSPWakeDetectorDelegate> wakeDetectorDelegate;              //@synthesize wakeDetectorDelegate=_wakeDetectorDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<HDSPSleepTrackerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                                //@synthesize environment=_environment - In the implementation block
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id<HDSPSleepEventDelegate>)sleepEventDelegate;
-(void)sleepEventIsDue:(id)arg1 ;
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(id)upcomingEventsDueAfterDate:(id)arg1 ;
-(NSString *)providerIdentifier;
-(void)setSleepEventDelegate:(id<HDSPSleepEventDelegate>)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(NSDate *)currentDate;
-(id)currentState;
-(id<HDSPSleepTrackerDelegate>)delegate;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)processedSessionForSession:(id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(id<HDSPTimeAsleepTracker>)sleepTracker;
-(void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3 ;
-(unsigned long long)sleepScheduleState;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(void)setDelegate:(id<HDSPSleepTrackerDelegate>)arg1 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(void)updateState;
-(id)diagnosticDescription;
-(HDSPTimeAsleepTrackerStateMachine *)stateMachine;
-(HDSPEnvironment *)environment;
-(BOOL)inUserRequestedSleepMode;
-(BOOL)isCharging;
-(void)previousSessionFinished;
-(id)initWithEnvironment:(id)arg1 sleepTrackerProvider:(/*^block*/id)arg2 ;
-(void)_handleSleepSessionAnalysisResults:(id)arg1 endReason:(unsigned long long)arg2 ;
-(id)_createSleepSessionWithSleepAnalysis:(id)arg1 endReason:(unsigned long long)arg2 ;
-(void)_handleAppLaunched:(id)arg1 onDate:(id)arg2 ;
-(id)trackingWindowAfterDate:(id)arg1 ;
-(void)_handleActivityDetectedOnDate:(id)arg1 ;
-(void)_handleInternalSleepSessionEndRequest;
-(BOOL)inWakeDetectionWindow;
-(void)scheduleSleepTracking;
-(void)unscheduleSleepTracking;
-(void)startSleepTrackingSessionWithReason:(unsigned long long)arg1 ;
-(void)endSleepTrackingSessionWithReason:(unsigned long long)arg1 ;
-(void)startActivityDetection;
-(void)stopActivityDetection;
-(void)startAppLaunchDetection;
-(void)stopAppLaunchDetection;
-(void)notifyForActivityDetectedOnDate:(id)arg1 ;
-(void)startDetecting;
-(void)stopDetecting;
-(id<HDSPWakeDetectorDelegate>)wakeDetectorDelegate;
-(void)setWakeDetectorDelegate:(id<HDSPWakeDetectorDelegate>)arg1 ;
-(void)deviceChangedChargingState:(BOOL)arg1 ;
-(id)sleepTrackerProvider;
-(os_unfair_lock_s)timeAsleepTrackerLock;
-(NSArray *)appLaunchRegistrations;
@end

