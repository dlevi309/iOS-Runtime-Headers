/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegate.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdaterDelegate.h>

@protocol MapsSuggestionsStrategy, OS_dispatch_queue, MapsSuggestionsLocationUpdater;
@class NSMutableDictionary, MapsSuggestionsTracker, NSDate, NSMutableSet, NSHashTable, NSArray, NSObject, MapsSuggestionsCanKicker, GEOAutomobileOptions, MapsSuggestionsFakePullSource, NSString;

@interface MapsSuggestionsManager : NSObject <MapsSuggestionsObject, MapsSuggestionsSourceDelegate, MapsSuggestionsLocationUpdaterDelegate> {

	id<MapsSuggestionsStrategy> _strategy;
	NSMutableDictionary* _additionalFiltersPerSink;
	unsigned long long _countToRequest;
	MapsSuggestionsTracker* _tracker;
	NSDate* _etaValidUntil;
	NSMutableSet* _sources;
	NSHashTable* _sinks;
	NSMutableDictionary* _storage;
	NSArray* _latestResults;
	NSObject*<OS_dispatch_queue> _gatheringQueue;
	NSObject*<OS_dispatch_queue> _storageQueue;
	BOOL _dirtyFlag;
	int _defaultTansportType;
	MapsSuggestionsCanKicker* _expiredEntryInvalidator;
	MapsSuggestionsCanKicker* _wipeStaleETAWiper;
	MapsSuggestionsCanKicker* _deferredSourcesUpdater;
	int _mapType;
	long long _style;
	GEOAutomobileOptions* _automobileOptions;
	id<MapsSuggestionsLocationUpdater> _locationUpdater;
	MapsSuggestionsFakePullSource* _fakeSource;

}

@property (nonatomic,retain) MapsSuggestionsFakePullSource * fakeSource;                             //@synthesize fakeSource=_fakeSource - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsStrategy> strategy;                                   //@synthesize strategy=_strategy - In the implementation block
@property (assign,nonatomic) int mapType;                                                            //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                               //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (assign,nonatomic) long long style;                                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsLocationUpdater> locationUpdater;              //@synthesize locationUpdater=_locationUpdater - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(void)dealloc;
-(id)storage;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)sources;
-(NSString *)uniqueName;
-(id<MapsSuggestionsStrategy>)strategy;
-(void)setStrategy:(id<MapsSuggestionsStrategy>)arg1 ;
-(void)setMapType:(int)arg1 ;
-(int)mapType;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)clearResults;
-(BOOL)_removeEntry:(id)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(void)_sendInvalidateToAllSinks;
-(void)_wipeStaleETAs;
-(void)_updateAllSourcesOnce;
-(void)_stopAllSources;
-(void)_updateCurrentLocation:(id)arg1 ;
-(void)scheduleUpdateAllSourcesOnce;
-(void)_updateSource:(id)arg1 repeat:(BOOL)arg2 ;
-(void)_updateSource:(id)arg1 forType:(long long)arg2 repeat:(BOOL)arg3 ;
-(void)_startSource:(id)arg1 ;
-(id)_pruneExpiredFromEntries:(id)arg1 ;
-(void)_pruneExpiredSourceEntries;
-(void)_scheduleInvalidateSinksOnFirstExpiredOfEntries:(id)arg1 ;
-(void)_startLocationUpdater;
-(void)_startAllSources;
-(void)_stopLocationUpdater;
-(void)_restartLocationUpdaterIfNeeded;
-(id)_filteredEntries:(id)arg1 forSink:(id)arg2 limit:(unsigned long long)arg3 ;
-(BOOL)_sink:(id)arg1 allowsEntry:(id)arg2 ;
-(BOOL)_loadStorageFromFile:(id)arg1 ;
-(BOOL)_updateResult;
-(unsigned long long)_deleteEntries:(id)arg1 source:(id)arg2 ;
-(unsigned long long)_addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2 ;
-(BOOL)_removeEntry:(id)arg1 sourceName:(id)arg2 ;
-(void)setTitleFormatter:(id)arg1 forType:(long long)arg2 ;
-(unsigned long long)deleteEntries:(id)arg1 source:(id)arg2 ;
-(void)hintRefreshOfType:(long long)arg1 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2 ;
-(BOOL)attachSource:(id)arg1 ;
-(BOOL)detachSource:(id)arg1 ;
-(id)initWithStrategy:(id)arg1 locationUpdater:(id)arg2 ETARequirements:(id)arg3 ;
-(void)attachSink:(id)arg1 ;
-(BOOL)detachSink:(id)arg1 ;
-(BOOL)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(void)addAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(BOOL)saveStorageToFile:(id)arg1 ;
-(BOOL)loadStorageFromFile:(id)arg1 ;
-(BOOL)loadStorageFromFile:(id)arg1 callback:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(unsigned long long)clearAllEntriesFromSource:(id)arg1 ;
-(void)trackerRefreshedETAsUntil:(id)arg1 ;
-(id)dumpStorage;
-(id)storageForSource:(id)arg1 ;
-(id)sinks;
-(void)awaitGatheringQueue;
-(void)awaitStorageQueue;
-(void)sendInvalidateToAllSinks;
-(id<MapsSuggestionsLocationUpdater>)locationUpdater;
-(void)setLocationUpdater:(id<MapsSuggestionsLocationUpdater>)arg1 ;
-(MapsSuggestionsFakePullSource *)fakeSource;
-(void)setFakeSource:(MapsSuggestionsFakePullSource *)arg1 ;
@end

