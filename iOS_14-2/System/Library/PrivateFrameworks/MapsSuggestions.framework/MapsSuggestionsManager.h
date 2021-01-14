/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegate.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdaterDelegate.h>

@protocol OS_dispatch_queue, MapsSuggestionsStrategy, MapsSuggestionsLocationUpdater;
@class NSObject, NSMutableDictionary, MapsSuggestionsTracker, NSDate, MapsSuggestionsObservers, NSMutableSet, NSArray, MapsSuggestionsCanKicker, CLLocation, GEOAutomobileOptions, NSString;

@interface MapsSuggestionsManager : NSObject <MapsSuggestionsObject, MapsSuggestionsSourceDelegate, MapsSuggestionsLocationUpdaterDelegate> {

	NSObject*<OS_dispatch_queue> _gatheringQueue;
	NSObject*<OS_dispatch_queue> _storageQueue;
	id<MapsSuggestionsStrategy> _strategy;
	NSMutableDictionary* _additionalFiltersPerSink;
	MapsSuggestionsTracker* _tracker;
	NSDate* _etaValidUntil;
	MapsSuggestionsObservers* _sinks;
	NSMutableSet* _sources;
	NSMutableDictionary* _storage;
	NSArray* _latestResults;
	int _defaultTansportType;
	MapsSuggestionsCanKicker* _expiredEntryInvalidator;
	MapsSuggestionsCanKicker* _wipeStaleETAWiper;
	MapsSuggestionsCanKicker* _deferredSourcesUpdater;
	CLLocation* _oldLocation;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;
	id<MapsSuggestionsLocationUpdater> _locationUpdater;

}

@property (nonatomic,retain) id<MapsSuggestionsStrategy> strategy;                                   //@synthesize strategy=_strategy - In the implementation block
@property (assign,nonatomic) int mapType;                                                            //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                               //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsLocationUpdater> locationUpdater;              //@synthesize locationUpdater=_locationUpdater - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MapsSuggestionsLocationUpdater>)locationUpdater;
-(void)setStrategy:(id<MapsSuggestionsStrategy>)arg1 ;
-(void)detachSource:(id)arg1 ;
-(void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(char)oneShotTopSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(id<MapsSuggestionsStrategy>)strategy;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(void)detachSink:(id)arg1 ;
-(void)addAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(char)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(char)loadStorageFromFile:(id)arg1 callback:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(GEOAutomobileOptions *)automobileOptions;
-(char)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(char)saveStorageToFile:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setLocationUpdater:(id<MapsSuggestionsLocationUpdater>)arg1 ;
-(NSString *)uniqueName;
-(void)hintRefreshOfType:(long long)arg1 ;
-(void)attachSink:(id)arg1 ;
-(int)mapType;
-(unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2 ;
-(id)storage;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(id)initWithStrategy:(id)arg1 locationUpdater:(id)arg2 network:(id)arg3 flightUpdater:(id)arg4 ETARequirements:(id)arg5 virtualGarage:(id)arg6 ;
-(void)setMapType:(int)arg1 ;
-(id)sources;
-(void)didUpdateLocation:(id)arg1 ;
-(id)sinks;
-(char)topSuggestionsForSink:(id)arg1 transportType:(int)arg2 count:(unsigned long long)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(char)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)didLoseLocationPermission;
-(BOOL)loadStorageFromFile:(id)arg1 ;
-(char)oneShotTopSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)trackerRefreshedETAsUntil:(id)arg1 ;
-(void)awaitStorageQueue;
-(void)awaitGatheringQueue;
-(id)storageForSource:(id)arg1 ;
-(void)attachSource:(id)arg1 ;
-(char)oneShotTopSuggestionsForSink:(id)arg1 transportType:(int)arg2 count:(unsigned long long)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)dealloc;
@end

