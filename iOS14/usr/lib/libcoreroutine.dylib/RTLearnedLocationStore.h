/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTStore.h>
#import <libobjc.A.dylib/RTEnumerableStore.h>

@class RTPersistenceExpirationEnforcer, RTDistanceCalculator, NSString;

@interface RTLearnedLocationStore : RTStore <RTEnumerableStore> {

	RTPersistenceExpirationEnforcer* _expirationEnforcer;
	RTDistanceCalculator* _distanceCalculator;

}

@property (nonatomic,retain) RTPersistenceExpirationEnforcer * expirationEnforcer;              //@synthesize expirationEnforcer=_expirationEnforcer - In the implementation block
@property (nonatomic,retain) RTDistanceCalculator * distanceCalculator;                         //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filterPlaces:(id)arg1 ;
+(id)filterLocationsOfInterests:(id)arg1 ;
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(void)_extendExpirationDateOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchLastVisitToPlaceWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestWithVisitsWithinDistance:(double)arg1 location:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 includePlaceholders:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchInferredMapItemForVisitIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)deleteVisitsUsingCloudFetchRequest:(id)arg1 localFetchRequest:(id)arg2 context:(id)arg3 tombstoneContext:(id)arg4 error:(id*)arg5 ;
-(void)_removePlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)logLocalStoreWithReason:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateTransitionWithIdentifier:(id)arg1 motionActivityType:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchTransitionWithDestinationIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchPlaceOfVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchPlacesWithType:(unsigned long long)arg1 predicate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchPlacesWithMapItem:(id)arg1 predicate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchRecentLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(id)fetchVisitIdentifiersUsingFetchRequest:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)createFetchRequestForOverlappingVisits:(id)arg1 entityName:(id)arg2 entryDatePropertyName:(id)arg3 exitDatePropertyName:(id)arg4 context:(id)arg5 error:(id*)arg6 ;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchTransitionsWithHandler:(/*^block*/id)arg1 ;
-(void)_updateTransitionWithIdentifier:(id)arg1 motionActivityType:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)logCloudStoreWithReason:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)expireLifetimeOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_expireLifetimeOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchLocationOfInterestVisitedLastWithHandler:(/*^block*/id)arg1 ;
-(void)_updateLocationOfInterestWithIdentifier:(id)arg1 place:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 location:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_updateExpirationDateOfVisitSubgraphWithVisitIdentifiers:(id)arg1 expirationDate:(id)arg2 allowThresholdBypass:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchVisitsToPlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeOverlappingVisitsAndTransitionsForVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeRecordsExpiredBeforeDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitsWithPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateExpirationDateOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 allowThresholdBypass:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(id)fetchRequestFromOptions:(id)arg1 offset:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLastVisitToPlaceWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeTransitionsWithHandler:(/*^block*/id)arg1 ;
-(void)_removeLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)storeLocationsOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)deletePlacesWithinIdentifierSet:(id)arg1 tombstoneContext:(id)arg2 error:(id*)arg3 ;
-(void)fetchPlacesWithMapItem:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)fetchRequestFromLocationOfInterestOptions:(id)arg1 ;
-(id)_unionSetOfVisitIdentifiersOverlappingVisitIdentifiers:(id)arg1 allowThresholdBypass:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)placeTypeForMapItem:(id)arg1 placeType:(unsigned long long*)arg2 placeTypeSource:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)_removeUnreferencedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)removeRecordsExpiredBeforeDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLocationsOfInterestWithVisitsWithinDistance:(double)arg1 location:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchMetricsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)storeVisits:(id)arg1 place:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)deleteTransitionsReferencingVisitIdentifiers:(id)arg1 context:(id)arg2 tombstoneContext:(id)arg3 error:(id*)arg4 ;
-(void)clearWithHandler:(/*^block*/id)arg1 ;
-(void)storePlaces:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPlaceWithMapItemIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchVisitsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updatePlaces:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setExpirationEnforcer:(RTPersistenceExpirationEnforcer *)arg1 ;
-(void)fetchPlacesWithinDistance:(double)arg1 location:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_replaceWithLocationsOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchVisitsWithPredicate:(id)arg1 ascending:(BOOL)arg2 dateInterval:(id)arg3 limit:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)_fetchLocationOfInterestWithMapItem:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)predicateForObjectsNotFromCurrentDevice;
-(void)removeVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_storeVisits:(id)arg1 place:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchLocationOfInterestVisitedLastWithHandler:(/*^block*/id)arg1 ;
-(void)_removeLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removePlacesForLocationOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_moc_updateExpirationDateOfVisitSubgraphWithVisitIdentifiers:(id)arg1 expirationDate:(id)arg2 allowThresholdBypass:(BOOL)arg3 context:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)_updateExpirationDateOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPlaceOfVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removePlacesForLocationOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateExpirationDateOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeOverlappingVisitsAndTransitionsForVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLocationOfInterestWithMapItemIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_clearWithHandler:(/*^block*/id)arg1 ;
-(void)removeUnreferencedMapItems:(/*^block*/id)arg1 ;
-(void)_fetchVisitsWithoutPlacesForCurrentDeviceWithHandler:(/*^block*/id)arg1 ;
-(void)removeVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_learnedLocationsOfInterestFromLearnedLocationsOfInterestMO:(id)arg1 context:(id)arg2 ;
-(void)_fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchLocationOfInterestTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTDistanceCalculator *)distanceCalculator;
-(void)_fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_migrateLegacyMapItemsWithEnumerationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_fetchVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLastVisitWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPlaceWithMapItemIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)storeTransitions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)storeVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithDistanceCalculator:(id)arg1 expirationEnforcer:(id)arg2 persistenceManager:(id)arg3 ;
-(void)updateVisits:(id)arg1 place:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchInferredMapItemForVisitIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchPlacesWithPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateLocationsOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removePlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchCloudStorePersistentHistorySinceDate:(id)arg1 earlyStop:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)deletePlacesWithinIdentifierSetWithZeroVisits:(id)arg1 context:(id)arg2 tombstoneContext:(id)arg3 error:(id*)arg4 ;
-(void)removeTransitionsReferencingVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)associatePlacesToVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)extendExpirationDateOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeAllMapItems:(/*^block*/id)arg1 ;
-(void)_fetchLocationsOfInterestWithinDistance:(double)arg1 location:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeTransitionsReferencingVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)__removeUnreferencedMapItems:(/*^block*/id)arg1 ;
-(void)__removeUnreferencedExtendedAttributes:(/*^block*/id)arg1 ;
-(void)_logCloudStoreWithReason:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)groupCloudManagedObjectsByDeviceIdentifier:(id)arg1 ;
-(void)fetchPlaceWithMapItem:(id)arg1 predicate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)_removeUnreferencedMapItems:(/*^block*/id)arg1 ;
-(void)removeTransitionsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLastVisitWithHandler:(/*^block*/id)arg1 ;
-(id)identifiersForPlacesThatDedupeToPlace:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)_fetchMetricsWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchVisitsWithPredicate:(id)arg1 ascending:(BOOL)arg2 limit:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)fetchPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationOfInterestVisitedFirstWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchLocationOfInterestVisitedFirstWithHandler:(/*^block*/id)arg1 ;
-(void)_associatePlacesToVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)enumerateStoredLocationsOfInterestWithOptions:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)fetchVisitIdentifiersIn:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchCountOfVisitsToPlaceWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 place:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeAllMapItems:(/*^block*/id)arg1 ;
-(BOOL)_processDeletionRequestWithFetchRequest:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)fetchPlacesWithType:(unsigned long long)arg1 predicate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPlacesWithinDistance:(double)arg1 location:(id)arg2 predicate:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_removeVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTPersistenceExpirationEnforcer *)expirationEnforcer;
-(void)fetchVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchCountOfVisitsToPlaceWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)cloudStoreChangedSinceDate:(id)arg1 ;
-(BOOL)_updateExpirationDateOfVisitsAndTransitionsWithVisitIdentifiers:(id)arg1 expirationDate:(id)arg2 context:(id)arg3 visitsUpdated:(unsigned long long*)arg4 error:(id*)arg5 ;
-(void)__removeUnreferencedAddresses:(/*^block*/id)arg1 ;
-(void)fetchPlacesWithPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)predicateForObjectsFromCurrentDevice;
-(void)fetchLocationOfInterestWithPlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPlacesWithType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestWithMapItem:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitsToPlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchCloudStorePersistentHistorySinceDate:(id)arg1 earlyStop:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(id)refreshMapItemsWithEnumerationBlock:(/*^block*/id)arg1 ;
-(void)_fetchLocationOfInterestWithPlace:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)replaceWithLocationsOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)submitMetricsOnExtendingLifetimeOfObjectsWithIdentifiers:(id)arg1 context:(id)arg2 ;
-(id)identifiersForPlacesThatOwnVisitIdentifiers:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)fetchPlacesWithMapItem:(id)arg1 predicate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchEntityAsDictionaryWithEntityName:(id)arg1 propertiesToFetch:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_refreshMapItemsWithEnumerationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)migrateLegacyMapItemsWithEnumerationBlock:(/*^block*/id)arg1 ;
-(void)_fetchMapItemsWithMapItem:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeUnreferencedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchVisitsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updateVisits:(id)arg1 place:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchVisitIdentifiersIn:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchTransitionWithDestinationIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_logLocalStoreWithReason:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitsWithoutPlacesForCurrentDeviceWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPlacesWithinDistance:(double)arg1 location:(id)arg2 predicate:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_updateExpirationDateOfPlaceSubgraphWithVisitIdentifiers:(id)arg1 expirationDate:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
@end

