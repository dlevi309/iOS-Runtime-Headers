/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNLocationManagerObserver.h>

@class MNActiveRouteInfo, NSMutableArray, NSArray, GEORouteAttributes, GEODirectionsRequest, GEODirectionsResponse, NSString, GEOComposedWaypoint, GEORoutePreloader, GEOApplicationAuditToken, GEOComposedRoute;

@interface MNRouteManager : NSObject <MNLocationManagerObserver> {

	MNActiveRouteInfo* _currentRouteInfo;
	NSMutableArray* _alternateRoutes;
	NSArray* _allRoutes;
	NSArray* _previewRoutes;
	unsigned long long _selectedRouteIndex;
	GEORouteAttributes* _routeAttributes;
	GEODirectionsRequest* _directionsRequest;
	GEODirectionsResponse* _directionsResponse;
	NSString* _requestingAppIdentifier;
	GEOComposedWaypoint* _originalDestination;
	MNActiveRouteInfo* _originalRouteInfo;
	GEORoutePreloader* _preloader;
	NSString* _tileLoaderClientIdentifier;
	GEOApplicationAuditToken* _auditToken;
	NSArray* _contingencyRouteSegments;
	GEOComposedRoute* _originalRoute;

}

@property (nonatomic,readonly) GEOComposedRoute * currentRoute; 
@property (nonatomic,readonly) MNActiveRouteInfo * currentRouteInfo;                    //@synthesize currentRouteInfo=_currentRouteInfo - In the implementation block
@property (nonatomic,readonly) NSArray * alternateRoutes;                               //@synthesize alternateRoutes=_alternateRoutes - In the implementation block
@property (nonatomic,readonly) NSArray * allRoutes; 
@property (nonatomic,readonly) NSArray * contingencyRouteSegments;                      //@synthesize contingencyRouteSegments=_contingencyRouteSegments - In the implementation block
@property (nonatomic,readonly) NSArray * previewRoutes;                                 //@synthesize previewRoutes=_previewRoutes - In the implementation block
@property (assign,nonatomic) unsigned long long selectedRouteIndex;                     //@synthesize selectedRouteIndex=_selectedRouteIndex - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes;                    //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,readonly) GEODirectionsRequest * directionsRequest;                //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,readonly) GEODirectionsResponse * directionsResponse;              //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,readonly) NSString * requestingAppIdentifier;                      //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * originalDestination;               //@synthesize originalDestination=_originalDestination - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * originalRoute;                        //@synthesize originalRoute=_originalRoute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)open;
-(id)init;
-(void)setSelectedRouteIndex:(unsigned long long)arg1 ;
-(void)close;
-(GEODirectionsResponse *)directionsResponse;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(id)initWithAuditToken:(id)arg1 ;
-(GEODirectionsRequest *)directionsRequest;
-(GEOComposedWaypoint *)originalDestination;
-(unsigned long long)selectedRouteIndex;
-(GEOComposedRoute *)currentRoute;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(GEOComposedRoute *)originalRoute;
-(NSString *)requestingAppIdentifier;
-(void)updateForLocation:(id)arg1 ;
-(NSArray *)allRoutes;
-(NSArray *)alternateRoutes;
-(NSArray *)previewRoutes;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)dealloc;
-(MNActiveRouteInfo *)currentRouteInfo;
-(void)_clearPreloader;
-(void)updateWithAlternateRoutes:(id)arg1 ;
-(void)_updatePreloaderForRoute:(id)arg1 ;
-(void)updateWithInitialDirectionsRequest:(id)arg1 directionsResponse:(id)arg2 waypoints:(id)arg3 ;
-(void)updateWithPreviewRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)updateWithStartNavigationDetails:(id)arg1 ;
-(void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(void)clearCurrentRoute;
-(NSArray *)contingencyRouteSegments;
@end
