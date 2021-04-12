/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTManagedConfigurationObserver.h>
#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_source;
@class NSObject, RTLocationManager, RTMotionActivityManager, RTMapsSupportManager, RTMetricManager, NSManagedObjectContext, RTPersistenceManager, RTVehicleLocationHistoryController, RTLearnedLocationManager, RTManagedConfiguration, RTDefaultsManager, RTKeychainManager, RTVehicleEvent, NSMutableArray, RTFMCScoreBoard, NSString;

@interface RTVehicleLocationProvider : RTService <RTManagedConfigurationObserver, RTPurgable> {

	BOOL _monitorVehicleLocation;
	BOOL _monitorVehicleConnection;
	BOOL _monitorVehicleExit;
	BOOL _monitorLocation;
	BOOL _vehicleEventPendingDeletion;
	BOOL _locationsOfInterestAvailable;
	NSObject*<OS_dispatch_source> _finalizeLocationEstimateTimer;
	RTLocationManager* _locationManager;
	RTMotionActivityManager* _motionActivityManager;
	RTMapsSupportManager* _mapsSupportManager;
	RTMetricManager* _metricManager;
	NSManagedObjectContext* _managedObjectContext;
	RTPersistenceManager* _persistenceManager;
	RTVehicleLocationHistoryController* _vehicleLocationHistoryController;
	RTLearnedLocationManager* _learnedLocationManager;
	RTManagedConfiguration* _managedConfiguration;
	RTDefaultsManager* _defaultsManager;
	RTKeychainManager* _keychainManager;
	RTVehicleEvent* _lastVehicleParkedEvent;
	RTVehicleEvent* _pendingVehicleParkedEvent;
	RTVehicleEvent* _vehicleEventPendingPersist;
	NSMutableArray* _locationsCache;
	NSMutableArray* _locationsCacheLeeched;
	RTFMCScoreBoard* _scoreBoard;
	RTFMCScoreBoard* _scoreBoardForUnusualLocation;
	RTFMCScoreBoard* _scoreBoardForUsualLocation;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> finalizeLocationEstimateTimer;                        //@synthesize finalizeLocationEstimateTimer=_finalizeLocationEstimateTimer - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                                //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;                                    //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTMapsSupportManager * mapsSupportManager;                                          //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                                    //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                                      //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                                          //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTVehicleLocationHistoryController * vehicleLocationHistoryController;              //@synthesize vehicleLocationHistoryController=_vehicleLocationHistoryController - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                                  //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTManagedConfiguration * managedConfiguration;                                      //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                                //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTKeychainManager * keychainManager;                                                //@synthesize keychainManager=_keychainManager - In the implementation block
@property (assign,nonatomic) BOOL monitorVehicleLocation;                                                        //@synthesize monitorVehicleLocation=_monitorVehicleLocation - In the implementation block
@property (assign,nonatomic) BOOL monitorVehicleConnection;                                                      //@synthesize monitorVehicleConnection=_monitorVehicleConnection - In the implementation block
@property (assign,nonatomic) BOOL monitorVehicleExit;                                                            //@synthesize monitorVehicleExit=_monitorVehicleExit - In the implementation block
@property (assign,nonatomic) BOOL monitorLocation;                                                               //@synthesize monitorLocation=_monitorLocation - In the implementation block
@property (nonatomic,retain) RTVehicleEvent * lastVehicleParkedEvent;                                            //@synthesize lastVehicleParkedEvent=_lastVehicleParkedEvent - In the implementation block
@property (nonatomic,retain) RTVehicleEvent * pendingVehicleParkedEvent;                                         //@synthesize pendingVehicleParkedEvent=_pendingVehicleParkedEvent - In the implementation block
@property (nonatomic,retain) RTVehicleEvent * vehicleEventPendingPersist;                                        //@synthesize vehicleEventPendingPersist=_vehicleEventPendingPersist - In the implementation block
@property (assign,nonatomic) BOOL vehicleEventPendingDeletion;                                                   //@synthesize vehicleEventPendingDeletion=_vehicleEventPendingDeletion - In the implementation block
@property (assign,nonatomic) BOOL locationsOfInterestAvailable;                                                  //@synthesize locationsOfInterestAvailable=_locationsOfInterestAvailable - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationsCache;                                                    //@synthesize locationsCache=_locationsCache - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationsCacheLeeched;                                             //@synthesize locationsCacheLeeched=_locationsCacheLeeched - In the implementation block
@property (nonatomic,retain) RTFMCScoreBoard * scoreBoard;                                                       //@synthesize scoreBoard=_scoreBoard - In the implementation block
@property (nonatomic,retain) RTFMCScoreBoard * scoreBoardForUnusualLocation;                                     //@synthesize scoreBoardForUnusualLocation=_scoreBoardForUnusualLocation - In the implementation block
@property (nonatomic,retain) RTFMCScoreBoard * scoreBoardForUsualLocation;                                       //@synthesize scoreBoardForUsualLocation=_scoreBoardForUsualLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setManagedConfiguration:(RTManagedConfiguration *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(RTManagedConfiguration *)managedConfiguration;
-(void)_recordMetricSuppressedEvent;
-(void)_shutdown;
-(void)restoreLastVehicleEvent;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)_vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)_setup;
-(RTMetricManager *)metricManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTLocationManager *)locationManager;
-(RTPersistenceManager *)persistenceManager;
-(RTVehicleEvent *)lastVehicleParkedEvent;
-(RTMotionActivityManager *)motionActivityManager;
-(void)_finalizeLastVehicleEventIfAppropriate;
-(RTKeychainManager *)keychainManager;
-(void)onLearnedLocationManagerNotification:(id)arg1 ;
-(void)setScoreBoardForUsualLocation:(RTFMCScoreBoard *)arg1 ;
-(BOOL)monitorVehicleLocation;
-(void)_processPendingVehicleEventAfterLocationFinalization;
-(void)setMapsSupportManager:(RTMapsSupportManager *)arg1 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)didReceiveEffectiveSettingsChangedNotification;
-(BOOL)monitorVehicleExit;
-(id)init;
-(RTMapsSupportManager *)mapsSupportManager;
-(void)_postVehicleReplacementBulletinNotificationWithVehicleEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(RTVehicleLocationHistoryController *)vehicleLocationHistoryController;
-(RTFMCScoreBoard *)scoreBoard;
-(BOOL)_persistVehicleEvent:(id)arg1 ;
-(void)setLocationsCacheLeeched:(NSMutableArray *)arg1 ;
-(void)_submitFMCReturnToCarInstanceWithIdentifier:(id)arg1 horizontalAccuracy:(int)arg2 horizontalDistance:(int)arg3 ;
-(RTVehicleEvent *)vehicleEventPendingPersist;
-(void)_finalizeLocationEstimate;
-(void)requestLocations;
-(void)setFinalizeLocationEstimateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_submitFMCDailyAssessments;
-(void)_registerScoreBoardSubmission;
-(void)_onVehicleExitNotification:(id)arg1 ;
-(void)_onVehicleExit;
-(void)clearAllVehicleEvents;
-(BOOL)monitorVehicleConnection;
-(id)initWithLocationManager:(id)arg1 motionActivityManager:(id)arg2 mapsSupportManager:(id)arg3 metricManager:(id)arg4 managedObjectContext:(id)arg5 persistenceManager:(id)arg6 vehicleLocationHistoryController:(id)arg7 learnedLocationManager:(id)arg8 managedConfiguration:(id)arg9 defaultsManager:(id)arg10 keychainManager:(id)arg11 ;
-(void)_submitFMCCarParkedInstanceWithParkedEvents:(id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 mapItem:(id)arg2 ;
-(void)setPendingVehicleParkedEvent:(RTVehicleEvent *)arg1 ;
-(void)setVehicleEventPendingDeletion:(BOOL)arg1 ;
-(void)_updateUsualLocationOfVehicleEvent:(id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2 ;
-(void)setLastVehicleParkedEvent:(RTVehicleEvent *)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)_onVehicleParkedWithDeviceId:(id)arg1 ;
-(BOOL)vehicleEventPendingDeletion;
-(RTFMCScoreBoard *)scoreBoardForUnusualLocation;
-(void)setScoreBoard:(RTFMCScoreBoard *)arg1 ;
-(void)setLocationsCache:(NSMutableArray *)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(void)_onLocation:(id)arg1 ;
-(void)_recordMetricParkingEvent:(id)arg1 ;
-(void)_onVehicleConnectedNotification:(id)arg1 ;
-(void)_updateAuxiliaryDataIfAppropriate;
-(void)onVehicleConnectedNotification:(id)arg1 ;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)locationsOfInterestAvailable;
-(void)setLocationsOfInterestAvailable:(BOOL)arg1 ;
-(void)onVehicleExitNotification:(id)arg1 ;
-(void)setMonitorVehicleConnection:(BOOL)arg1 ;
-(void)onLeechedLocation:(id)arg1 ;
-(void)_submitFMCVehicleConnectionEventInstanceWithConnectionStatus:(int)arg1 ;
-(void)_clearBulletinNotifications;
-(void)_notifyClients;
-(void)onLocationNotification:(id)arg1 ;
-(void)fetchLastVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)_deleteLastVehicleEvent;
-(NSMutableArray *)locationsCache;
-(id)_getLastVehicleEvents;
-(void)_restoreLastVehicleEvent;
-(void)_onFinalizeLocationEstimateTimerExpiry;
-(void)setVehicleLocationHistoryController:(RTVehicleLocationHistoryController *)arg1 ;
-(void)setScoreBoardForUnusualLocation:(RTFMCScoreBoard *)arg1 ;
-(NSMutableArray *)locationsCacheLeeched;
-(NSObject*<OS_dispatch_source>)finalizeLocationEstimateTimer;
-(void)_submitFMCVehicleConnectionEventInstanceWithConnectionStatus:(int)arg1 value:(double)arg2 ;
-(void)setMonitorVehicleExit:(BOOL)arg1 ;
-(void)_updateNearbyLocationOfInterestOfVehicleEvent:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setKeychainManager:(RTKeychainManager *)arg1 ;
-(void)_submitFMCViewedInstanceWithIdentifier:(id)arg1 uiPlacement:(int)arg2 ;
-(void)_postBulletinNotificationIfAppropriate;
-(BOOL)_persistLastVehicleEvent;
-(RTVehicleEvent *)pendingVehicleParkedEvent;
-(void)persistLastVehicleEvent;
-(void)_recordMetricAssistanceEvent:(id)arg1 ;
-(void)_recordMetricEngagementEvent:(id)arg1 ;
-(void)setMonitorVehicleLocation:(BOOL)arg1 ;
-(RTFMCScoreBoard *)scoreBoardForUsualLocation;
-(void)_onVehicleStartedWithDeviceId:(id)arg1 ;
-(void)_onManagedObjectContextCreated:(id)arg1 ;
-(void)_clearAllVehicleEvents;
-(void)setMonitorLocation:(BOOL)arg1 ;
-(void)_submitFMCDailyAssessmentsWithSubmissionHandler:(/*^block*/id)arg1 ;
-(void)engageInVehicleEventWithIdentifier:(id)arg1 ;
-(void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(/*^block*/id)arg1 ;
-(BOOL)monitorLocation;
-(void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2 ;
-(void)_submitFMCAssistanceInstanceWithIdentifier:(id)arg1 uiPlacement:(int)arg2 assistanceType:(int)arg3 assistanceValue:(int)arg4 ;
-(void)fetchFMCEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)setVehicleEventPendingPersist:(RTVehicleEvent *)arg1 ;
-(BOOL)_sameVehicleWithDeviceId:(id)arg1 otherDeviceId:(id)arg2 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2 ;
@end

