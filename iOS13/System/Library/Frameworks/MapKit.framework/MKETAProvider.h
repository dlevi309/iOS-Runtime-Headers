/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>
#import <libobjc.A.dylib/MKQuickRouteManagerDelegate.h>
#import <libobjc.A.dylib/MKQuickRouteConfigurableView.h>
#import <libobjc.A.dylib/MKQuickRouteTransportTypeFinding.h>

@protocol MKETAProviderDelegate, _MKPlaceItem, GEOTransitLineItem;
@class _MKQuickRouteManager, NSNumber, MKMapItem, NSString, NSTimer, CLLocation, GEOAutomobileOptions, GEOTransitOptions, NSHashTable, NSLock;

@interface MKETAProvider : NSObject <MKLocationManagerObserver, MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKQuickRouteTransportTypeFinding> {

	_MKQuickRouteManager* _quickRouteManager;
	NSNumber* _lastTransportTypeFound;
	MKMapItem* _nearestStationItem;
	BOOL _distanceOrETAWasFound;
	NSString* _distanceTextItem;
	unsigned long long _etaTransportType;
	double _etaTravelTime;
	BOOL _active;
	BOOL _paused;
	BOOL _inactiveInBackground;
	NSTimer* _refreshTimer;
	CLLocation* _currentLocation;
	id<MKETAProviderDelegate> _delegate;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	id<_MKPlaceItem> _placeItem;
	id<GEOTransitLineItem> _lineItem;
	NSHashTable* _observers;
	NSLock* _observersLock;

}

@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                            //@synthesize placeItem=_placeItem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                       //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSLock * observersLock;                                  //@synthesize observersLock=_observersLock - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation;                          //@synthesize currentLocation=_currentLocation - In the implementation block
@property (assign,nonatomic,__weak) id<MKETAProviderDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                      //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) NSString * distanceString; 
@property (nonatomic,readonly) unsigned long long etaTransportType; 
@property (nonatomic,readonly) double etaTravelTime; 
@property (nonatomic,readonly) NSNumber * transportTypePreferenceNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MKETAProviderDelegate>)delegate;
-(void)setDelegate:(id<MKETAProviderDelegate>)arg1 ;
-(void)cancel;
-(void)pause;
-(void)start;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)_commonInit;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)_startTimer;
-(CLLocation *)currentLocation;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)_cancelTimer;
-(id<GEOTransitLineItem>)lineItem;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(id)initWithLineItem:(id)arg1 ;
-(void)restart;
-(id<_MKPlaceItem>)placeItem;
-(id)initWithPlaceItem:(id)arg1 ;
-(NSNumber *)transportTypePreferenceNumber;
-(void)configureWithNearestStationMapItem:(id)arg1 ;
-(BOOL)quickRouteShouldOnlyUseAutomobile;
-(BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
-(void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(BOOL)arg4 ;
-(NSString *)distanceString;
-(void)findDirectionsTypeForOriginCoordinate:(CLLocationCoordinate2D)arg1 destinationCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(void)_configureETAForMapItem:(id)arg1 ;
-(void)_updateETAHandler:(id)arg1 ;
-(void)_willEnterForeground;
-(void)_didEnterBackground;
-(id)currentMapItem;
-(void)_updateETA;
-(void)_refreshTimer;
-(NSLock *)observersLock;
-(BOOL)_areDistanceAndETAInformationAvailable;
-(BOOL)_shouldUpdateETAForMapView:(id)arg1 ;
-(void)_notifyETAAllObservers;
-(void)_notifyLocationAllObservers;
-(void)_updateETADisplayWithTransportType:(unsigned long long)arg1 travelTime:(double)arg2 distance:(double)arg3 ;
-(unsigned long long)etaTransportType;
-(double)etaTravelTime;
-(void)setObserversLock:(NSLock *)arg1 ;
@end

