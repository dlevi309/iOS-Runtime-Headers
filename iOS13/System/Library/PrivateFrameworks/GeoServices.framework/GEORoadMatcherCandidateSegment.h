/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureRoad, GEOMapFeatureJunction;

@interface GEORoadMatcherCandidateSegment : NSObject {

	double _score;
	GEOMapFeatureRoad* _road;
	SCD_Struct_GE32 _coordinateOnSegment;
	double _distanceFromSegment;
	double _segmentAngle;
	GEOMapFeatureJunction* _junction;
	double _distanceInMetersFromJunction;

}

@property (nonatomic,readonly) double score;                                     //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) GEOMapFeatureRoad * road;                         //@synthesize road=_road - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE32 coordinateOnSegment;              //@synthesize coordinateOnSegment=_coordinateOnSegment - In the implementation block
@property (nonatomic,readonly) double distanceFromSegment;                       //@synthesize distanceFromSegment=_distanceFromSegment - In the implementation block
@property (nonatomic,readonly) double segmentAngle;                              //@synthesize segmentAngle=_segmentAngle - In the implementation block
@property (nonatomic,readonly) GEOMapFeatureJunction * junction;                 //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) double distanceFromJunction;                      //@synthesize distanceInMetersFromJunction=_distanceInMetersFromJunction - In the implementation block
-(double)score;
-(double)distanceFromJunction;
-(GEOMapFeatureRoad *)road;
-(id)initWithCoordinate:(SCD_Struct_GE32)arg1 angle:(double)arg2 road:(id)arg3 startCoordinate:(SCD_Struct_GE32)arg4 endCoordinate:(SCD_Struct_GE32)arg5 ;
-(SCD_Struct_GE32)coordinateOnSegment;
-(double)distanceFromSegment;
-(double)segmentAngle;
-(GEOMapFeatureJunction *)junction;
@end

