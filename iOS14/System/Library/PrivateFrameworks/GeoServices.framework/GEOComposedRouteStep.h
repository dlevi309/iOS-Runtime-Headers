/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOComposedRoute, GEOStep, NSString, GEOJunction, GEOComposedRouteSegment, GEOComposedTransitTripRouteStep, GEOPBTransitStop, GEOTransitStep, GEOInstructionSet, NSArray, GEOComposedRouteEVStepInfo;

@interface GEOComposedRouteStep : NSObject <NSSecureCoding> {

	GEOComposedRoute* _composedRoute;
	GEOStep* _geoStep;
	int _drivingSide;
	unsigned long long _stepIndex;
	NSRange _pointRange;
	NSRange _maneuverPointRange;
	NSString* _maneuverRoadOrExitName;
	NSString* _maneuverRoadName;
	double _actualDistance;
	long long _routeSegmentType;
	GEOJunction* _junction;

}

@property (nonatomic,readonly) BOOL shouldCreateEnterBoardGroup; 
@property (nonatomic,readonly) BOOL shouldCreateAlightExitGroup; 
@property (nonatomic,readonly) BOOL shouldCreateTransferGroup; 
@property (nonatomic,readonly) BOOL shouldCreateTripProgressionGroup; 
@property (nonatomic,readonly) BOOL shouldCreateFerryProgressionGroup; 
@property (nonatomic,readonly) BOOL shouldCreateArrivalGroup; 
@property (assign,nonatomic,__weak) GEOComposedRoute * composedRoute;                                          //@synthesize composedRoute=_composedRoute - In the implementation block
@property (assign,nonatomic) double actualDistance;                                                            //@synthesize actualDistance=_actualDistance - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteSegment * segment; 
@property (getter=getPreviousStep,nonatomic,readonly) GEOComposedRouteStep * previousStep; 
@property (getter=getNextStep,nonatomic,readonly) GEOComposedRouteStep * nextStep; 
@property (nonatomic,readonly) long long routeSegmentType;                                                     //@synthesize routeSegmentType=_routeSegmentType - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) NSRange pointRange;                                                             //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) NSRange maneuverPointRange;                                                     //@synthesize maneuverPointRange=_maneuverPointRange - In the implementation block
@property (nonatomic,readonly) unsigned maneuverStartPointIndex; 
@property (nonatomic,readonly) unsigned maneuverEndPointIndex; 
@property (nonatomic,readonly) NSString * maneuverRoadOrExitName; 
@property (nonatomic,readonly) NSString * maneuverRoadName; 
@property (nonatomic,readonly) unsigned long long stepIndex;                                                   //@synthesize stepIndex=_stepIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long pathIndex; 
@property (nonatomic,readonly) BOOL isUncertainArrival; 
@property (nonatomic,readonly) BOOL isArrivalStep; 
@property (nonatomic,readonly) SCD_Struct_GE98 startGeoCoordinate; 
@property (nonatomic,readonly) SCD_Struct_GE98 endGeoCoordinate; 
@property (nonatomic,readonly) GEOStep * geoStep;                                                              //@synthesize geoStep=_geoStep - In the implementation block
@property (nonatomic,readonly) int drivingSide;                                                                //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) int maneuverType; 
@property (nonatomic,readonly) GEOJunction * junction;                                                         //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkOverride; 
@property (nonatomic,readonly) BOOL hasDuration; 
@property (nonatomic,readonly) unsigned duration; 
@property (nonatomic,readonly) unsigned stepID; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * nextBoardingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * previousBoardingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * nextAlightingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * previousAlightingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * closestLogicalBoardOrAlightStep; 
@property (nonatomic,readonly) GEOPBTransitStop * startingStop; 
@property (nonatomic,readonly) GEOPBTransitStop * endingStop; 
@property (nonatomic,readonly) unsigned startTime; 
@property (nonatomic,readonly) GEOPBTransitStop * previousStop; 
@property (nonatomic,readonly) GEOPBTransitStop * nextStop; 
@property (nonatomic,readonly) GEOTransitStep * transitStep; 
@property (nonatomic,readonly) GEOInstructionSet * instructions; 
@property (nonatomic,readonly) NSArray * steppingArtwork; 
@property (nonatomic,readonly) NSArray * routeDetailsPrimaryArtwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> routeDetailsSecondaryArtwork; 
@property (nonatomic,readonly) GEOComposedRouteEVStepInfo * evInfo; 
+(BOOL)supportsSecureCoding;
-(id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 geoStep:(id)arg3 routeSegmentType:(long long)arg4 stepIndex:(unsigned long long)arg5 pointRange:(NSRange)arg6 maneuverPointRange:(NSRange)arg7 ;
-(BOOL)shouldCreateEnterBoardGroup;
-(BOOL)shouldCreateTripProgressionGroup;
-(BOOL)shouldCreateFerryProgressionGroup;
-(BOOL)shouldCreateArrivalGroup;
-(BOOL)shouldCreateAlightExitGroup;
-(BOOL)shouldCreateTransferGroup;
-(BOOL)hasDuration;
-(GEOInstructionSet *)instructions;
-(BOOL)_belongsToTransferGroup;
-(GEOComposedRouteEVStepInfo *)evInfo;
-(unsigned)stepID;
-(GEOComposedRouteSegment *)segment;
-(GEOStep *)geoStep;
-(double)distance;
-(void)encodeWithCoder:(id)arg1 ;
-(GEOTransitStep *)transitStep;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(unsigned)endPointIndex;
-(unsigned)startPointIndex;
-(unsigned)maneuverStartPointIndex;
-(int)transportType;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(unsigned long long)pathIndex;
-(id)description;
-(int)maneuverType;
-(GEOPBTransitStop *)endingStop;
-(unsigned)maneuverEndPointIndex;
-(unsigned long long)stepIndex;
-(int)maneuver;
-(BOOL)shouldPreloadWithHighPriority;
-(GEOPBTransitStop *)nextStop;
-(GEOPBTransitStop *)startingStop;
-(GEOJunction *)junction;
-(GEOComposedRoute *)composedRoute;
-(id)initWithCoder:(id)arg1 ;
-(int)drivingSide;
-(id<GEOTransitArtworkDataSource>)artworkOverride;
-(NSString *)maneuverRoadOrExitName;
-(BOOL)isUncertainArrival;
-(GEOComposedTransitTripRouteStep *)closestLogicalBoardOrAlightStep;
-(id)firstNameOrBranch;
-(NSRange)maneuverPointRange;
-(double)actualDistance;
-(id)getNextStep;
-(id)initWithComposedRoute:(id)arg1 routeSegmentType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 ;
-(GEOPBTransitStop *)previousStop;
-(id)getPreviousStep;
-(GEOComposedTransitTripRouteStep *)nextBoardingStep;
-(GEOComposedTransitTripRouteStep *)previousBoardingStep;
-(GEOComposedTransitTripRouteStep *)nextAlightingStep;
-(GEOComposedTransitTripRouteStep *)previousAlightingStep;
-(SCD_Struct_GE98)startGeoCoordinate;
-(SCD_Struct_GE98)endGeoCoordinate;
-(long long)routeSegmentType;
-(BOOL)isArrivalStep;
-(NSArray *)steppingArtwork;
-(NSArray *)routeDetailsPrimaryArtwork;
-(id<GEOTransitArtworkDataSource>)routeDetailsSecondaryArtwork;
-(NSString *)maneuverRoadName;
-(unsigned)duration;
-(unsigned)startTime;
-(void)setActualDistance:(double)arg1 ;
-(unsigned)pointCount;
-(NSRange)pointRange;
@end

