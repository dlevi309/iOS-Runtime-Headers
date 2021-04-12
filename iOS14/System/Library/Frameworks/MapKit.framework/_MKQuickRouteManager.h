/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKQuickRouteManagerDelegate, MKQuickRouteTransportTypeFinding, MKQuickRouteConfigurableView;
#import <MapKit/MapKit-Structs.h>
@class _MKRouteETAFetcher, _MKRouteETA, NSError, NSObject, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions, MKMapItem;

@interface _MKQuickRouteManager : NSObject {

	_MKRouteETAFetcher* _etaFetcher;
	double _maxDistanceToRequestETA;
	_MKRouteETA* _lastETA;
	unsigned long long _lastPreferredDirectionsType;
	NSError* _lastError;
	double _closeWalkTravelTime;
	double _maxWalkingDistance;
	BOOL _viewHasChangedSinceLastUpdate;
	BOOL _fetchAllTransportTypes;
	id<MKQuickRouteManagerDelegate> _delegate;
	id<MKQuickRouteTransportTypeFinding> _transportTypeFinder;
	NSObject*<MKQuickRouteConfigurableView> _view;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) BOOL isOnlyDriving; 
@property (assign,nonatomic,__weak) id<MKQuickRouteManagerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MKQuickRouteTransportTypeFinding> transportTypeFinder;                          //@synthesize transportTypeFinder=_transportTypeFinder - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<MKQuickRouteConfigurableView> view;                                      //@synthesize view=_view - In the implementation block
@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,copy) GEOTransitOptions * transitOptions; 
@property (nonatomic,copy) GEOCyclingOptions * cyclingOptions; 
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                                                        //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) MKMapItem * originMapItem; 
@property (getter=isUsingCurrentLocationForOrigin,nonatomic,readonly) BOOL usingCurrentLocationForOrigin; 
@property (assign,nonatomic) BOOL fetchAllTransportTypes;                                                              //@synthesize fetchAllTransportTypes=_fetchAllTransportTypes - In the implementation block
+(double)_maxDistanceToRequestETA;
+(unsigned long long)counterpartForTransportType:(unsigned long long)arg1 ;
+(unsigned long long)directionsTypeForMapItem:(id)arg1 delegate:(id)arg2 mapType:(unsigned long long)arg3 ;
+(BOOL)isLikelyToReturnETAForLocation:(id)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(id)init;
-(id<MKQuickRouteManagerDelegate>)delegate;
-(CLLocationCoordinate2D)coordinate;
-(MKMapItem *)mapItem;
-(void)setView:(NSObject*<MKQuickRouteConfigurableView>)arg1 ;
-(void)updateETA;
-(void)setDelegate:(id<MKQuickRouteManagerDelegate>)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(id)description;
-(NSObject*<MKQuickRouteConfigurableView>)view;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)_resetState;
-(MKMapItem *)originMapItem;
-(BOOL)isUsingCurrentLocationForOrigin;
-(CLLocationCoordinate2D)originCoordinate;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(CLLocationCoordinate2D)destinationCoordinate;
-(id<MKQuickRouteTransportTypeFinding>)transportTypeFinder;
-(BOOL)haveETAsForPreferredTransportType:(unsigned long long)arg1 ;
-(id)bestETAForPreferredDirectionsType:(unsigned long long)arg1 ;
-(BOOL)_transportTypeShouldBeSmart;
-(unsigned long long)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned long long)arg2 ;
-(BOOL)isOnlyDriving;
-(void)requestNewETAForPreferredTransportType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performWithTransportType:(/*^block*/id)arg1 ;
-(unsigned long long)directionsTypeForOriginCoordinate:(CLLocationCoordinate2D)arg1 destinationCoordinate:(CLLocationCoordinate2D)arg2 preferredDirectionsType:(unsigned long long)arg3 ;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(unsigned long long)directionsTypeForMapType:(unsigned long long)arg1 ;
-(void)setFetchAllTransportTypes:(BOOL)arg1 ;
-(void)setTransportTypeFinder:(id<MKQuickRouteTransportTypeFinding>)arg1 ;
-(BOOL)fetchAllTransportTypes;
-(GEOCyclingOptions *)cyclingOptions;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
@end

