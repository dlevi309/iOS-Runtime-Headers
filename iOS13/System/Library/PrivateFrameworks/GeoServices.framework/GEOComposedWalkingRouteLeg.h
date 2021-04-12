/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteLeg.h>

@class GEOComposedWalkingRouteStep, GEOComposedTransitWalkingRouteStep;

@interface GEOComposedWalkingRouteLeg : GEOComposedRouteLeg {

	unsigned long long _transitIncidentMessageStepIndex;

}

@property (nonatomic,readonly) unsigned long long transitIncidentMessageStepIndex;                                   //@synthesize transitIncidentMessageStepIndex=_transitIncidentMessageStepIndex - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitSteppingIncidentMessage; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRouteDetailsIncidentMessage; 
@property (nonatomic,readonly) GEOComposedWalkingRouteStep * lastWalkingStep; 
@property (nonatomic,readonly) GEOComposedTransitWalkingRouteStep * arrivalStep; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 stepRange:(NSRange)arg2 pointRange:(NSRange)arg3 transitIncidentMessageStepIndex:(unsigned long long)arg4 ;
-(id)_transitIncidentMessageStep;
-(id<GEOTransitRoutingIncidentMessage>)transitSteppingIncidentMessage;
-(id<GEOTransitRoutingIncidentMessage>)transitRouteDetailsIncidentMessage;
-(GEOComposedWalkingRouteStep *)lastWalkingStep;
-(GEOComposedTransitWalkingRouteStep *)arrivalStep;
-(unsigned long long)transitIncidentMessageStepIndex;
@end

