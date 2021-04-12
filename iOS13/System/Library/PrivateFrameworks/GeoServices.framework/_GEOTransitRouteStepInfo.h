/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTransitStep, GEOStep;

@interface _GEOTransitRouteStepInfo : NSObject {

	long long _routeLegType;
	NSRange _pointRange;
	GEOTransitStep* _transitStep;
	unsigned _duration;
	GEOStep* _walkingStep;
	NSRange _maneuverPointRange;

}

@property (assign,nonatomic) long long routeLegType;                    //@synthesize routeLegType=_routeLegType - In the implementation block
@property (assign,nonatomic) NSRange pointRange;                        //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,retain) GEOTransitStep * transitStep;              //@synthesize transitStep=_transitStep - In the implementation block
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) GEOStep * walkingStep;                     //@synthesize walkingStep=_walkingStep - In the implementation block
@property (assign,nonatomic) NSRange maneuverPointRange;                //@synthesize maneuverPointRange=_maneuverPointRange - In the implementation block
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(GEOTransitStep *)transitStep;
-(NSRange)pointRange;
-(long long)routeLegType;
-(NSRange)maneuverPointRange;
-(void)setRouteLegType:(long long)arg1 ;
-(void)setPointRange:(NSRange)arg1 ;
-(void)setTransitStep:(GEOTransitStep *)arg1 ;
-(GEOStep *)walkingStep;
-(void)setWalkingStep:(GEOStep *)arg1 ;
-(void)setManeuverPointRange:(NSRange)arg1 ;
@end

