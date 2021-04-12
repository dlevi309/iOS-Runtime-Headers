/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(GEOLocation *)destinationLocation;
-(NSMutableArray *)sortedETAs;
-(NSString *)routeDescription;
-(id)initWithETAResult:(id)arg1 fromRequest:(id)arg2 ;
-(id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2 ;
-(GEOLocation *)sourceLocation;
-(unsigned)responseETASeconds;
-(unsigned)baselineETASeconds;
-(GEOQuickETATransitDeparturesInfo *)transitDeparturesInfo;
-(double)distanceToDepartureStop;
-(double)walkingDurationToDepartureStop;
@end

