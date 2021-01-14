/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/TATrackingAvoidanceServiceObserver.h>
#import <libobjc.A.dylib/TATrackingAvoidanceServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, TATrackingAvoidanceService, TASettings, TATrackingAvoidanceServiceStateContext, TAPersistenceManager, NSUUID, TAAnalyticsManager, NSString;

@interface TATrackingAvoidanceServiceManager : NSObject <TATrackingAvoidanceServiceObserver, TATrackingAvoidanceServiceProtocol> {

	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	NSHashTable* _dataSources;
	TATrackingAvoidanceService* _service;
	TASettings* _serviceSettings;
	TATrackingAvoidanceServiceStateContext* _stateContext;
	TAPersistenceManager* _persistenceManager;
	unsigned long long _persistenceManagerLastSaveTime;
	NSUUID* _sessionID;
	TAAnalyticsManager* _analyticsManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                            //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSHashTable * dataSources;                                          //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,retain) TATrackingAvoidanceService * service;                               //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) TASettings * serviceSettings;                                       //@synthesize serviceSettings=_serviceSettings - In the implementation block
@property (nonatomic,retain) TATrackingAvoidanceServiceStateContext * stateContext;              //@synthesize stateContext=_stateContext - In the implementation block
@property (nonatomic,retain) TAPersistenceManager * persistenceManager;                          //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (assign,nonatomic) unsigned long long persistenceManagerLastSaveTime;                  //@synthesize persistenceManagerLastSaveTime=_persistenceManagerLastSaveTime - In the implementation block
@property (nonatomic,retain) NSUUID * sessionID;                                                 //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) TAAnalyticsManager * analyticsManager;                              //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (readonly) unsigned long long state;                                                   //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)managerStateToString:(unsigned long long)arg1 ;
-(NSHashTable *)dataSources;
-(void)addObserver:(id)arg1 ;
-(void)setPersistenceManager:(TAPersistenceManager *)arg1 ;
-(void)_setState:(unsigned long long)arg1 ;
-(NSUUID *)sessionID;
-(void)setSessionID:(NSUUID *)arg1 ;
-(TAPersistenceManager *)persistenceManager;
-(NSHashTable *)observers;
-(void)ingestTAEvent:(id)arg1 ;
-(void)addDataSource:(id)arg1 ;
-(TASettings *)serviceSettings;
-(void)setServiceSettings:(TASettings *)arg1 ;
-(void)removeDataSource:(id)arg1 ;
-(void)setDataSources:(NSHashTable *)arg1 ;
-(void)setAnalyticsManager:(TAAnalyticsManager *)arg1 ;
-(TAAnalyticsManager *)analyticsManager;
-(TATrackingAvoidanceServiceStateContext *)stateContext;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setService:(TATrackingAvoidanceService *)arg1 ;
-(unsigned long long)state;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(TATrackingAvoidanceService *)service;
-(void)_changeSession;
-(void)trackingAvoidanceService:(id)arg1 didFindSuspiciousDevices:(id)arg2 ;
-(void)trackingAvoidanceService:(id)arg1 requestingAdditionalInformation:(id)arg2 ;
-(void)trackingAvoidanceService:(id)arg1 didUpdateSuspiciousDevices:(id)arg2 ;
-(void)trackingAvoidanceService:(id)arg1 didStageSuspiciousDevices:(id)arg2 ;
-(void)visitStateChangedForTrackingAvoidanceService:(id)arg1 ;
-(void)onUpdatedSettings:(id)arg1 ;
-(void)_handleStateUpdateIfNecessary;
-(void)_unregisterForAvengerScanner;
-(void)_unregisterForTATrackingAvoidanceService;
-(void)notifyObserversOfStateChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(BOOL)_shouldTerminateService;
-(BOOL)_shouldSuspendAvengerScanner;
-(void)_registerForTATrackingAvoidanceServiceWithSettings:(id)arg1 ;
-(void)_registerForAvengerScanner;
-(void)_loadAndBootstrap;
-(void)_schedulePeriodicSaveAfterTimeInterval:(double)arg1 ;
-(void)_setLastSaveTime;
-(void)_fetchStoreAndSave;
-(void)_onHighThermalState:(BOOL)arg1 ;
-(void)_onAirplaneMode:(BOOL)arg1 ;
-(void)_onBatterySaverMode:(BOOL)arg1 ;
-(void)_onLocationServicesEnabled:(BOOL)arg1 ;
-(void)_onLocationSimulationInProgress:(BOOL)arg1 ;
-(void)_onAllowSimulatedEvents:(BOOL)arg1 ;
-(void)_onDeviceUnlockedSinceBoot:(BOOL)arg1 ;
-(void)_onLocationAndPrivacyReset:(BOOL)arg1 ;
-(void)_onHasKoreaCountryCode:(BOOL)arg1 ;
-(void)_onUserLocationInsideKorea:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 settings:(id)arg2 ;
-(void)_onServiceEnabled:(BOOL)arg1 ;
-(void)setStateContext:(TATrackingAvoidanceServiceStateContext *)arg1 ;
-(unsigned long long)persistenceManagerLastSaveTime;
-(void)setPersistenceManagerLastSaveTime:(unsigned long long)arg1 ;
@end

