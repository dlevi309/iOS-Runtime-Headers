/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTDaemonProtocol <NSObject>
@required
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startMonitoringVehicleEventsWithReply:(/*^block*/id)arg1;
-(void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startLeechingLowConfidenceVisitsWithReply:(/*^block*/id)arg1;
-(void)startLeechingVisitsWithReply:(/*^block*/id)arg1;
-(void)startMonitoringVisitsWithReply:(/*^block*/id)arg1;
-(void)updateCloudSyncProvisionedForAccount:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopLeechingVisitsWithReply:(/*^block*/id)arg1;
-(void)fetchPathToDiagnosticFilesWithReply:(/*^block*/id)arg1;
-(void)stopLeechingLowConfidenceVisitsWithReply:(/*^block*/id)arg1;
-(void)fetchAllLocationsOfInterestForSettingsWithReply:(/*^block*/id)arg1;
-(void)fetchRoutineModeFromLocation:(id)arg1 reply:(/*^block*/id)arg2;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 reply:(/*^block*/id)arg5;
-(void)fetchLastVehicleEventsWithReply:(/*^block*/id)arg1;
-(void)fetchRoutineEnabledWithReply:(/*^block*/id)arg1;
-(void)fetchPlaceInferencesWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setRoutineEnabled:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)fetchCloudSyncAuthorizationStateWithReply:(/*^block*/id)arg1;
-(void)addLocationOfInterestOfType:(long long)arg1 mapItemStorage:(id)arg2 customLabel:(id)arg3 reply:(/*^block*/id)arg4;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(/*^block*/id)arg3;
-(void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(/*^block*/id)arg3;
-(void)clearAllVehicleEventsWithReply:(/*^block*/id)arg1;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItemStorage:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchStoredLocationsWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 reply:(/*^block*/id)arg4;
-(void)stopMonitoringVehicleEventsWithReply:(/*^block*/id)arg1;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItemStorage:(id)arg3 customLabel:(id)arg4 reply:(/*^block*/id)arg5;
-(void)removeVisitWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)engageInVehicleEventWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 reply:(/*^block*/id)arg4;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchMonitoredScenarioTriggerTypesWithReply:(/*^block*/id)arg1;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)setRestorationIdentifier:(id)arg1;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)fetchFormattedPostalAddressesFromMeCard:(/*^block*/id)arg1;
-(void)fetchStoredVisitsWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(id)arg2 reply:(/*^block*/id)arg3;
-(void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2;
-(void)stopMonitoringVisitsWithReply:(/*^block*/id)arg1;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 reply:(/*^block*/id)arg4;
-(void)clearRoutineWithReply:(/*^block*/id)arg1;
-(void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchAutomaticVehicleEventDetectionSupportedWithReply:(/*^block*/id)arg1;

@end

