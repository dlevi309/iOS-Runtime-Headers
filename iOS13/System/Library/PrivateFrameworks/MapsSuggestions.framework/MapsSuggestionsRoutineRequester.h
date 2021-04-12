/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsRoutineRequester.h>

@class RTRoutineManager, NSString;

@interface MapsSuggestionsRoutineRequester : NSObject <MapsSuggestionsRoutineRequester> {

	RTRoutineManager* _routineManager;

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
@end

