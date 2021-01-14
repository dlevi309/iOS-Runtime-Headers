/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, MapsSuggestionsNetworkRequester, MapsSuggestionsPredictor;
@class NSString, NSObject, MapsSuggestionsETARequirements, CLLocation, GEOComposedWaypoint, NSMutableDictionary, NSLock, GEOAutomobileOptions;

@interface MapsSuggestionsETARequester : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	id<MapsSuggestionsPredictor> _transportModePredictor;
	MapsSuggestionsETARequirements* _etaRequirements;
	CLLocation* _currentLocationUsed;
	GEOComposedWaypoint* _currentLocationWaypoint;
	NSMutableDictionary* _waypoints;
	NSLock* _waypointsLock;
	int _forcedTransportMode;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;

}

@property (retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (assign) int mapType;                                           //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(NSString *)uniqueName;
-(int)mapType;
-(id)initWithNetworkRequester:(id)arg1 transportModePredictor:(id)arg2 requirements:(id)arg3 ;
-(BOOL)ETAsFromLocation:(id)arg1 toEntries:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMapType:(int)arg1 ;
-(BOOL)transportTypeFromLocation:(id)arg1 toEntry:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)forceTransportType:(int)arg1 ;
-(id)networkRequester;
@end

