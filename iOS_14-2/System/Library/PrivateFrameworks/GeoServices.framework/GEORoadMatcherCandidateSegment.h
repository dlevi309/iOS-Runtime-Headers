/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureRoad, GEOMapFeatureJunction;

@interface GEORoadMatcherCandidateSegment : NSObject {

	double _score;
	GEOMapFeatureRoad* _road;
	GEOCoarseLocationLatLng _coordinateOnSegment;
	double _distanceFromSegment;
	double _segmentAngle;
	GEOMapFeatureJunction* _junction;
	double _distanceInMetersFromJunction;

}

@property (nonatomic,readonly) double score;                                             //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) GEOMapFeatureRoad * road;                                 //@synthesize road=_road - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinateOnSegment;              //@synthesize coordinateOnSegment=_coordinateOnSegment - In the implementation block
@property (nonatomic,readonly) double distanceFromSegment;                               //@synthesize distanceFromSegment=_distanceFromSegment - In the implementation block
@property (nonatomic,readonly) double segmentAngle;                                      //@synthesize segmentAngle=_segmentAngle - In the implementation block
@property (nonatomic,readonly) GEOMapFeatureJunction * junction;                         //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) double distanceFromJunction;                              //@synthesize distanceInMetersFromJunction=_distanceInMetersFromJunction - In the implementation block
-(GEOMapFeatureRoad *)road;
-(double)segmentAngle;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 angle:(double)arg2 road:(id)arg3 startCoordinate:(GEOCoarseLocationLatLng)arg4 endCoordinate:(GEOCoarseLocationLatLng)arg5 ;
-(GEOCoarseLocationLatLng)coordinateOnSegment;
-(double)distanceFromSegment;
-(double)score;
-(GEOMapFeatureJunction *)junction;
-(double)distanceFromJunction;
@end

