/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableDictionary, NSMutableSet, NSDate, PLLocationOfInterestVisit;

@interface PLLocationOfInterestCache : NSObject {

	NSMutableDictionary* _visitsCache;
	NSMutableSet* _allLocationsOfInterest;
	NSMutableSet* _homeLocations;
	NSMutableSet* _workLocations;
	unsigned long long _numberOfLocationsOfInterestVisits;
	NSDate* _earliestVisitStartDate;
	PLLocationOfInterestVisit* _lastLocationOfInterestVisit;
	unsigned long long _numberOfLocationsOfInterestTransitions;

}

@property (nonatomic,retain) NSMutableDictionary * visitsCache;                              //@synthesize visitsCache=_visitsCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * allLocationsOfInterest;                          //@synthesize allLocationsOfInterest=_allLocationsOfInterest - In the implementation block
@property (nonatomic,retain) NSMutableSet * homeLocations;                                   //@synthesize homeLocations=_homeLocations - In the implementation block
@property (nonatomic,retain) NSMutableSet * workLocations;                                   //@synthesize workLocations=_workLocations - In the implementation block
@property (readonly) unsigned long long numberOfLocationsOfInterest; 
@property (readonly) unsigned long long numberOfLocationsOfInterestVisits;                   //@synthesize numberOfLocationsOfInterestVisits=_numberOfLocationsOfInterestVisits - In the implementation block
@property (readonly) unsigned long long numberOfLocationsOfInterestTransitions;              //@synthesize numberOfLocationsOfInterestTransitions=_numberOfLocationsOfInterestTransitions - In the implementation block
@property (readonly) NSDate * earliestVisitStartDate;                                        //@synthesize earliestVisitStartDate=_earliestVisitStartDate - In the implementation block
@property (readonly) PLLocationOfInterestVisit * lastLocationOfInterestVisit;                //@synthesize lastLocationOfInterestVisit=_lastLocationOfInterestVisit - In the implementation block
-(NSMutableDictionary *)visitsCache;
-(id)locationsOfInterestOfType:(long long)arg1 ;
-(NSMutableSet *)homeLocations;
-(NSMutableSet *)allLocationsOfInterest;
-(id)init;
-(unsigned long long)numberOfLocationsOfInterest;
-(void)setVisitsCache:(NSMutableDictionary *)arg1 ;
-(void)setAllLocationsOfInterest:(NSMutableSet *)arg1 ;
-(id)closestLocationOfInterestVisitToLocation:(id)arg1 withinDistance:(double)arg2 inDateInterval:(id)arg3 ;
-(unsigned long long)numberOfLocationsOfInterestVisits;
-(id)locationsOfInterestVisitsInDateInterval:(id)arg1 ;
-(NSDate *)earliestVisitStartDate;
-(void)addLocationOfInterest:(id)arg1 ;
-(void)setHomeLocations:(NSMutableSet *)arg1 ;
-(PLLocationOfInterestVisit *)lastLocationOfInterestVisit;
-(void)setWorkLocations:(NSMutableSet *)arg1 ;
-(unsigned long long)numberOfLocationsOfInterestTransitions;
-(NSMutableSet *)workLocations;
-(id)locationsOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)locationOfInterestAtLocation:(id)arg1 ;
@end

