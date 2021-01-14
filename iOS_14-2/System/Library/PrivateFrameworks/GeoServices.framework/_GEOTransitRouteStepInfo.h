/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTransitStep, GEOStep;

@interface _GEOTransitRouteStepInfo : NSObject {

	long long _routeSegmentType;
	NSRange _pointRange;
	GEOTransitStep* _transitStep;
	unsigned _duration;
	GEOStep* _walkingStep;
	NSRange _maneuverPointRange;

}

@property (assign,nonatomic) long long routeSegmentType;                //@synthesize routeSegmentType=_routeSegmentType - In the implementation block
@property (assign,nonatomic) NSRange pointRange;                        //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,retain) GEOTransitStep * transitStep;              //@synthesize transitStep=_transitStep - In the implementation block
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) GEOStep * walkingStep;                     //@synthesize walkingStep=_walkingStep - In the implementation block
@property (assign,nonatomic) NSRange maneuverPointRange;                //@synthesize maneuverPointRange=_maneuverPointRange - In the implementation block
@property (nonatomic,readonly) double distance; 
-(void)setDuration:(unsigned)arg1 ;
-(double)distance;
-(GEOTransitStep *)transitStep;
-(void)setPointRange:(NSRange)arg1 ;
-(unsigned long long)numPoints;
-(NSRange)maneuverPointRange;
-(void)setRouteSegmentType:(long long)arg1 ;
-(GEOStep *)walkingStep;
-(void)setTransitStep:(GEOTransitStep *)arg1 ;
-(void)setWalkingStep:(GEOStep *)arg1 ;
-(void)setManeuverPointRange:(NSRange)arg1 ;
-(long long)routeSegmentType;
-(unsigned)duration;
-(NSRange)pointRange;
@end

