/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitRouteStep.h>

@protocol GEOTransitLine, GEOTransitSystem;
@class NSArray, GEOTransitVehicleInfo, GEOComposedTransitTripRouteLeg, NSTimeZone, NSDate;

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep {

	NSArray* _arrivalTimesAtOrigin;
	NSArray* _departureTimes;
	NSArray* _arrivalTimes;
	double _departureTimeIntervalMin;
	double _departureTimeIntervalMax;
	GEOTransitVehicleInfo* _transitVehicle;
	id<GEOTransitLine> _transitLine;
	id<GEOTransitSystem> _transitSystem;
	NSArray* _routeLineArtwork;
	BOOL _isRail;
	BOOL _isBus;
	BOOL _canPreloadTiles;

}

@property (nonatomic,readonly) GEOComposedTransitTripRouteLeg * tripLeg; 
@property (nonatomic,readonly) NSTimeZone * departureTimeZone; 
@property (nonatomic,readonly) NSTimeZone * arrivalTimeZone; 
@property (nonatomic,readonly) NSDate * arrivalTimeAtOrigin; 
@property (nonatomic,readonly) NSDate * departureTime; 
@property (nonatomic,readonly) NSDate * arrivalTime; 
@property (nonatomic,readonly) NSArray * arrivalTimesAtOrigin;                        //@synthesize arrivalTimesAtOrigin=_arrivalTimesAtOrigin - In the implementation block
@property (nonatomic,readonly) NSArray * departureTimes;                              //@synthesize departureTimes=_departureTimes - In the implementation block
@property (nonatomic,readonly) NSArray * arrivalTimes;                                //@synthesize arrivalTimes=_arrivalTimes - In the implementation block
@property (nonatomic,readonly) double departureTimeIntervalMin;                       //@synthesize departureTimeIntervalMin=_departureTimeIntervalMin - In the implementation block
@property (nonatomic,readonly) double departureTimeIntervalMax;                       //@synthesize departureTimeIntervalMax=_departureTimeIntervalMax - In the implementation block
@property (nonatomic,readonly) GEOTransitVehicleInfo * transitVehicle;                //@synthesize transitVehicle=_transitVehicle - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLine> transitLine;                        //@synthesize transitLine=_transitLine - In the implementation block
@property (nonatomic,readonly) id<GEOTransitSystem> transitSystem;                    //@synthesize transitSystem=_transitSystem - In the implementation block
@property (nonatomic,readonly) NSArray * routeLineArtwork;                            //@synthesize routeLineArtwork=_routeLineArtwork - In the implementation block
@property (nonatomic,readonly) BOOL isRail;                                           //@synthesize isRail=_isRail - In the implementation block
@property (nonatomic,readonly) BOOL isBus;                                            //@synthesize isBus=_isBus - In the implementation block
@property (nonatomic,readonly) BOOL canPreloadTilesForThisStep; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)duration;
-(BOOL)isRail;
-(BOOL)hasDuration;
-(NSDate *)departureTime;
-(GEOComposedTransitTripRouteLeg *)tripLeg;
-(BOOL)canPreloadTilesForThisStep;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 line:(id)arg5 maneuverType:(int)arg6 significance:(int)arg7 ;
-(NSArray *)routeLineArtwork;
-(id<GEOTransitLine>)transitLine;
-(BOOL)isBus;
-(NSDate *)arrivalTime;
-(GEOTransitVehicleInfo *)transitVehicle;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(NSTimeZone *)departureTimeZone;
-(NSTimeZone *)arrivalTimeZone;
-(NSDate *)arrivalTimeAtOrigin;
-(NSArray *)arrivalTimesAtOrigin;
-(NSArray *)departureTimes;
-(NSArray *)arrivalTimes;
-(double)departureTimeIntervalMin;
-(double)departureTimeIntervalMax;
-(id<GEOTransitSystem>)transitSystem;
@end

