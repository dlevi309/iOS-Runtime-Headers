/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, GEOComposedWaypoint, NSDate, GEOLocation, GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions, NSArray;

@interface GEOQuickETARequest : NSObject {

	NSString* _requestingAppIdentifier;
	GEOComposedWaypoint* _sourceWaypoint;
	GEOComposedWaypoint* _destinationWaypoint;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	int _transportType;
	GEOLocation* _currentLocation;
	BOOL _includeDistance;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	NSArray* _additionalTransportTypesRequested;

}

@property (nonatomic,retain) NSString * requestingAppIdentifier;                         //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * sourceWaypoint;                     //@synthesize sourceWaypoint=_sourceWaypoint - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destinationWaypoint;                //@synthesize destinationWaypoint=_destinationWaypoint - In the implementation block
@property (nonatomic,readonly) NSDate * departureDate;                                   //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                                     //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) GEOLocation * currentLocation;                            //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) BOOL includeDistance;                                     //@synthesize includeDistance=_includeDistance - In the implementation block
@property (nonatomic,readonly) GEOAutomobileOptions * automobileOptions;                 //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) GEOTransitOptions * transitOptions;                       //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) GEOWalkingOptions * walkingOptions;                       //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (nonatomic,readonly) NSArray * additionalTransportTypesRequested;              //@synthesize additionalTransportTypesRequested=_additionalTransportTypesRequested - In the implementation block
-(id)description;
-(int)transportType;
-(NSDate *)arrivalDate;
-(NSDate *)departureDate;
-(GEOLocation *)currentLocation;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(GEOWalkingOptions *)walkingOptions;
-(BOOL)includeDistance;
-(NSString *)requestingAppIdentifier;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 ;
-(id)_defaultRequestingAppIdentifier;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(BOOL)arg5 automobileOptions:(id)arg6 transitOptions:(id)arg7 walkingOptions:(id)arg8 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(BOOL)arg5 automobileOptions:(id)arg6 transitOptions:(id)arg7 walkingOptions:(id)arg8 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 additionalTransportTypesRequested:(id)arg7 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 additionalTransportTypesRequested:(id)arg7 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 additionalTransportTypesRequested:(id)arg7 automobileOptions:(id)arg8 transitOptions:(id)arg9 walkingOptions:(id)arg10 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(BOOL)arg6 additionalTransportTypesRequested:(id)arg7 automobileOptions:(id)arg8 transitOptions:(id)arg9 walkingOptions:(id)arg10 ;
-(GEOComposedWaypoint *)sourceWaypoint;
-(GEOComposedWaypoint *)destinationWaypoint;
-(NSArray *)additionalTransportTypesRequested;
@end

