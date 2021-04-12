/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


#import <CoreIndoor/CoreIndoor-Structs.h>
@class GeographicCoordinate, NSSet, CLIndoorAvailabilityTileParams;

@interface CLAvailableVenuesStateMachine : NSObject {

	GeographicCoordinate* _lastFix;
	double _maxLoadRadius;
	NSSet* _disabledVenues;
	CLIndoorAvailabilityTileParams* _availabilityTileParams;

}

@property (readonly) GeographicCoordinate * lastFix;                                       //@synthesize lastFix=_lastFix - In the implementation block
@property (assign) double maxLoadRadius;                                                   //@synthesize maxLoadRadius=_maxLoadRadius - In the implementation block
@property (retain) NSSet * disabledVenues;                                                 //@synthesize disabledVenues=_disabledVenues - In the implementation block
@property (readonly) CLIndoorAvailabilityTileParams * availabilityTileParams;              //@synthesize availabilityTileParams=_availabilityTileParams - In the implementation block
+(double)deg2rad:(double)arg1 ;
+(double)metersFromGreatCircleDistance:(double)arg1 ;
+(long long)getLocationContextFromVenueBounds:(const VenueBounds*)arg1 ;
+(double)distBetweenLatLon:(id)arg1 latlon1:(id)arg2 ;
-(id)init;
-(void)setDisabledVenues:(NSSet *)arg1 ;
-(NSSet *)disabledVenues;
-(id)computeAvailableVenues:(id)arg1 nearCoordinates:(id)arg2 withError:(BOOL*)arg3 ;
-(BOOL)isVenueDisabled:(id)arg1 locationId:(id)arg2 ;
-(id)getNearbyLocationGroupsForTile:(id)arg1 withUpdatedPos:(id)arg2 nearLocationsOfInterest:(id)arg3 ;
-(id)getNearbyLocationGroups:(id)arg1 withUpdatedPos:(id)arg2 nearLocationsOfInterest:(id)arg3 ;
-(id)openTileParserAtPath:(id)arg1 ;
-(id)recomputeIfNecessary:(id)arg1 withGlobalAvailabilityTile:(id)arg2 andAdditionalLOIs:(id)arg3 ;
-(BOOL)shouldRecompute:(id)arg1 ;
-(id)computeAvailableVenues:(id)arg1 nearCoordinates:(id)arg2 ;
-(id)getNearbyLocationGroupsForTile:(id)arg1 withUpdatedPos:(id)arg2 ;
-(id)getNearbyLocationGroups:(id)arg1 withUpdatedPos:(id)arg2 ;
-(void)clearLastFix;
-(GeographicCoordinate *)lastFix;
-(double)maxLoadRadius;
-(void)setMaxLoadRadius:(double)arg1 ;
-(CLIndoorAvailabilityTileParams *)availabilityTileParams;
@end

