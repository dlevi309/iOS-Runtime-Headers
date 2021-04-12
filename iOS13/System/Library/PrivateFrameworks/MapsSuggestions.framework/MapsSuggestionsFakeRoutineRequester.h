/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsRoutineRequester.h>

@class NSMutableDictionary, NSString;

@interface MapsSuggestionsFakeRoutineRequester : NSObject <MapsSuggestionsRoutineRequester> {

	NSMutableDictionary* _fakeData;
	BOOL _breakCallbackPromise;
	unsigned long long _calledFetchNextPLOIs;
	unsigned long long _calledFetchLocationOfInterestWithIdentifier;
	unsigned long long _calledFetchLocationsOfInterestOfType;
	unsigned long long _calledFetchLocationsOfInterestVisitedSinceDate;
	unsigned long long _calledFetchRoutineModeFromLocation;
	unsigned long long _calledAddLocationOfInterest;
	unsigned long long _calledUpdateLocationOfInterest;
	unsigned long long _calledStartMonitoringVehicleEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(NSString *)uniqueName;
-(BOOL)startMonitoringVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(void)clearAllVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(void)stopMonitoringVehicleEvents;
-(BOOL)fetchNextPLOIsFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)fetchLocationsOfInterestOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)fetchRoutineModeFromLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)configureError:(id)arg1 ;
-(void)configureLOIs:(id)arg1 forType:(long long)arg2 ;
-(void)configureLOIs:(id)arg1 sinceDate:(id)arg2 ;
-(void)configureLOI:(id)arg1 forIdentifier:(id)arg2 ;
-(void)configureBrokenCallBackPromise:(BOOL)arg1 ;
-(unsigned long long)calledFetchNextPLOIs;
-(unsigned long long)calledFetchLocationOfInterestWithIdentifier;
-(unsigned long long)calledFetchLocationsOfInterestOfType;
-(unsigned long long)calledFetchLocationsOfInterestVisitedSinceDate;
-(unsigned long long)calledFetchRoutineModeFromLocation;
-(unsigned long long)calledAddLocationOfInterest;
-(unsigned long long)calledUpdateLocationOfInterest;
-(unsigned long long)calledStartMonitoringVehicleEvents;
@end

