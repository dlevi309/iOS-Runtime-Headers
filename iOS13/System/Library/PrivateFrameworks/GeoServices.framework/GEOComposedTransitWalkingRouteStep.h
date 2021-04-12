/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedWalkingRouteStep.h>

@protocol GEOTransitRoutingIncidentMessage, GEOTransitArtworkDataSource;
@class GEOTransitStep, NSArray;

@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep {

	GEOTransitStep* _transitStep;
	SCD_Struct_GE32 _startCoordinate;
	SCD_Struct_GE32 _endCoordinate;
	id<GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
	NSArray* _steppingArtwork;
	NSArray* _routeDetailsPrimaryArtwork;
	id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;

}

@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;                  //@synthesize steppingIncidentMessage=_steppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;              //@synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)distance;
-(id)instructions;
-(id)transitStep;
-(SCD_Struct_GE95)startGeoCoordinate;
-(SCD_Struct_GE95)endGeoCoordinate;
-(BOOL)isArrivalStep;
-(id<GEOTransitRoutingIncidentMessage>)steppingIncidentMessage;
-(id<GEOTransitRoutingIncidentMessage>)routeDetailsIncidentMessage;
-(id)routeDetailsPrimaryArtwork;
-(id)routeDetailsSecondaryArtwork;
-(id)steppingArtwork;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 transitStep:(id)arg3 stepIndex:(unsigned long long)arg4 geoStep:(id)arg5 pointRange:(NSRange)arg6 maneuverPointRange:(NSRange)arg7 ;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 transitStep:(id)arg3 stepIndex:(unsigned long long)arg4 startCoordinate:(SCD_Struct_GE32)arg5 endCoordinate:(SCD_Struct_GE32)arg6 pointRange:(NSRange)arg7 ;
-(void)_commonInitWithDecoderData:(id)arg1 ;
@end

