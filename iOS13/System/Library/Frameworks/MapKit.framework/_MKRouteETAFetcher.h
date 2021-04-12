/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableDictionary, MKDirections, MKMapItem, GEOAutomobileOptions, GEOTransitOptions;

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

}

@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions;                      //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,copy) GEOTransitOptions * transitOptions;                            //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) MKMapItem * originMapItem;                                   //@synthesize originMapItem=_originMapItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * etaResults;                          //@synthesize etaResults=_etaResults - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D originCoordinate; 
@property (nonatomic,readonly) CLLocationCoordinate2D destinationCoordinate; 
-(id)init;
-(void)dealloc;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(NSMutableDictionary *)etaResults;
-(void)_resetState;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(void)invalidateETAForTransportType:(unsigned long long)arg1 ;
-(MKMapItem *)originMapItem;
-(BOOL)isUsingCurrentLocationForOrigin;
-(CLLocationCoordinate2D)originCoordinate;
-(BOOL)isValidETA:(id)arg1 ;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(void)requestNewETAForTransportType:(unsigned long long)arg1 additionalTransportTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CLLocationCoordinate2D)destinationCoordinate;
-(BOOL)shouldUpdateEstimatedTravelTimeForNewOrigin:(CLLocationCoordinate2D)arg1 ;
-(void)expireETAsIfNoLongerValid;
-(void)_didUpdateETAResult;
@end

