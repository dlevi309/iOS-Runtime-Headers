/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>
#import <libobjc.A.dylib/MKQuickRouteManagerDelegate.h>
#import <libobjc.A.dylib/MKQuickRouteConfigurableView.h>
#import <libobjc.A.dylib/MKQuickRouteTransportTypeFinding.h>

@protocol MKETAProviderDelegate, _MKPlaceItem, GEOTransitLineItem;
@class _MKQuickRouteManager, NSNumber, MKMapItem, NSString, NSTimer, CLLocation, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions, NSHashTable, NSLock;

@interface MKETAProvider : NSObject <MKLocationManagerObserver, MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKQuickRouteTransportTypeFinding> {

	_MKQuickRouteManager* _quickRouteManager;
	NSNumber* _lastTransportTypeFound;
	MKMapItem* _nearestStationItem;
	BOOL _distanceOrETAIsSuppressed;
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
	GEOCyclingOptions* _cyclingOptions;
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
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions;                      //@synthesize cyclingOptions=_cyclingOptions - In the implementation block
@property (nonatomic,readonly) NSString * distanceString; 
@property (nonatomic,readonly) unsigned long long etaTransportType; 
@property (nonatomic,readonly) double etaTravelTime; 
@property (nonatomic,readonly) NSNumber * transportTypePreferenceNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocation *)currentLocation;
-(GEOTransitOptions *)transitOptions;
-(void)restart;
-(void)addObserver:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(id)initWithPlaceItem:(id)arg1 ;
-(NSHashTable *)observers;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(id<MKETAProviderDelegate>)delegate;
-(void)start;
-(void)pause;
-(void)_configureETAForMapItem:(id)arg1 ;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(void)_updateETAHandler:(id)arg1 ;
-(void)_willEnterForeground;
-(NSLock *)observersLock;
-(id)currentMapItem;
-(void)_notifyETAAllObservers;
-(void)_updateETA;
-(BOOL)_areDistanceAndETAInformationAvailable;
-(BOOL)_shouldUpdateETAForMapView:(id)arg1 ;
-(void)_notifyLocationAllObservers;
-(unsigned long long)etaTransportType;
-(double)etaTravelTime;
-(void)_updateETADisplayWithTransportType:(unsigned long long)arg1 travelTime:(double)arg2 distance:(double)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)setObserversLock:(NSLock *)arg1 ;
-(NSNumber *)transportTypePreferenceNumber;
-(void)setDelegate:(id<MKETAProviderDelegate>)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)_didEnterBackground;
-(void)_cancelTimer;
-(void)_startTimer;
-(id)initWithLineItem:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id<GEOTransitLineItem>)lineItem;
-(void)findDirectionsTypeForOriginCoordinate:(CLLocationCoordinate2D)arg1 destinationCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)quickRouteShouldOnlyUseAutomobile;
-(BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
-(void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(BOOL)arg4 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)_commonInit;
-(GEOCyclingOptions *)cyclingOptions;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(NSString *)distanceString;
-(void)cancel;
-(void)configureWithNearestStationMapItem:(id)arg1 ;
-(id<_MKPlaceItem>)placeItem;
-(void)_refreshTimer;
-(void)dealloc;
@end

