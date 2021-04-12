/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTLearnedLocationEngineProtocol.h>
#import <libobjc.A.dylib/RTPurgable.h>
#import <libobjc.A.dylib/RTDiagnosticProvider.h>

@class RTAccountManager, RTLearnedLocationAlgorithmMetricCalculator, RTContactsManager, RTDiagnostics, RTDefaultsManager, RTLocationManager, RTLocationStore, RTEventManager, RTMapsSupportManager, RTMetricManager, RTMotionActivityManager, RTPersonalizationPortraitManager, RTVisitManager, RTXPCActivityManager, RTFingerprintManager, RTLearnedLocationEngine, RTLearnedLocationStore, RTSettledStateTransitionStore, RTDistanceCalculator, RTMapServiceManager, RTPlatform, NSString;

@interface RTLearnedLocationManager : RTService <RTLearnedLocationEngineProtocol, RTPurgable, RTDiagnosticProvider> {

	BOOL _available;
	BOOL _migrationComplete;
	RTAccountManager* _accountManager;
	RTLearnedLocationAlgorithmMetricCalculator* _algorithmMetricCalculator;
	RTContactsManager* _contactsManager;
	RTDiagnostics* _diagnostics;
	RTDefaultsManager* _defaultsManager;
	RTLocationManager* _locationManager;
	RTLocationStore* _locationStore;
	RTEventManager* _eventManager;
	RTMapsSupportManager* _mapsSupportManager;
	RTMetricManager* _metricManager;
	RTMotionActivityManager* _motionActivityManager;
	RTPersonalizationPortraitManager* _portraitManager;
	RTVisitManager* _visitManager;
	RTXPCActivityManager* _xpcActivityManager;
	RTFingerprintManager* _fingerprintManager;
	RTLearnedLocationEngine* _learnedLocationEngine;
	RTLearnedLocationStore* _learnedLocationStore;
	RTSettledStateTransitionStore* _settledStateTransitionStore;
	RTDistanceCalculator* _distanceCalculator;
	RTMapServiceManager* _mapServiceManager;
	RTPlatform* _platform;

}

@property (nonatomic,readonly) RTAccountManager * accountManager;                                                   //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationAlgorithmMetricCalculator * algorithmMetricCalculator;              //@synthesize algorithmMetricCalculator=_algorithmMetricCalculator - In the implementation block
@property (nonatomic,readonly) RTContactsManager * contactsManager;                                                 //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,readonly) RTDiagnostics * diagnostics;                                                         //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,readonly) RTDefaultsManager * defaultsManager;                                                 //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,readonly) RTLocationManager * locationManager;                                                 //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) RTLocationStore * locationStore;                                                     //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,readonly) RTEventManager * eventManager;                                                       //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,readonly) RTMapsSupportManager * mapsSupportManager;                                           //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (nonatomic,readonly) RTMetricManager * metricManager;                                                     //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,readonly) RTMotionActivityManager * motionActivityManager;                                     //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,readonly) RTPersonalizationPortraitManager * portraitManager;                                  //@synthesize portraitManager=_portraitManager - In the implementation block
@property (nonatomic,readonly) RTVisitManager * visitManager;                                                       //@synthesize visitManager=_visitManager - In the implementation block
@property (nonatomic,readonly) RTXPCActivityManager * xpcActivityManager;                                           //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
@property (nonatomic,retain) RTFingerprintManager * fingerprintManager;                                             //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationEngine * learnedLocationEngine;                                       //@synthesize learnedLocationEngine=_learnedLocationEngine - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationStore * learnedLocationStore;                                       //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,readonly) RTSettledStateTransitionStore * settledStateTransitionStore;                         //@synthesize settledStateTransitionStore=_settledStateTransitionStore - In the implementation block
@property (nonatomic,readonly) RTDistanceCalculator * distanceCalculator;                                           //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,readonly) RTMapServiceManager * mapServiceManager;                                             //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,readonly) RTPlatform * platform;                                                               //@synthesize platform=_platform - In the implementation block
@property (assign,nonatomic) BOOL available;                                                                        //@synthesize available=_available - In the implementation block
@property (nonatomic,readonly) BOOL migrationComplete;                                                              //@synthesize migrationComplete=_migrationComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modeToString:(long long)arg1 ;
+(id)migrateLegacyMapItemWithGeoMapItem:(id)arg1 geoMapItemHandle:(id)arg2 source:(unsigned long long)arg3 mapServiceManager:(id)arg4 error:(id*)arg5 ;
+(double)distanceThresholdFromUncertainty:(double)arg1 otherUncertainty:(double)arg2 ;
+(double)maxDistanceFromInterval:(double)arg1 velocity:(double)arg2 ;
-(id)init;
-(RTPlatform *)platform;
-(void)setAvailable:(BOOL)arg1 ;
-(void)_setup;
-(BOOL)available;
-(void)_shutdown;
-(void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTDiagnostics *)diagnostics;
-(RTLocationManager *)locationManager;
-(RTContactsManager *)contactsManager;
-(void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTAccountManager *)accountManager;
-(RTEventManager *)eventManager;
-(void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTLocationStore *)locationStore;
-(RTDefaultsManager *)defaultsManager;
-(RTLearnedLocationStore *)learnedLocationStore;
-(RTMetricManager *)metricManager;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)fetchModeAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTVisitManager *)visitManager;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)addLocationOfInterestWithType:(unsigned long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 mapItem:(id)arg3 mapItemSource:(unsigned long long)arg4 customLabel:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 mapItemSource:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(RTFingerprintManager *)fingerprintManager;
-(void)setFingerprintManager:(RTFingerprintManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(RTDistanceCalculator *)distanceCalculator;
-(id)initWithQueue:(id)arg1 accountManager:(id)arg2 algorithmMetricCalculator:(id)arg3 contactsManager:(id)arg4 defaultsManager:(id)arg5 diagnostics:(id)arg6 distanceCalculator:(id)arg7 eventManager:(id)arg8 fingerprintManager:(id)arg9 learnedLocationStore:(id)arg10 locationManager:(id)arg11 locationStore:(id)arg12 mapServiceManager:(id)arg13 mapsSupportManager:(id)arg14 metricManager:(id)arg15 motionActivityManager:(id)arg16 platform:(id)arg17 portraitManager:(id)arg18 settledStateTransitionStore:(id)arg19 visitManager:(id)arg20 xpcActivityManager:(id)arg21 ;
-(id)initWithQueue:(id)arg1 distanceCalculator:(id)arg2 learnedLocationEngine:(id)arg3 learnedLocationStore:(id)arg4 mapServiceManager:(id)arg5 ;
-(void)_migrateStateModelLegacy:(/*^block*/id)arg1 ;
-(void)_migrateLegacyMapItems:(/*^block*/id)arg1 ;
-(RTLearnedLocationEngine *)learnedLocationEngine;
-(void)trainLocationsOfInterestModelWithHandler:(/*^block*/id)arg1 ;
-(void)_logLearnedState;
-(RTLearnedLocationAlgorithmMetricCalculator *)algorithmMetricCalculator;
-(RTMapsSupportManager *)mapsSupportManager;
-(RTMotionActivityManager *)motionActivityManager;
-(RTPersonalizationPortraitManager *)portraitManager;
-(RTSettledStateTransitionStore *)settledStateTransitionStore;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)setLearnedLocationEngine:(RTLearnedLocationEngine *)arg1 ;
-(void)onLearnedLocationStoreNotification:(id)arg1 ;
-(void)fetchRecentLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchRecentLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(id)_getLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 fromLocationsOfInterest:(id)arg3 error:(id*)arg4 ;
-(void)_fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchFusionCandidatesForVisitIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchInferredMapItemForVisitIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchInferredMapItemForVisitIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_queryProvider:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(id)_getLocationOfInterestAtLocation:(id)arg1 fromLocationsOfInterest:(id)arg2 error:(id*)arg3 ;
-(void)_fetchLocationOfInterestAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(double)_weeksInLearnedLocationsOfInterestModel;
-(id)_getLocationsOfInterestVisitedBeforeDate:(id)arg1 fromLocationsOfInterest:(id)arg2 error:(id*)arg3 ;
-(void)_fetchModeAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitIdentifiersIn:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchVisitIdentifiersIn:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)_updateContactsWithLearnedPlace:(id)arg1 originalLearnedPlace:(id)arg2 error:(id*)arg3 ;
-(void)_addLocationOfInterestWithType:(unsigned long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)validateUpdatedMapItem:(id)arg1 locationOfInterest:(id)arg2 error:(id*)arg3 ;
-(id)createAndStoreNewPlaceWithMapItem:(id)arg1 customLabel:(id)arg2 mapItemSource:(unsigned long long)arg3 outError:(id*)arg4 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 mapItem:(id)arg3 mapItemSource:(unsigned long long)arg4 customLabel:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 mapItemSource:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)trainWithHandler:(/*^block*/id)arg1 ;
-(void)_trainWithHandler:(/*^block*/id)arg1 ;
-(void)_forceRelabeling:(/*^block*/id)arg1 ;
-(void)_trainLocationsOfInterestModelWithHandler:(/*^block*/id)arg1 ;
-(void)reconcileLearnedLocationsWithHandler:(/*^block*/id)arg1 ;
-(void)_reconcileLearnedLocationsWithHandler:(/*^block*/id)arg1 ;
-(void)classifyPlaceTypesWithHandler:(/*^block*/id)arg1 ;
-(void)_classifyPlaceTypesWithHandler:(/*^block*/id)arg1 ;
-(void)_addLocationOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)_addVisit:(id)arg1 locationOfInterest:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_performLegacyMigrations:(/*^block*/id)arg1 ;
-(void)_onLearnedLocationStoreNotification:(id)arg1 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateTransitionWithIdentifier:(id)arg1 motionActivityType:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_reconstructTransitionsWithHandler:(/*^block*/id)arg1 ;
-(void)learnedLocationEngineDidUpdate:(id)arg1 intervalSinceLastUpdate:(double)arg2 ;
-(void)learnedLocationEngineWillBeginTraining:(id)arg1 ;
-(void)learnedLocationEngineDidFinishTraining:(id)arg1 ;
-(void)sendDiagnosticsToURL:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchFusionCandidatesForVisitIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)queryProvider:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)forceRelabeling:(/*^block*/id)arg1 ;
-(void)addLocationOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)addVisit:(id)arg1 locationOfInterest:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)logDatabasesWithHandler:(/*^block*/id)arg1 ;
-(void)reconstructTransitionsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)migrationComplete;
@end

