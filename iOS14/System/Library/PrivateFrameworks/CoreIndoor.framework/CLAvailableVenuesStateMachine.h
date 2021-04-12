/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)distBetweenLatLon:(id)arg1 latlon1:(id)arg2 ;
+(long long)getLocationContextFromVenueBounds:(const VenueBounds*)arg1 ;
-(BOOL)shouldRecompute:(id)arg1 ;
-(BOOL)isVenueDisabled:(id)arg1 locationId:(id)arg2 ;
-(id)init;
-(CLIndoorAvailabilityTileParams *)availabilityTileParams;
-(id)getNearbyLocationGroups:(id)arg1 withUpdatedPos:(id)arg2 nearLocationsOfInterest:(id)arg3 ;
-(id)recomputeIfNecessary:(id)arg1 withGlobalAvailabilityTile:(id)arg2 andAdditionalLOIs:(id)arg3 ;
-(id)openTileParserAtPath:(id)arg1 ;
-(id)computeAvailableVenues:(id)arg1 nearCoordinates:(id)arg2 ;
-(id)getNearbyLocationGroupsForTile:(id)arg1 withUpdatedPos:(id)arg2 ;
-(void)setMaxLoadRadius:(double)arg1 ;
-(double)maxLoadRadius;
-(GeographicCoordinate *)lastFix;
-(void)clearLastFix;
-(id)computeAvailableVenues:(id)arg1 nearCoordinates:(id)arg2 withError:(BOOL*)arg3 ;
-(void)setDisabledVenues:(NSSet *)arg1 ;
-(id)getNearbyLocationGroups:(id)arg1 withUpdatedPos:(id)arg2 ;
-(NSSet *)disabledVenues;
-(id)getNearbyLocationGroupsForTile:(id)arg1 withUpdatedPos:(id)arg2 nearLocationsOfInterest:(id)arg3 ;
@end

