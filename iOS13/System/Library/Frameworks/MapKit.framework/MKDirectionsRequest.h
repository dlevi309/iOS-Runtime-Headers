/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapItem, NSDate, NSArray, GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions;

@interface MKDirectionsRequest : NSObject <NSCopying> {

	MKMapItem* _source;
	MKMapItem* _destination;
	unsigned long long _transportType;
	BOOL _requestsAlternateRoutes;
	BOOL _includeTravelTimes;
	BOOL _includeTrafficIncidents;
	BOOL _includeZilchRoutePoints;
	BOOL _includeBasicRoutePoints;
	BOOL _includeEntryPoints;
	BOOL _includeDistanceInETA;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	NSArray* _additionalTransportTypesRequested;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;

}

@property (assign,setter=_setIncludeDistanceInETA:,getter=_includeDistanceInETA,nonatomic) BOOL includeDistanceInETA;                                                          //@synthesize includeDistanceInETA=_includeDistanceInETA - In the implementation block
@property (setter=_setAdditionalTransportTypesRequested:,getter=_additionalTransportTypesRequested,nonatomic,retain) NSArray * additionalTransportTypesRequested;              //@synthesize additionalTransportTypesRequested=_additionalTransportTypesRequested - In the implementation block
@property (nonatomic,readonly) BOOL _includeTypicalRouteDuration; 
@property (nonatomic,readonly) BOOL _includeTravelTimes;                                                                                                                       //@synthesize includeTravelTimes=_includeTravelTimes - In the implementation block
@property (nonatomic,readonly) BOOL _includeTrafficIncidents;                                                                                                                  //@synthesize includeTrafficIncidents=_includeTrafficIncidents - In the implementation block
@property (nonatomic,readonly) BOOL _includeZilchRoutePoints;                                                                                                                  //@synthesize includeZilchRoutePoints=_includeZilchRoutePoints - In the implementation block
@property (nonatomic,readonly) BOOL _includeBasicRoutePoints;                                                                                                                  //@synthesize includeBasicRoutePoints=_includeBasicRoutePoints - In the implementation block
@property (nonatomic,readonly) BOOL _includeEntryPoints;                                                                                                                       //@synthesize includeEntryPoints=_includeEntryPoints - In the implementation block
@property (setter=_setAutomobileOptions:,getter=_automobileOptions,nonatomic,retain) GEOAutomobileOptions * automobileOptions;                                                 //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (setter=_setTransitOptions:,getter=_transitOptions,nonatomic,retain) GEOTransitOptions * transitOptions;                                                             //@synthesize transitOptions=_transitOptions - In the implementation block
@property (setter=_setWalkingOptions:,getter=_walkingOptions,nonatomic,retain) GEOWalkingOptions * walkingOptions;                                                             //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (nonatomic,retain) MKMapItem * source;                                                                                                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) MKMapItem * destination;                                                                                                                          //@synthesize destination=_destination - In the implementation block
+(BOOL)isDirectionsRequestURL:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(MKMapItem *)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(MKMapItem *)source;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentation;
-(MKMapItem *)destination;
-(void)setDestination:(MKMapItem *)arg1 ;
-(unsigned long long)transportType;
-(id)arrivalDate;
-(id)departureDate;
-(id)_arrivalDate;
-(id)_departureDate;
-(void)setTransportType:(unsigned long long)arg1 ;
-(unsigned long long)_transportType;
-(void)setArrivalDate:(id)arg1 ;
-(BOOL)_includeEntryPoints;
-(id)_automobileOptions;
-(id)_transitOptions;
-(id)_walkingOptions;
-(BOOL)_includeTrafficIncidents;
-(id)_additionalTransportTypesRequested;
-(BOOL)_includeBasicRoutePoints;
-(BOOL)_includeZilchRoutePoints;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 includeTravelTimes:(BOOL)arg5 includeTrafficIncidents:(BOOL)arg6 includeEntryPoints:(BOOL)arg7 includeRoutePoints:(BOOL)arg8 ;
-(void)_setIncludeDistanceInETA:(BOOL)arg1 ;
-(void)_setAdditionalTransportTypesRequested:(id)arg1 ;
-(void)_setAutomobileOptions:(id)arg1 ;
-(void)_setTransitOptions:(id)arg1 ;
-(BOOL)_includeTravelTimes;
-(BOOL)requestsAlternateRoutes;
-(BOOL)_includeDistanceInETA;
-(void)setRequestsAlternateRoutes:(BOOL)arg1 ;
-(void)setDepartureDate:(id)arg1 ;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 ;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 ;
-(id)_mapkit_initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)_includeTypicalRouteDuration;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 includeTravelTimes:(BOOL)arg5 includeTrafficIncidents:(BOOL)arg6 includeEntryPoints:(BOOL)arg7 includeRoutePoints:(BOOL)arg8 ;
-(id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3 ;
-(id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3 ;
-(void)_setWalkingOptions:(id)arg1 ;
@end

