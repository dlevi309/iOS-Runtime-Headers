/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, MapsSuggestionsFlightRequester;
@class NSObject, MapsSuggestionsManager, GEOLocationShifter, NSMutableDictionary, MapsSuggestionsETARequester, MapsSuggestionsDonater, MapsSuggestionsCanKicker, MapsSuggestionsFlightUpdater, MapsSuggestionsETARequirements, GEOAutomobileOptions, CLLocation, MapsSuggestionsMutableWeakEntries, MapsSuggestionsNetworkRequester, MapsSuggestionsPredictor, NSString;

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _refreshTimer;
	double _refreshInterval;
	double _refreshDeferTime;
	int _transportType;
	MapsSuggestionsManager* _manager;
	GEOLocationShifter* _locationShifter;
	NSMutableDictionary* _etaTitleFormatters;
	NSMutableDictionary* _distanceTitleFormatters;
	BOOL _shouldBeRunning;
	MapsSuggestionsETARequester* _etaRequester;
	MapsSuggestionsDonater* _donater;
	MapsSuggestionsCanKicker* _currentLocationWiper;
	NSMutableDictionary* _previousETAs;
	id _transportTypeChangedListener;
	id<MapsSuggestionsFlightRequester> _flightRequester;
	MapsSuggestionsFlightUpdater* _flightUpdater;
	int _mapType;
	MapsSuggestionsETARequirements* _requirements;
	GEOAutomobileOptions* _automobileOptions;
	CLLocation* _currentLocation;
	MapsSuggestionsMutableWeakEntries* _trackedEntries;
	MapsSuggestionsNetworkRequester* _networkRequester;
	MapsSuggestionsPredictor* _predictor;

}

@property (retain) CLLocation * currentLocation;                                              //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) MapsSuggestionsMutableWeakEntries * trackedEntries;              //@synthesize trackedEntries=_trackedEntries - In the implementation block
@property (nonatomic,retain) MapsSuggestionsNetworkRequester * networkRequester;              //@synthesize networkRequester=_networkRequester - In the implementation block
@property (nonatomic,retain) MapsSuggestionsPredictor * predictor;                            //@synthesize predictor=_predictor - In the implementation block
@property (copy) MapsSuggestionsETARequirements * requirements;                               //@synthesize requirements=_requirements - In the implementation block
@property (assign,nonatomic) int mapType;                                                     //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                        //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(BOOL)_isLocationShiftRequiredForLocation:(id)arg1 ;
-(void)dealloc;
-(id)location;
-(MapsSuggestionsETARequirements *)requirements;
-(void)setRequirements:(MapsSuggestionsETARequirements *)arg1 ;
-(void)setLocation:(id)arg1 ;
-(void)unschedule;
-(NSString *)uniqueName;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)setMapType:(int)arg1 ;
-(int)mapType;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 withShiftRequestBlock:(/*^block*/id)arg3 ;
-(void)_refresh;
-(void)setNetworkRequester:(MapsSuggestionsNetworkRequester *)arg1 ;
-(id)initWithManager:(id)arg1 requirements:(id)arg2 ;
-(void)trackSuggestionEntries:(id)arg1 transportType:(int)arg2 ;
-(void)scheduleRefresh;
-(void)resetAllTitleFormatting;
-(void)setTitleFormatter:(id)arg1 forType:(long long)arg2 ;
-(void)_scheduleRefresh;
-(void)_unschedule;
-(void)setTrackedEntries:(MapsSuggestionsMutableWeakEntries *)arg1 ;
-(BOOL)_isMatchingTransportType:(int)arg1 ;
-(BOOL)_isUnusableETA:(id)arg1 ;
-(void)_captureSignalsFromEntries:(id)arg1 ;
-(BOOL)_hasTitleFormatterForType:(long long)arg1 ;
-(void)_prunePreviousETAs;
-(id)_etaTitleFormatterForType:(long long)arg1 ;
-(id)_bestValidOfflineETAForEntry:(id)arg1 destinationKey:(id)arg2 ;
-(void)_rememberETA:(id)arg1 forEntry:(id)arg2 ;
-(void)_decorateETA:(id)arg1 forEntry:(id)arg2 ;
-(MapsSuggestionsMutableWeakEntries *)trackedEntries;
-(id)_distanceTitleFormatterForType:(long long)arg1 ;
-(void)_decorateFlightInfoForEntry:(id)arg1 ;
-(void)_scheduleRefreshIfCurrentLocationIsMuchBetterThanLocation:(id)arg1 ;
-(void)_shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(void)_requestDistances;
-(void)_requestETAs;
-(void)_requestFlightInfo;
-(void)_resetAllTitleFormatting;
-(MapsSuggestionsNetworkRequester *)networkRequester;
-(MapsSuggestionsPredictor *)predictor;
-(void)setPredictor:(MapsSuggestionsPredictor *)arg1 ;
@end

