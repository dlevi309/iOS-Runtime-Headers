/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableDictionary, MKDirections, MKMapItem, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions;

@interface _MKRouteETAFetcher : NSObject {

	NSMutableDictionary* _etaResults;
	CLLocationCoordinate2D _lastUpdatedETAOriginCoordinate;
	double _lastUpdatedETATime;
	double _lastRequestTime;
	MKDirections* _inProgressETAUpdate;
	BOOL _lastETAUpdateHadError;
	double _staleDistance;
	double _staleTimeInterval;
	BOOL _optionsHaveChangedSinceLastUpdate;
	MKMapItem* _mapItem;
	MKMapItem* _originMapItem;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOCyclingOptions* _cyclingOptions;

}

@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions;                      //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,copy) GEOTransitOptions * transitOptions;                            //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,copy) GEOCyclingOptions * cyclingOptions;                            //@synthesize cyclingOptions=_cyclingOptions - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) MKMapItem * originMapItem;                                   //@synthesize originMapItem=_originMapItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * etaResults;                          //@synthesize etaResults=_etaResults - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D originCoordinate; 
@property (nonatomic,readonly) CLLocationCoordinate2D destinationCoordinate; 
-(GEOTransitOptions *)transitOptions;
-(NSMutableDictionary *)etaResults;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(id)init;
-(MKMapItem *)mapItem;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)_resetState;
-(void)invalidateETAForTransportType:(unsigned long long)arg1 ;
-(MKMapItem *)originMapItem;
-(BOOL)isUsingCurrentLocationForOrigin;
-(CLLocationCoordinate2D)originCoordinate;
-(BOOL)isValidETA:(id)arg1 ;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(void)requestNewETAForTransportType:(unsigned long long)arg1 additionalTransportTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CLLocationCoordinate2D)destinationCoordinate;
-(BOOL)shouldUpdateEstimatedTravelTimeForNewOrigin:(CLLocationCoordinate2D)arg1 ;
-(void)_didUpdateETAResult;
-(void)expireETAsIfNoLongerValid;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(GEOCyclingOptions *)cyclingOptions;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)dealloc;
@end

