/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class CLSLocationOfInterestCache, NSDateInterval, NSMutableSet;

@interface CLSRoutineService : NSObject {

	CLSLocationOfInterestCache* _visitsCache;
	BOOL _routineIsAvailable;
	NSDateInterval* _fetchDateInterval;
	NSMutableSet* _pendingPinningVisitIdentifiers;
	CLSRoutineServiceStatisticsStruct _statistics;

}

@property (nonatomic,retain) NSDateInterval * fetchDateInterval;                         //@synthesize fetchDateInterval=_fetchDateInterval - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingPinningVisitIdentifiers;              //@synthesize pendingPinningVisitIdentifiers=_pendingPinningVisitIdentifiers - In the implementation block
@property (nonatomic,readonly) CLSLocationOfInterestCache * visitsCache;                 //@synthesize visitsCache=_visitsCache - In the implementation block
@property (assign,nonatomic) BOOL routineIsAvailable;                                    //@synthesize routineIsAvailable=_routineIsAvailable - In the implementation block
@property (readonly) CLSRoutineServiceStatisticsStruct statistics;                       //@synthesize statistics=_statistics - In the implementation block
-(CLSLocationOfInterestCache *)visitsCache;
-(id)locationsOfInterestOfType:(long long)arg1 ;
-(id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(long long)predominantTransportationModeForDateInterval:(id)arg1 confidence:(double*)arg2 ;
-(double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1 ;
-(id)placemarksOfInterestOfType:(long long)arg1 ;
-(void)setFetchDateInterval:(NSDateInterval *)arg1 ;
-(CLSRoutineServiceStatisticsStruct)statistics;
-(id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(void)setPendingPinningVisitIdentifiers:(NSMutableSet *)arg1 ;
-(id)_placemarksFromLocationsOfInterest:(id)arg1 ;
-(NSDateInterval *)fetchDateInterval;
-(id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1 ;
-(void)postProcessLocationsOfInterest;
-(void)_pinPendingVisits;
-(void)_buildLocationsOfInterestCache;
-(NSMutableSet *)pendingPinningVisitIdentifiers;
-(unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1 ;
-(id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)initWithFetchDateInterval:(id)arg1 ;
-(void)setRoutineIsAvailable:(BOOL)arg1 ;
-(BOOL)hasLocationsOfInterestInformation;
-(BOOL)routineIsAvailable;
-(id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(void)invalidateLocationsOfInterest;
-(id)locationOfInterestAtLocation:(id)arg1 ;
@end

