/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOComposedRoute, GEOStep, NSString, GEOComposedRouteLeg, GEOComposedTransitTripRouteStep, GEOPBTransitStop, GEOTransitStep, GEOInstructionSet, NSArray;

@interface GEOComposedRouteStep : NSObject <NSSecureCoding> {

	GEOComposedRoute* _composedRoute;
	GEOStep* _geoStep;
	int _drivingSide;
	unsigned long long _stepIndex;
	NSRange _pointRange;
	NSRange _maneuverPointRange;
	NSString* _maneuverRoadOrExitName;
	NSString* _maneuverRoadName;
	unsigned _actualDistance;
	long long _routeLegType;

}

@property (nonatomic,readonly) BOOL shouldCreateEnterBoardGroup; 
@property (nonatomic,readonly) BOOL shouldCreateAlightExitGroup; 
@property (nonatomic,readonly) BOOL shouldCreateTransferGroup; 
@property (nonatomic,readonly) BOOL shouldCreateTripProgressionGroup; 
@property (nonatomic,readonly) BOOL shouldCreateFerryProgressionGroup; 
@property (nonatomic,readonly) BOOL shouldCreateArrivalGroup; 
@property (assign,nonatomic,__weak) GEOComposedRoute * composedRoute;                                          //@synthesize composedRoute=_composedRoute - In the implementation block
@property (assign,nonatomic) unsigned actualDistance;                                                          //@synthesize actualDistance=_actualDistance - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteLeg * leg; 
@property (getter=getPreviousStep,nonatomic,readonly) GEOComposedRouteStep * previousStep; 
@property (getter=getNextStep,nonatomic,readonly) GEOComposedRouteStep * nextStep; 
@property (nonatomic,readonly) long long routeLegType;                                                         //@synthesize routeLegType=_routeLegType - In the implementation block
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
@property (nonatomic,readonly) BOOL isUncertainArrival; 
@property (nonatomic,readonly) BOOL isArrivalStep; 
@property (nonatomic,readonly) SCD_Struct_GE95 startGeoCoordinate; 
@property (nonatomic,readonly) SCD_Struct_GE95 endGeoCoordinate; 
@property (nonatomic,readonly) GEOStep * geoStep;                                                              //@synthesize geoStep=_geoStep - In the implementation block
@property (nonatomic,readonly) int drivingSide;                                                                //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) BOOL hasDuration; 
@property (nonatomic,readonly) unsigned duration; 
@property (nonatomic,readonly) unsigned stepID; 
@property (nonatomic,readonly) unsigned distance; 
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
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)duration;
-(unsigned)pointCount;
-(int)transportType;
-(unsigned)startTime;
-(unsigned)distance;
-(id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(long long)arg3 stepIndex:(unsigned long long)arg4 pointRange:(NSRange)arg5 maneuverPointRange:(NSRange)arg6 ;
-(BOOL)hasDuration;
-(int)drivingSide;
-(GEOInstructionSet *)instructions;
-(unsigned)stepID;
-(GEOTransitStep *)transitStep;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(unsigned)startPointIndex;
-(unsigned)endPointIndex;
-(void)setActualDistance:(unsigned)arg1 ;
-(unsigned)maneuverEndPointIndex;
-(NSRange)pointRange;
-(GEOStep *)geoStep;
-(unsigned long long)stepIndex;
-(unsigned)maneuverStartPointIndex;
-(BOOL)shouldPreloadWithHighPriority;
-(GEOPBTransitStop *)startingStop;
-(GEOPBTransitStop *)endingStop;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 ;
-(id)getPreviousStep;
-(id)getNextStep;
-(GEOPBTransitStop *)previousStop;
-(GEOPBTransitStop *)nextStop;
-(int)maneuver;
-(GEOComposedTransitTripRouteStep *)nextBoardingStep;
-(GEOComposedTransitTripRouteStep *)previousBoardingStep;
-(GEOComposedTransitTripRouteStep *)nextAlightingStep;
-(GEOComposedTransitTripRouteStep *)previousAlightingStep;
-(SCD_Struct_GE95)startGeoCoordinate;
-(SCD_Struct_GE95)endGeoCoordinate;
-(GEOComposedRoute *)composedRoute;
-(BOOL)isArrivalStep;
-(NSArray *)routeDetailsPrimaryArtwork;
-(id<GEOTransitArtworkDataSource>)routeDetailsSecondaryArtwork;
-(NSArray *)steppingArtwork;
-(long long)routeLegType;
-(BOOL)shouldCreateEnterBoardGroup;
-(BOOL)shouldCreateTripProgressionGroup;
-(BOOL)shouldCreateFerryProgressionGroup;
-(BOOL)shouldCreateAlightExitGroup;
-(BOOL)shouldCreateTransferGroup;
-(BOOL)shouldCreateArrivalGroup;
-(GEOComposedRouteLeg *)leg;
-(BOOL)_belongsToTransferGroup;
-(NSString *)maneuverRoadName;
-(NSString *)maneuverRoadOrExitName;
-(BOOL)isUncertainArrival;
-(GEOComposedTransitTripRouteStep *)closestLogicalBoardOrAlightStep;
-(id)firstNameOrBranch;
-(NSRange)maneuverPointRange;
-(unsigned)actualDistance;
@end

