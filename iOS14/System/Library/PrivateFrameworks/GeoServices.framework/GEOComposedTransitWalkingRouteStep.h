/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedWalkingRouteStep.h>

@protocol GEOTransitRoutingIncidentMessage, GEOTransitArtworkDataSource;
@class GEOTransitStep, NSArray;

@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep {

	GEOTransitStep* _transitStep;
	GEOCoarseLocationLatLng _startCoordinate;
	GEOCoarseLocationLatLng _endCoordinate;
	id<GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
	NSArray* _steppingArtwork;
	NSArray* _routeDetailsPrimaryArtwork;
	id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;

}

@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;                  //@synthesize steppingIncidentMessage=_steppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;              //@synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 transitStep:(id)arg3 stepIndex:(unsigned long long)arg4 startCoordinate:(GEOCoarseLocationLatLng)arg5 endCoordinate:(GEOCoarseLocationLatLng)arg6 pointRange:(NSRange)arg7 ;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 transitStep:(id)arg3 stepIndex:(unsigned long long)arg4 geoStep:(id)arg5 pointRange:(NSRange)arg6 maneuverPointRange:(NSRange)arg7 ;
-(id)instructions;
-(double)distance;
-(void)encodeWithCoder:(id)arg1 ;
-(id)transitStep;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInitWithDecoderData:(id)arg1 ;
-(SCD_Struct_GE98)startGeoCoordinate;
-(SCD_Struct_GE98)endGeoCoordinate;
-(BOOL)isArrivalStep;
-(id)steppingArtwork;
-(id<GEOTransitRoutingIncidentMessage>)steppingIncidentMessage;
-(id<GEOTransitRoutingIncidentMessage>)routeDetailsIncidentMessage;
-(id)routeDetailsPrimaryArtwork;
-(id)routeDetailsSecondaryArtwork;
@end

