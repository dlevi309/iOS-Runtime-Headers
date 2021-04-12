/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDataCollector.h>
#import <libobjc.A.dylib/HDHeartRateDataCollector.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, HDHeartRateDataAggregator, HDHeartRateVariabilityDataAggregator, HDHeartbeatSequenceDataAggregator, HDTachycardiaDataAggregator, HDBradycardiaDataAggregator, HDDataCollectorConfiguration, HDDataCollectorState, CMCatherineFeeder, HDDeviceEntity, NSString;

@interface HDHRHealthLiteDataCollector : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDataCollector, HDHeartRateDataCollector> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _heartRateEnabledInPrivacy;
	int _privacyPreferencesNotificationToken;
	int _powerSavingModeNotificationToken;
	HDHeartRateDataAggregator* _heartRateAggregator;
	HDHeartRateVariabilityDataAggregator* _heartRateVariabilityDataAggregator;
	HDHeartbeatSequenceDataAggregator* _heartbeatSequenceAggregator;
	HDTachycardiaDataAggregator* _tachycardiaAggregator;
	HDBradycardiaDataAggregator* _bradycardiaAggregator;
	HDDataCollectorConfiguration* _heartRateCollectionConfiguration;
	HDDataCollectorConfiguration* _heartRateVariabilityCollectionConfiguration;
	HDDataCollectorConfiguration* _heartbeatSequenceCollectionConfiguration;
	HDDataCollectorConfiguration* _tachycardiaCollectionConfiguration;
	HDDataCollectorConfiguration* _bradycardiaCollectionConfiguration;
	HDDataCollectorState* _heartRateCollectionState;
	HDDataCollectorState* _heartRateVariabilityCollectionState;
	HDDataCollectorState* _heartbeatSequenceCollectionState;
	HDDataCollectorState* _tachycardiaCollectionState;
	HDDataCollectorState* _bradycardiaCollectionState;
	CMCatherineFeeder* _catherineFeeder;
	HDDeviceEntity* _localDeviceEntity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)identifierForDataAggregator:(id)arg1 ;
-(id)sourceForDataAggregator:(id)arg1 ;
-(void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2 ;
-(id)diagnosticDescription;
-(void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2 ;
-(void)dealloc;
-(void)_queue_powerSavingModeDidChange;
-(void)dataCollector:(id)arg1 didCollectHeartRate:(id)arg2 device:(id)arg3 source:(id)arg4 ;
-(void)_queue_privacyPreferencesDidChange;
-(void)_startObservingCurrentWorkoutChanges;
-(void)_startObservingAssertionManagerChanges;
-(void)_queue_createHealthLiteManager;
-(void)_queue_updateHeartRateCollectionType;
-(void)_queue_updateHeartRateVariabilityCollectionType;
-(void)_queue_updateHeartbeatSequenceCollectionType;
-(void)_queue_updateTachycardiaCollectionType;
-(void)_queue_updateBradycardiaCollectionType;
-(BOOL)_queue_isPowerSavingModePreventingStreaming;
-(void)_workoutManagerStateDidChange;
-(void)_assertionManagerStateChanged:(id)arg1 ;
-(void)_queue_updateAllCollectionTypes;
-(id)deviceForDataAggregator:(id)arg1 ;
-(void)_registerPowerLogEvent:(id)arg1 ;
-(void)_setCatherineFeeder:(id)arg1 ;
@end
