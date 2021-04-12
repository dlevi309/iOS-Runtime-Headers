/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableDictionary, NSMutableSet, NSDate, CLSLocationOfInterestVisit;

@interface CLSLocationOfInterestCache : NSObject {

	NSMutableDictionary* _visitsCache;
	NSMutableDictionary* _transitionsCache;
	NSMutableSet* _allLocationsOfInterest;
	NSMutableSet* _allLocationsOfInterestTransitionIdentifiers;
	NSMutableSet* _homeLocations;
	NSMutableSet* _workLocations;
	unsigned long long _numberOfLocationsOfInterestVisits;
	NSDate* _earliestVisitStartDate;
	CLSLocationOfInterestVisit* _lastLocationOfInterestVisit;

}

@property (nonatomic,retain) NSMutableDictionary * visitsCache;                                       //@synthesize visitsCache=_visitsCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * allLocationsOfInterest;                                   //@synthesize allLocationsOfInterest=_allLocationsOfInterest - In the implementation block
@property (nonatomic,retain) NSMutableSet * homeLocations;                                            //@synthesize homeLocations=_homeLocations - In the implementation block
@property (nonatomic,retain) NSMutableSet * workLocations;                                            //@synthesize workLocations=_workLocations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transitionsCache;                                  //@synthesize transitionsCache=_transitionsCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * allLocationsOfInterestTransitionIdentifiers;              //@synthesize allLocationsOfInterestTransitionIdentifiers=_allLocationsOfInterestTransitionIdentifiers - In the implementation block
@property (readonly) unsigned long long numberOfLocationsOfInterest; 
@property (readonly) unsigned long long numberOfLocationsOfInterestVisits;                            //@synthesize numberOfLocationsOfInterestVisits=_numberOfLocationsOfInterestVisits - In the implementation block
@property (readonly) unsigned long long numberOfLocationsOfInterestTransitions; 
@property (readonly) NSDate * earliestVisitStartDate;                                                 //@synthesize earliestVisitStartDate=_earliestVisitStartDate - In the implementation block
@property (readonly) CLSLocationOfInterestVisit * lastLocationOfInterestVisit;                        //@synthesize lastLocationOfInterestVisit=_lastLocationOfInterestVisit - In the implementation block
-(id)init;
-(NSMutableSet *)allLocationsOfInterest;
-(void)addLocationOfInterest:(id)arg1 ;
-(id)locationsOfInterestOfType:(long long)arg1 ;
-(id)closestLocationOfInterestVisitToLocation:(id)arg1 withinDistance:(double)arg2 inDateInterval:(id)arg3 ;
-(id)locationOfInterestAtLocation:(id)arg1 ;
-(id)locationsOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)locationsOfInterestVisitsInDateInterval:(id)arg1 ;
-(unsigned long long)numberOfLocationsOfInterest;
-(NSMutableDictionary *)visitsCache;
-(void)setVisitsCache:(NSMutableDictionary *)arg1 ;
-(void)setAllLocationsOfInterest:(NSMutableSet *)arg1 ;
-(NSMutableSet *)homeLocations;
-(void)setHomeLocations:(NSMutableSet *)arg1 ;
-(NSMutableSet *)workLocations;
-(void)setWorkLocations:(NSMutableSet *)arg1 ;
-(unsigned long long)numberOfLocationsOfInterestVisits;
-(NSDate *)earliestVisitStartDate;
-(CLSLocationOfInterestVisit *)lastLocationOfInterestVisit;
-(unsigned long long)numberOfLocationsOfInterestTransitions;
-(void)addLocationOfInterestTransition:(id)arg1 ;
-(id)locationsOfInterestTransitionInDateInterval:(id)arg1 ;
-(NSMutableDictionary *)transitionsCache;
-(void)setTransitionsCache:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)allLocationsOfInterestTransitionIdentifiers;
-(void)setAllLocationsOfInterestTransitionIdentifiers:(NSMutableSet *)arg1 ;
@end

