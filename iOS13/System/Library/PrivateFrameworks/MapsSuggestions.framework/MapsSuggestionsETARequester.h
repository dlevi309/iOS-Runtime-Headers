/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, MapsSuggestionsPredictor;
@class NSString, NSObject, CLLocation, GEOComposedWaypoint, NSMutableDictionary, NSLock, MapsSuggestionsETARequirements, MNTimeballService, MNRouteUpdateFreshness, MapsSuggestionsNetworkRequester, GEOAutomobileOptions;

@interface MapsSuggestionsETARequester : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	CLLocation* _currentLocationUsed;
	GEOComposedWaypoint* _currentLocationWaypoint;
	NSMutableDictionary* _waypoints;
	NSLock* _waypointsLock;
	id<MapsSuggestionsPredictor> _transportModePredictor;
	int _forcedTransportMode;
	MapsSuggestionsETARequirements* _etaRequirements;
	MNTimeballService* _timeballService;
	MNRouteUpdateFreshness* _updateFreshness;
	int _mapType;
	MapsSuggestionsNetworkRequester* _requester;
	GEOAutomobileOptions* _automobileOptions;

}

@property (__weak) MapsSuggestionsNetworkRequester * requester;              //@synthesize requester=_requester - In the implementation block
@property (retain) GEOAutomobileOptions * automobileOptions;                 //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (assign) int mapType;                                              //@synthesize mapType=_mapType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(NSString *)uniqueName;
-(void)setMapType:(int)arg1 ;
-(int)mapType;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(MapsSuggestionsNetworkRequester *)requester;
-(void)setRequester:(MapsSuggestionsNetworkRequester *)arg1 ;
-(BOOL)_requestWaypointForCurrentLocation:(id)arg1 ;
-(BOOL)_keepExistingWaypointsForEntries:(id)arg1 ;
-(BOOL)_requestWaypointsForEntries:(id)arg1 ;
-(BOOL)_requestETAsToEntries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_old_requestETAsToEntries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_timeball_requestETAsToEntries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_determineTransportTypeFromOrigin:(id)arg1 toEntry:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_transportTypesForDestinationEntries:(id)arg1 ;
-(id)initWithNetworkRequester:(id)arg1 transportModePredictor:(id)arg2 requirements:(id)arg3 ;
-(BOOL)ETAsFromLocation:(id)arg1 toEntries:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)forceTransportType:(int)arg1 ;
@end

