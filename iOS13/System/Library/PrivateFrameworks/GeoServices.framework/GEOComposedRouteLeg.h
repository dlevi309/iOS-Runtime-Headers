/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOComposedRoute, NSArray, GEOPBTransitStop;

@interface GEOComposedRouteLeg : NSObject <NSSecureCoding> {

	GEOComposedRoute* _composedRoute;
	long long _type;
	NSRange _pointRange;
	NSRange _stepRange;

}

@property (assign,nonatomic,__weak) GEOComposedRoute * composedRoute;                //@synthesize composedRoute=_composedRoute - In the implementation block
@property (nonatomic,readonly) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) NSRange pointRange;                                   //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) NSRange stepRange;                                    //@synthesize stepRange=_stepRange - In the implementation block
@property (nonatomic,readonly) NSRange transitStepRange; 
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned long long startStepIndex; 
@property (nonatomic,readonly) unsigned long long endStepIndex; 
@property (nonatomic,readonly) unsigned long long stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (nonatomic,readonly) double expectedTime; 
@property (nonatomic,readonly) unsigned long long numberOfTransitStops; 
@property (nonatomic,readonly) GEOPBTransitStop * startingTransitStop; 
@property (nonatomic,readonly) GEOPBTransitStop * endingTransitStop; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)pointCount;
-(int)transportType;
-(BOOL)contains:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(NSRange)arg3 pointRange:(NSRange)arg4 ;
-(GEOPBTransitStop *)startingTransitStop;
-(GEOPBTransitStop *)endingTransitStop;
-(NSRange)transitStepRange;
-(NSArray *)steps;
-(double)expectedTime;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(unsigned long long)numberOfTransitStops;
-(unsigned)startPointIndex;
-(unsigned)endPointIndex;
-(NSRange)stepRange;
-(NSRange)pointRange;
-(double)remainingTimeAlongLegFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(unsigned long long)endStepIndex;
-(double)remainingDistanceAlongLegFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(GEOComposedRoute *)composedRoute;
-(unsigned long long)startStepIndex;
-(unsigned long long)stepCount;
@end

