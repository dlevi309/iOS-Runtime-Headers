/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HKSPSleepServer.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPSleepEventHandler.h>
#import <libobjc.A.dylib/HDSPSleepModeObserver.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, NAFuture, HKSPXPCConnectionListener, HDSPSleepMessageStore, NSString;

@interface HDSPSleepStoreServer : NSObject <HKSPSleepServer, HDSPSleepScheduleStateObserver, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepModeObserver, HDSPDiagnosticsProvider, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	NAFuture* _environmentIsReady;
	HKSPXPCConnectionListener* _connectionListener;
	HDSPSleepMessageStore* _messageStore;

}

@property (nonatomic,readonly) NAFuture * environmentIsReady;                               //@synthesize environmentIsReady=_environmentIsReady - In the implementation block
@property (nonatomic,readonly) HKSPXPCConnectionListener * connectionListener;              //@synthesize connectionListener=_connectionListener - In the implementation block
@property (nonatomic,readonly) HDSPSleepMessageStore * messageStore;                        //@synthesize messageStore=_messageStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                        //@synthesize environment=_environment - In the implementation block
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(void)sleepEventIsDue:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 connectionListenerProvider:(/*^block*/id)arg2 ;
-(void)startListening;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(void)skipWindDownWithCompletion:(/*^block*/id)arg1 ;
-(void)getSleepEventRecordWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepAlarmWasDismissedOnDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HKSPXPCConnectionListener *)connectionListener;
-(void)getSleepScheduleWithCompletion:(/*^block*/id)arg1 ;
-(void)setSleepMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyClientForMissedScheduleChange:(id)arg1 syncAnchor:(id)arg2 ;
-(void)saveSleepEventRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmAwakeWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3 ;
-(void)_performWhenEnvironmentIsReady:(/*^block*/id)arg1 ;
-(void)_notifyClient:(id)arg1 forMissedSleepEvent:(id)arg2 syncAnchor:(id)arg3 ;
-(void)sleepAlarmWasSnoozedUntilDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(NAFuture *)environmentIsReady;
-(void)setLockScreenOverrideState:(long long)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)diagnosticDescription;
-(void)getSleepSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)environmentWillInvalidate:(id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepEventRecord:(id)arg3 ;
-(void)saveSleepSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyClientForMissedRecordChange:(id)arg1 syncAnchor:(id)arg2 ;
-(HDSPSleepMessageStore *)messageStore;
-(void)saveSleepSchedule:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSleepModeWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissGoodMorningWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifyClientForMissedSleepModeChange:(id)arg1 syncAnchor:(id)arg2 ;
-(HDSPEnvironment *)environment;
-(void)_notifyClientForMissedScheduleStateChange:(id)arg1 syncAnchor:(id)arg2 ;
-(void)publishWakeUpResultsNotificationWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepAlarmWasModifiedWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifyClient:(id)arg1 forMissedMessagesWithSyncAnchor:(id)arg2 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepSettings:(id)arg3 ;
-(void)publishNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)delayBedtimeForTimeInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyClientForMissedSettingsChange:(id)arg1 syncAnchor:(id)arg2 ;
-(void)getSleepScheduleStateWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepSchedule:(id)arg3 ;
-(void)skipBedtimeWithCompletion:(/*^block*/id)arg1 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(void)checkInWithSyncAnchor:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

