/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTLearnedLocationEngineProtocol.h>
#import <libobjc.A.dylib/RTPurgable.h>
#import <libobjc.A.dylib/RTStoreManager.h>

@class RTContactsManager, RTDistanceCalculator, RTLearnedLocationEngine, RTLearnedLocationStore, RTMapServiceManager, NSString;

@interface RTLearnedLocationManager : RTService <RTLearnedLocationEngineProtocol, RTPurgable, RTStoreManager> {

	BOOL _available;
	BOOL _migrationComplete;
	RTContactsManager* _contactsManager;
	RTDistanceCalculator* _distanceCalculator;
	RTLearnedLocationEngine* _learnedLocationEngine;
	RTLearnedLocationStore* _learnedLocationStore;
	RTMapServiceManager* _mapServiceManager;

}

@property (nonatomic,readonly) RTContactsManager * contactsManager;                        //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,readonly) RTDistanceCalculator * distanceCalculator;                  //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,retain) RTLearnedLocationEngine * learnedLocationEngine;              //@synthesize learnedLocationEngine=_learnedLocationEngine - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationStore * learnedLocationStore;              //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,readonly) RTMapServiceManager * mapServiceManager;                    //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (assign,nonatomic) BOOL available;                                               //@synthesize available=_available - In the implementation block
@property (nonatomic,readonly) BOOL migrationComplete;                                     //@synthesize migrationComplete=_migrationComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modeToString:(long long)arg1 ;
+(double)distanceThresholdFromUncertainty:(double)arg1 otherUncertainty:(double)arg2 ;
+(double)maxDistanceFromInterval:(double)arg1 velocity:(double)arg2 ;
+(id)migrateLegacyMapItemWithGeoMapItem:(id)arg1 geoMapItemHandle:(id)arg2 source:(unsigned long long)arg3 mapServiceManager:(id)arg4 error:(id*)arg5 ;
+(id)vendedClasses;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)setAvailable:(BOOL)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reconcileLearnedLocationsWithHandler:(/*^block*/id)arg1 ;
-(void)onLearnedLocationStoreNotification:(id)arg1 ;
-(RTContactsManager *)contactsManager;
-(void)_shutdown;
-(void)_fetchInferredMapItemForVisitIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)_setup;
-(RTLearnedLocationStore *)learnedLocationStore;
-(void)updateTransitionWithIdentifier:(id)arg1 motionActivityType:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)available;
-(void)fetchRecentLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 contactsManager:(id)arg2 distanceCalculator:(id)arg3 learnedLocationStore:(id)arg4 mapServiceManager:(id)arg5 ;
-(void)_reconcileLearnedLocationsWithHandler:(/*^block*/id)arg1 ;
-(void)_onLearnedLocationStoreNotification:(id)arg1 ;
-(void)_addLocationOfInterestWithType:(unsigned long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)removeAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)learnedLocationEngineDidFinishTraining:(id)arg1 ;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)trainLocationsOfInterestModelWithHandler:(/*^block*/id)arg1 ;
-(void)setLearnedLocationEngine:(RTLearnedLocationEngine *)arg1 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 mapItem:(id)arg3 mapItemSource:(unsigned long long)arg4 customLabel:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)_migrateLegacyMapItems:(/*^block*/id)arg1 ;
-(void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)learnedLocationEngineDidUpdate:(id)arg1 intervalSinceLastUpdate:(double)arg2 ;
-(void)_performLegacyMigrations:(/*^block*/id)arg1 ;
-(id)_updateContactsWithLearnedPlace:(id)arg1 originalLearnedPlace:(id)arg2 error:(id*)arg3 ;
-(void)_reconstructTransitionsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_logLearnedState;
-(void)_removeAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(BOOL)migrationComplete;
-(id)_getLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 fromLocationsOfInterest:(id)arg3 error:(id*)arg4 ;
-(void)_migrateStateModelLegacy:(/*^block*/id)arg1 ;
-(void)_removeLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(double)_weeksInLearnedLocationsOfInterestModel;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 mapItemSource:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchFusionCandidatesForVisitIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchLocationOfInterestAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)trainWithHandler:(/*^block*/id)arg1 ;
-(void)_trainLocationsOfInterestModelWithHandler:(/*^block*/id)arg1 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchModeAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)forceRelabeling:(/*^block*/id)arg1 ;
-(void)_fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTDistanceCalculator *)distanceCalculator;
-(void)_fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)logDatabasesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)classifyPlaceTypesWithHandler:(/*^block*/id)arg1 ;
-(void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 mapItem:(id)arg3 mapItemSource:(unsigned long long)arg4 customLabel:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)fetchInferredMapItemForVisitIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_trainWithHandler:(/*^block*/id)arg1 ;
-(void)_queryProvider:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTLearnedLocationEngine *)learnedLocationEngine;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_forceRelabeling:(/*^block*/id)arg1 ;
-(BOOL)validateUpdatedMapItem:(id)arg1 locationOfInterest:(id)arg2 error:(id*)arg3 ;
-(void)fetchAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)queryProvider:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchVisitIdentifiersIn:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addLocationOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchRecentLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchModeAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)reconstructTransitionsWithHandler:(/*^block*/id)arg1 ;
-(void)learnedLocationEngineWillBeginTraining:(id)arg1 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addVisit:(id)arg1 locationOfInterest:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)fetchFusionCandidatesForVisitIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_getLocationsOfInterestVisitedBeforeDate:(id)arg1 fromLocationsOfInterest:(id)arg2 error:(id*)arg3 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_addVisit:(id)arg1 locationOfInterest:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_classifyPlaceTypesWithHandler:(/*^block*/id)arg1 ;
-(void)_addLocationOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)addLocationOfInterestWithType:(unsigned long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchVisitIdentifiersIn:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 mapItemSource:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(id)createAndStoreNewPlaceWithMapItem:(id)arg1 customLabel:(id)arg2 mapItemSource:(unsigned long long)arg3 outError:(id*)arg4 ;
-(id)_getLocationOfInterestAtLocation:(id)arg1 fromLocationsOfInterest:(id)arg2 error:(id*)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

