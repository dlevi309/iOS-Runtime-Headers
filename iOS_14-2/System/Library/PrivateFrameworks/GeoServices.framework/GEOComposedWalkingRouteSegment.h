/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteSegment.h>

@class GEOComposedWalkingRouteStep, GEOComposedTransitWalkingRouteStep;

@interface GEOComposedWalkingRouteSegment : GEOComposedRouteSegment {

	unsigned long long _transitIncidentMessageStepIndex;

}

@property (nonatomic,readonly) unsigned long long transitIncidentMessageStepIndex;                                   //@synthesize transitIncidentMessageStepIndex=_transitIncidentMessageStepIndex - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitSteppingIncidentMessage; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRouteDetailsIncidentMessage; 
@property (nonatomic,readonly) GEOComposedWalkingRouteStep * lastWalkingStep; 
@property (nonatomic,readonly) GEOComposedTransitWalkingRouteStep * arrivalStep; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 stepRange:(NSRange)arg2 pointRange:(NSRange)arg3 transitIncidentMessageStepIndex:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOComposedTransitWalkingRouteStep *)arrivalStep;
-(id)_transitIncidentMessageStep;
-(id<GEOTransitRoutingIncidentMessage>)transitSteppingIncidentMessage;
-(GEOComposedWalkingRouteStep *)lastWalkingStep;
-(id<GEOTransitRoutingIncidentMessage>)transitRouteDetailsIncidentMessage;
-(unsigned long long)transitIncidentMessageStepIndex;
@end

