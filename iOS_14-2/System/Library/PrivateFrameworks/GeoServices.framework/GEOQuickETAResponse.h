/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOLocation, NSString, GEOQuickETATransitDeparturesInfo, NSMutableArray;

@interface GEOQuickETAResponse : NSObject {

	GEOLocation* _sourceLocation;
	GEOLocation* _destinationLocation;
	unsigned _responseETASeconds;
	unsigned _baselineETASeconds;
	double _distance;
	NSString* _routeDescription;
	GEOQuickETATransitDeparturesInfo* _transitDeparturesInfo;
	double _distanceToDepartureStop;
	double _walkingDurationToDepartureStop;
	NSMutableArray* _sortedETAs;

}

@property (nonatomic,readonly) GEOLocation * sourceLocation;                                          //@synthesize sourceLocation=_sourceLocation - In the implementation block
@property (nonatomic,readonly) GEOLocation * destinationLocation;                                     //@synthesize destinationLocation=_destinationLocation - In the implementation block
@property (nonatomic,readonly) unsigned responseETASeconds;                                           //@synthesize responseETASeconds=_responseETASeconds - In the implementation block
@property (nonatomic,readonly) unsigned baselineETASeconds;                                           //@synthesize baselineETASeconds=_baselineETASeconds - In the implementation block
@property (nonatomic,readonly) double distance;                                                       //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) NSString * routeDescription;                                           //@synthesize routeDescription=_routeDescription - In the implementation block
@property (nonatomic,readonly) GEOQuickETATransitDeparturesInfo * transitDeparturesInfo;              //@synthesize transitDeparturesInfo=_transitDeparturesInfo - In the implementation block
@property (nonatomic,readonly) double distanceToDepartureStop;                                        //@synthesize distanceToDepartureStop=_distanceToDepartureStop - In the implementation block
@property (nonatomic,readonly) double walkingDurationToDepartureStop;                                 //@synthesize walkingDurationToDepartureStop=_walkingDurationToDepartureStop - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sortedETAs;                                           //@synthesize sortedETAs=_sortedETAs - In the implementation block
-(double)distance;
-(NSString *)routeDescription;
-(NSMutableArray *)sortedETAs;
-(id)initWithETAResult:(id)arg1 fromRequest:(id)arg2 ;
-(unsigned)responseETASeconds;
-(id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2 ;
-(GEOLocation *)sourceLocation;
-(unsigned)baselineETASeconds;
-(GEOQuickETATransitDeparturesInfo *)transitDeparturesInfo;
-(double)distanceToDepartureStop;
-(double)walkingDurationToDepartureStop;
-(GEOLocation *)destinationLocation;
@end

