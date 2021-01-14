/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GEOComposedRoutePortion.h>

@class GEOComposedRoute, NSArray, GEOPBTransitStop, NSString;

@interface GEOComposedRouteSegment : NSObject <NSSecureCoding, GEOComposedRoutePortion> {

	GEOComposedRoute* _composedRoute;
	long long _type;
	NSRange _pointRange;
	NSRange _stepRange;
	unsigned _distance;
	NSArray* _composedGuidanceEvents;
	double _expectedTime;

}

@property (assign,nonatomic,__weak) GEOComposedRoute * composedRoute;                //@synthesize composedRoute=_composedRoute - In the implementation block
@property (nonatomic,readonly) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) NSRange transitStepRange; 
@property (nonatomic,readonly) unsigned long long numberOfTransitStops; 
@property (nonatomic,readonly) GEOPBTransitStop * startingTransitStop; 
@property (nonatomic,readonly) GEOPBTransitStop * endingTransitStop; 
@property (nonatomic,readonly) NSArray * composedGuidanceEvents;                     //@synthesize composedGuidanceEvents=_composedGuidanceEvents - In the implementation block
@property (nonatomic,readonly) NSRange pointRange;                                   //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) NSRange stepRange;                                    //@synthesize stepRange=_stepRange - In the implementation block
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned long long startStepIndex; 
@property (nonatomic,readonly) unsigned long long endStepIndex; 
@property (nonatomic,readonly) unsigned long long stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (nonatomic,readonly) unsigned distance;                                    //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) double expectedTime;                                  //@synthesize expectedTime=_expectedTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSArray *)steps;
-(unsigned)distance;
-(double)expectedTime;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(unsigned long long)numberOfTransitStops;
-(unsigned long long)endStepIndex;
-(unsigned)endPointIndex;
-(unsigned)startPointIndex;
-(double)remainingTimeAlongSegmentFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(double)remainingDistanceAlongSegmentFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(int)transportType;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(NSArray *)composedGuidanceEvents;
-(NSString *)description;
-(id)initWithComposedRoute:(id)arg1 routeSegmentType:(long long)arg2 stepRange:(NSRange)arg3 pointRange:(NSRange)arg4 ;
-(GEOPBTransitStop *)startingTransitStop;
-(GEOPBTransitStop *)endingTransitStop;
-(NSRange)transitStepRange;
-(BOOL)contains:(id)arg1 ;
-(GEOComposedRoute *)composedRoute;
-(long long)type;
-(unsigned long long)stepCount;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)startStepIndex;
-(NSRange)stepRange;
-(unsigned)pointCount;
-(NSRange)pointRange;
@end

