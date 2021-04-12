/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsRoutineConnector <NSObject>
@required
-(void)stopMonitoringVehicleEvents;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(/*^block*/id)arg2;
-(void)clearAllVehicleEventsWithHandler:(/*^block*/id)arg1;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)fetchNextPLOIsFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(/*^block*/id)arg4;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)startMonitoringVehicleEventsWithHandler:(/*^block*/id)arg1;

@end

