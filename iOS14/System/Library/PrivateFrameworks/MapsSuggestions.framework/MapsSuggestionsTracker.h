/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, MapsSuggestionsTimer, MapsSuggestionsNetworkRequester;
@class NSObject, MapsSuggestionsETARequirements, MapsSuggestionsManager, NSMutableDictionary, MapsSuggestionsETARequester, MapsSuggestionsDonater, MapsSuggestionsCanKicker, MapsSuggestionsVirtualGarage, MapsSuggestionsFlightUpdater, GEOAutomobileOptions, CLLocation, MapsSuggestionsMutableWeakEntries, MapsSuggestionsPredictor, NSString;

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	MapsSuggestionsETARequirements* _requirements;
	id<MapsSuggestionsTimer> _refreshTimer;
	double _refreshInterval;
	double _refreshLeeway;
	double _refreshDeferTime;
	int _transportType;
	MapsSuggestionsManager* _manager;
	NSMutableDictionary* _etaTitleFormatters;
	NSMutableDictionary* _distanceTitleFormatters;
	NSMutableDictionary* _etaChargeTitleFormatters;
	BOOL _shouldBeRunning;
	MapsSuggestionsETARequester* _etaRequester;
	MapsSuggestionsDonater* _donater;
	MapsSuggestionsCanKicker* _currentLocationWiper;
	NSMutableDictionary* _previousETAs;
	id _transportTypeChangedListener;
	MapsSuggestionsVirtualGarage* _virtualGarage;
	MapsSuggestionsFlightUpdater* _flightUpdater;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;
	CLLocation* _currentLocation;
	MapsSuggestionsMutableWeakEntries* _trackedEntries;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	MapsSuggestionsPredictor* _predictor;

}

@property (retain) CLLocation * currentLocation;                                                //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) MapsSuggestionsMutableWeakEntries * trackedEntries;                //@synthesize trackedEntries=_trackedEntries - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsNetworkRequester> networkRequester;              //@synthesize networkRequester=_networkRequester - In the implementation block
@property (nonatomic,retain) MapsSuggestionsPredictor * predictor;                              //@synthesize predictor=_predictor - In the implementation block
@property (assign,nonatomic) int mapType;                                                       //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                          //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocation *)currentLocation;
-(MapsSuggestionsPredictor *)predictor;
-(void)setPredictor:(MapsSuggestionsPredictor *)arg1 ;
-(void)setNetworkRequester:(id<MapsSuggestionsNetworkRequester>)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setTrackedEntries:(MapsSuggestionsMutableWeakEntries *)arg1 ;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(NSString *)uniqueName;
-(int)mapType;
-(void)trackSuggestionEntries:(id)arg1 transportType:(int)arg2 ;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)setMapType:(int)arg1 ;
-(void)resetAllTitleFormatting;
-(void)setLocation:(id)arg1 ;
-(id)initWithManager:(id)arg1 requirements:(id)arg2 network:(id)arg3 flightUpdater:(id)arg4 virtualGarage:(id)arg5 ;
-(void)setTitleFormatter:(id)arg1 forType:(long long)arg2 ;
-(void)scheduleRefresh;
-(MapsSuggestionsMutableWeakEntries *)trackedEntries;
-(void)clearLocationAndETAs;
-(void)unschedule;
-(id<MapsSuggestionsNetworkRequester>)networkRequester;
-(void)dealloc;
@end

