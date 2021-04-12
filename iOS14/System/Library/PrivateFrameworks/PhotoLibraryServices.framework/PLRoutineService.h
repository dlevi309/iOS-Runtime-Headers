/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSDateInterval, PLLocationOfInterestCache, NSMutableSet, NSSet;

@interface PLRoutineService : NSObject {

	BOOL _routineIsAvailable;
	NSDateInterval* _fetchDateInterval;
	PLLocationOfInterestCache* _visitsCache;
	NSMutableSet* _pendingPinningVisitIdentifiers;

}

@property (nonatomic,retain) NSDateInterval * fetchDateInterval;                         //@synthesize fetchDateInterval=_fetchDateInterval - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingPinningVisitIdentifiers;              //@synthesize pendingPinningVisitIdentifiers=_pendingPinningVisitIdentifiers - In the implementation block
@property (nonatomic,retain) PLLocationOfInterestCache * visitsCache;                    //@synthesize visitsCache=_visitsCache - In the implementation block
@property (nonatomic,readonly) NSSet * allLocationsOfInterest; 
@property (nonatomic,readonly) NSSet * homeLocations; 
@property (nonatomic,readonly) NSSet * workLocations; 
@property (nonatomic,readonly) BOOL routineIsAvailable;                                  //@synthesize routineIsAvailable=_routineIsAvailable - In the implementation block
-(PLLocationOfInterestCache *)visitsCache;
-(id)locationsOfInterestOfType:(long long)arg1 ;
-(id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(NSSet *)homeLocations;
-(NSSet *)allLocationsOfInterest;
-(double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1 ;
-(void)setVisitsCache:(PLLocationOfInterestCache *)arg1 ;
-(void)setFetchDateInterval:(NSDateInterval *)arg1 ;
-(void)setPendingPinningVisitIdentifiers:(NSMutableSet *)arg1 ;
-(NSDateInterval *)fetchDateInterval;
-(id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1 ;
-(void)postProcessLocationsOfInterest;
-(void)_pinPendingVisits;
-(void)_buildLocationsOfInterestCache;
-(void)fetchLocationsOfInterestIfNeeded;
-(NSMutableSet *)pendingPinningVisitIdentifiers;
-(unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1 ;
-(id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)initWithFetchDateInterval:(id)arg1 ;
-(BOOL)hasLocationsOfInterestInformation;
-(BOOL)routineIsAvailable;
-(id)lastLocationOfInterestVisit;
-(id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(NSSet *)workLocations;
-(void)invalidateLocationsOfInterest;
-(id)locationOfInterestAtLocation:(id)arg1 ;
@end

