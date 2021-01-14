/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/DNDSEventBehaviorResolverDataSource.h>
#import <libobjc.A.dylib/DNDSLifetimeMonitorDataSource.h>
#import <libobjc.A.dylib/DNDSScheduleLifetimeMonitorDataSource.h>
#import <libobjc.A.dylib/DNDSLifetimeMonitorDelegate.h>
#import <libobjc.A.dylib/DNDSRemoteServiceProviderDelegate.h>
#import <libobjc.A.dylib/DNDSAssertionSyncManagerDataSource.h>
#import <libobjc.A.dylib/DNDSAssertionSyncManagerDelegate.h>
#import <libobjc.A.dylib/DNDSLegacyAssertionSyncManagerDataSource.h>
#import <libobjc.A.dylib/DNDSSettingsSyncManagerDataSource.h>
#import <libobjc.A.dylib/DNDSSettingsSyncManagerDelegate.h>
#import <libobjc.A.dylib/DNDSScheduleManagerDataSource.h>
#import <libobjc.A.dylib/DNDSSettingsManagerDelegate.h>
#import <libobjc.A.dylib/DNDSPairedDeviceStateMonitorDelegate.h>

@protocol OS_dispatch_queue, DNDSAssertionSyncManager, DNDSSettingsSyncManager;
@class NSObject, DNDSClientDetailsProvider, DNDSModeAssertionManager, DNDSCalendarEventLifetimeMonitor, DNDSScheduleLifetimeMonitor, NSArray, DNDSScheduleManager, DNDSStateProvider, DNDSEventBehaviorResolver, DNDSRemoteServiceProvider, DNDSSettingsManager, IDSService, DNDSPairedDeviceStateMonitor, DNDSMetricsManager, NSString;

@interface DNDSServer : NSObject <DNDSEventBehaviorResolverDataSource, DNDSLifetimeMonitorDataSource, DNDSScheduleLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSRemoteServiceProviderDelegate, DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSLegacyAssertionSyncManagerDataSource, DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate, DNDSScheduleManagerDataSource, DNDSSettingsManagerDelegate, DNDSPairedDeviceStateMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	DNDSClientDetailsProvider* _clientDetailsProvider;
	DNDSModeAssertionManager* _modeAssertionManager;
	DNDSCalendarEventLifetimeMonitor* _calendarEventLifetimeMonitor;
	DNDSScheduleLifetimeMonitor* _scheduleLifetimeMonitor;
	NSArray* _lifetimeMonitors;
	DNDSScheduleManager* _scheduleManager;
	DNDSStateProvider* _stateProvider;
	DNDSEventBehaviorResolver* _eventBehaviorResolver;
	DNDSRemoteServiceProvider* _serviceProvider;
	id<DNDSAssertionSyncManager> _assertionSyncManager;
	id<DNDSSettingsSyncManager> _settingsSyncManager;
	DNDSSettingsManager* _settingsManager;
	IDSService* _idsService;
	DNDSPairedDeviceStateMonitor* _pairedDeviceStateMonitor;
	DNDSMetricsManager* _metricsManager;
	unsigned long long _lockState;
	unsigned long long _lostModeState;

}

@property (assign) unsigned long long lockState;                    //@synthesize lockState=_lockState - In the implementation block
@property (assign) unsigned long long lostModeState;                //@synthesize lostModeState=_lostModeState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLockState:(unsigned long long)arg1 ;
-(unsigned long long)lockState;
-(id)remoteServiceProvider:(id)arg1 resolveBehaviorForEventDetails:(id)arg2 clientDetails:(id)arg3 date:(id)arg4 error:(id*)arg5 ;
-(void)settingsManager:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2 ;
-(id)remoteServiceProvider:(id)arg1 invalidateModeAssertionForClientIdentifier:(id)arg2 reason:(unsigned long long)arg3 reasonOverride:(unsigned long long)arg4 details:(id)arg5 error:(id*)arg6 ;
-(id)init;
-(void)pairedDeviceStateMonitor:(id)arg1 pairingChangedFromDevice:(id)arg2 toDevice:(id)arg3 ;
-(id)eventBehaviorResolver:(id)arg1 bypassSettingsForClientIdentifier:(id)arg2 ;
-(id)remoteServiceProvider:(id)arg1 latestInvalidationWithClientIdentifer:(id)arg2 error:(id*)arg3 ;
-(id)_updateModeAssertionManagerAndRefreshLifetimesAndStateWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)phoneCallBypassSettingsForSyncManager:(id)arg1 ;
-(BOOL)remoteServiceProvider:(id)arg1 setScheduleSettings:(id)arg2 withError:(id*)arg3 ;
-(void)setLostModeState:(unsigned long long)arg1 ;
-(id)remoteServiceProvider:(id)arg1 invalidateAllModeAssertionsTakenBeforeDate:(id)arg2 forReason:(unsigned long long)arg3 clientIdentifier:(id)arg4 error:(id*)arg5 ;
-(BOOL)setUILockState:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)remoteServiceProvider:(id)arg1 setPhoneCallBypassSettings:(id)arg2 withError:(id*)arg3 ;
-(void)syncManager:(id)arg1 performModeAssertionUpdatesWithHandler:(/*^block*/id)arg2 ;
-(id)_stateSystemSnapshot;
-(unsigned long long)currentUILockStateForEventBehaviorResolver:(id)arg1 ;
-(id)currentlyActivePairedDeviceForSyncManager:(id)arg1 ;
-(id)currentStateForLegacyAssertionSyncManager:(id)arg1 ;
-(void)settingsManager:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2 ;
-(id)remoteServiceProvider:(id)arg1 assertionWithClientIdentifer:(id)arg2 error:(id*)arg3 ;
-(id)currentStateForEventBehaviorResolver:(id)arg1 ;
-(id)scheduleSettingsForScheduleLifetimeMonitor:(id)arg1 ;
-(void)syncManager:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2 ;
-(void)settingsManager:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2 ;
-(void)_handleSignificantTimeChange;
-(id)lifetimeMonitor:(id)arg1 modeAssertionsWithLifetimeClass:(Class)arg2 ;
-(id)remoteServiceProvider:(id)arg1 scheduleSettingsWithError:(id*)arg2 ;
-(id)remoteServiceProvider:(id)arg1 invalidateModeAssertionWithUUID:(id)arg2 reason:(unsigned long long)arg3 reasonOverride:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)lostModeState;
-(id)scheduleSettingsForScheduleManager:(id)arg1 ;
-(id)remoteServiceProvider:(id)arg1 phoneCallBypassSettingsWithError:(id*)arg2 ;
-(void)_queue_handlePairedDeviceAndSyncSettingsChange;
-(id)remoteServiceProvider:(id)arg1 behaviorSettingsWithError:(id*)arg2 ;
-(void)activeAssertionsDidChangeForLifetimeMonitor:(id)arg1 ;
-(BOOL)remoteServiceProvider:(id)arg1 setBehaviorSettings:(id)arg2 withError:(id*)arg3 ;
-(void)syncManager:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2 ;
-(id)scheduleSettingsForSyncManager:(id)arg1 ;
-(id)remoteServiceProvider:(id)arg1 takeModeAssertionWithDetails:(id)arg2 clientIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)settingsManager:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2 ;
-(id)remoteServiceProvider:(id)arg1 currentStateWithError:(id*)arg2 ;
-(void)_queue_resume;
-(void)lifetimeMonitor:(id)arg1 lifetimeDidExpireForAssertionUUIDs:(id)arg2 expirationDate:(id)arg3 ;
-(void)resume;
-(void)_queue_updateScheduleManagerLifetimeMonitorsAndStateForReason:(unsigned long long)arg1 ;
-(id)_activeDateIntervalForModeAssertion:(id)arg1 currentlyActive:(BOOL)arg2 ;
-(BOOL)_setLostModeState:(unsigned long long)arg1 error:(id*)arg2 ;
@end

