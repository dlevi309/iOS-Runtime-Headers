/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@class NSArray, GEOComposedTransitTripRouteStep, NSTimeZone, NSDate;

@interface GEOComposedTransitTripRouteLeg : GEOComposedTransitBaseRouteLeg {

	unsigned long long _boardStepIndex;
	unsigned long long _alightStepIndex;
	unsigned long long _blockTransferStepIndex;
	unsigned long long _numberOfTransitStops;
	unsigned long long _selectedRideOptionIndex;
	NSArray* _actionSheetDescriptions;
	NSArray* _routeDetailsOptionsArtwork;
	NSArray* _actionSheetOptionsArtwork;
	NSArray* _transitLineOptions;
	NSArray* _alightNotifications;

}

@property (nonatomic,readonly) id<GEOTransitSystem> transitSystem; 
@property (nonatomic,readonly) id<GEOTransitLine> transitLine; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * boardStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * alightStep; 
@property (nonatomic,readonly) NSTimeZone * departureTimeZone; 
@property (nonatomic,readonly) NSDate * departureTime; 
@property (nonatomic,readonly) NSArray * departureTimes; 
@property (nonatomic,readonly) NSArray * transitLineOptions;                              //@synthesize transitLineOptions=_transitLineOptions - In the implementation block
@property (nonatomic,readonly) double departureFrequencyMin; 
@property (nonatomic,readonly) double departureFrequencyMax; 
@property (nonatomic,readonly) NSDate * lastStepArrivalDate; 
@property (nonatomic,readonly) NSArray * routeLineArtwork; 
@property (nonatomic,readonly) unsigned long long rideOptionsCount; 
@property (assign,nonatomic) unsigned long long selectedRideOptionIndex;                  //@synthesize selectedRideOptionIndex=_selectedRideOptionIndex - In the implementation block
@property (nonatomic,readonly) BOOL notifyBeforeAlightStep; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)departureTime;
-(unsigned long long)numberOfTransitStops;
-(unsigned long long)rideOptionsCount;
-(void)setSelectedRideOptionIndex:(unsigned long long)arg1 ;
-(NSArray *)routeLineArtwork;
-(id<GEOTransitLine>)transitLine;
-(double)departureFrequencyMin;
-(double)departureFrequencyMax;
-(NSTimeZone *)departureTimeZone;
-(NSArray *)departureTimes;
-(id<GEOTransitSystem>)transitSystem;
-(BOOL)_needsStepData;
-(void)_cacheStepData;
-(GEOComposedTransitTripRouteStep *)boardStep;
-(id)blockTransferStep;
-(GEOComposedTransitTripRouteStep *)alightStep;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 tripIndex:(unsigned long long)arg3 stepRange:(NSRange)arg4 transitStepRange:(NSRange)arg5 pointRange:(NSRange)arg6 ;
-(id)routeDetailsPrimaryArtworkForRideOption:(unsigned long long)arg1 ;
-(id)actionSheetArtworkForRideOption:(unsigned long long)arg1 ;
-(id)actionSheetDescriptionForRideOption:(unsigned long long)arg1 ;
-(id)transitLineForRideOption:(unsigned long long)arg1 ;
-(NSDate *)lastStepArrivalDate;
-(BOOL)notifyBeforeAlightStep;
-(unsigned long long)selectedRideOptionIndex;
-(NSArray *)transitLineOptions;
@end

