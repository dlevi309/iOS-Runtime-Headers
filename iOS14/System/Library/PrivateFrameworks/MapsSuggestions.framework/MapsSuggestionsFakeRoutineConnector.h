/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsRoutineConnector.h>

@class NSMutableDictionary, NSString;

@interface MapsSuggestionsFakeRoutineConnector : NSObject <MapsSuggestionsRoutineConnector> {

	/*^block*/id _vehicleEventHandler;
	NSMutableDictionary* _fakeData;
	BOOL _breakCallbackPromise;
	unsigned long long _calledFetchNextPLOIs;
	unsigned long long _calledFetchLocationOfInterestWithIdentifier;
	unsigned long long _calledFetchLocationOfInterestAtLocation;
	unsigned long long _calledFetchLocationsOfInterestOfType;
	unsigned long long _calledFetchLocationsOfInterestVisitedSinceDate;
	unsigned long long _calledFetchPredictedExitDatesFromLocation;
	unsigned long long _calledFetchRoutineModeFromLocation;
	unsigned long long _calledAddLocationOfInterest;
	unsigned long long _calledUpdateLocationOfInterest;
	unsigned long long _calledRemoveLocationOfInterestWithIdentifier;
	unsigned long long _calledStartMonitoringVehicleEvents;
	unsigned long long _calledStopMonitoringVehicleEvents;
	unsigned long long _calledClearAllVehicleEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopMonitoringVehicleEvents;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)clearAllVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)configureError:(id)arg1 ;
-(void)fetchNextPLOIsFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)configureMode:(long long)arg1 ;
-(void)configureLOIs:(id)arg1 forType:(long long)arg2 ;
-(void)configureLOIs:(id)arg1 sinceDate:(id)arg2 ;
-(void)configureLOI:(id)arg1 forIdentifier:(id)arg2 ;
-(void)configureLOI:(id)arg1 atLocation:(id)arg2 ;
-(void)configureBrokenCallBackPromise:(BOOL)arg1 ;
-(void)configurePLOIs:(id)arg1 ;
-(void)configureExitTimes:(id)arg1 onDate:(id)arg2 atLocation:(id)arg3 ;
-(void)fireVehicleEvent;
-(unsigned long long)calledFetchNextPLOIs;
-(unsigned long long)calledFetchLocationOfInterestWithIdentifier;
-(unsigned long long)calledFetchLocationOfInterestAtLocation;
-(unsigned long long)calledFetchLocationsOfInterestOfType;
-(unsigned long long)calledFetchLocationsOfInterestVisitedSinceDate;
-(unsigned long long)calledFetchPredictedExitDatesFromLocation;
-(unsigned long long)calledAddLocationOfInterest;
-(unsigned long long)calledFetchRoutineModeFromLocation;
-(unsigned long long)calledUpdateLocationOfInterest;
-(unsigned long long)calledRemoveLocationOfInterestWithIdentifier;
-(unsigned long long)calledStartMonitoringVehicleEvents;
-(unsigned long long)calledStopMonitoringVehicleEvents;
-(unsigned long long)calledClearAllVehicleEvents;
-(void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)startMonitoringVehicleEventsWithHandler:(/*^block*/id)arg1 ;
@end

