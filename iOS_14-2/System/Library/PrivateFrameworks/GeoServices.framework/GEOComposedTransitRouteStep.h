/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteStep.h>

@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;
@class GEOTransitStep, NSArray, GEOPBTransitStop, GEOPBTransitHall, GEOTransitScheduleInfo, NSString;

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep {

	int _maneuver;
	unsigned _startTime;
	unsigned _duration;
	GEOTransitStep* _transitStep;
	NSArray* _routeDetailsPrimaryArtwork;
	id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
	NSArray* _steppingArtwork;
	id<GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
	GEOPBTransitStop* _originStop;
	GEOPBTransitStop* _destinationStop;
	GEOPBTransitHall* _originHall;
	GEOPBTransitHall* _destinationHall;

}

@property (nonatomic,readonly) int maneuver;                                                                  //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,readonly) GEOComposedTransitRouteStep * previousTransitStep; 
@property (nonatomic,readonly) GEOComposedTransitRouteStep * nextTransitStep; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;                  //@synthesize steppingIncidentMessage=_steppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;              //@synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage - In the implementation block
@property (nonatomic,readonly) GEOPBTransitStop * originStop;                                                 //@synthesize originStop=_originStop - In the implementation block
@property (nonatomic,readonly) GEOPBTransitStop * destinationStop;                                            //@synthesize destinationStop=_destinationStop - In the implementation block
@property (nonatomic,readonly) GEOPBTransitHall * originHall;                                                 //@synthesize originHall=_originHall - In the implementation block
@property (nonatomic,readonly) GEOPBTransitHall * destinationHall;                                            //@synthesize destinationHall=_destinationHall - In the implementation block
@property (nonatomic,readonly) GEOTransitStep * transitStep;                                                  //@synthesize transitStep=_transitStep - In the implementation block
@property (nonatomic,readonly) id<GEOTransitVehicleEntries> vehicleEntries; 
@property (nonatomic,readonly) GEOTransitScheduleInfo * scheduleInfo; 
@property (nonatomic,readonly) unsigned long long originTransitEntityMuid; 
@property (nonatomic,readonly) unsigned long long destinationTransitEntityMuid; 
@property (nonatomic,readonly) NSString * originStopIntermediateListName; 
@property (nonatomic,readonly) NSString * destinationStopIntermediateListName; 
+(BOOL)supportsSecureCoding;
-(BOOL)hasDuration;
-(id)instructions;
-(double)distance;
-(void)encodeWithCoder:(id)arg1 ;
-(GEOTransitStep *)transitStep;
-(GEOTransitScheduleInfo *)scheduleInfo;
-(id)description;
-(id)endingStop;
-(int)maneuver;
-(id)nextStop;
-(id)startingStop;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_muidForStop:(id)arg1 ;
-(GEOPBTransitStop *)destinationStop;
-(id)previousStop;
-(void)_populateIncidentsWithDecoderData:(id)arg1 ;
-(void)_populateArtworksWithDecoderData:(id)arg1 ;
-(id)nextBoardingStep;
-(id)previousBoardingStep;
-(id)nextAlightingStep;
-(id)previousAlightingStep;
-(SCD_Struct_GE98)startGeoCoordinate;
-(GEOPBTransitHall *)destinationHall;
-(SCD_Struct_GE98)endGeoCoordinate;
-(id)_largestEntityAtStop:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)_intermediateListNameForStop:(id)arg1 ;
-(id<GEOTransitVehicleEntries>)vehicleEntries;
-(GEOComposedTransitRouteStep *)previousTransitStep;
-(GEOComposedTransitRouteStep *)nextTransitStep;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 routeSegmentType:(long long)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 duration:(unsigned)arg6 pointRange:(NSRange)arg7 ;
-(BOOL)isArrivalStep;
-(unsigned long long)originTransitEntityMuid;
-(unsigned long long)destinationTransitEntityMuid;
-(id)steppingArtwork;
-(NSString *)originStopIntermediateListName;
-(NSString *)destinationStopIntermediateListName;
-(id<GEOTransitRoutingIncidentMessage>)steppingIncidentMessage;
-(id<GEOTransitRoutingIncidentMessage>)routeDetailsIncidentMessage;
-(id)routeDetailsPrimaryArtwork;
-(id)routeDetailsSecondaryArtwork;
-(unsigned)duration;
-(unsigned)startTime;
-(GEOPBTransitStop *)originStop;
-(GEOPBTransitHall *)originHall;
@end

