/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>
#import <MapsSuggestions/MapsSuggestionsResourceDepot.h>

@protocol MapsSuggestionsResourceDepot, OS_dispatch_queue;
@class MapsSuggestionsManager, NSObject, GEOAutomobileOptions, NSString;

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject, MapsSuggestionsResourceDepot> {

	id<MapsSuggestionsResourceDepot> _resourceDepot;
	MapsSuggestionsManager* _entryManager;
	NSObject*<OS_dispatch_queue> _optionsSerialQueue;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;

}

@property (assign,nonatomic) int mapType;                                           //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(id)oneSourceDelegate;
-(BOOL)oneShotTopSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(id)strategy;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(void)detachSink:(id)arg1 ;
-(void)addAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(BOOL)loadStorageFromFile:(id)arg1 callback:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(GEOAutomobileOptions *)automobileOptions;
-(BOOL)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(BOOL)saveStorageToFile:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithEntryManager:(id)arg1 resourceDepot:(id)arg2 ;
-(NSString *)uniqueName;
-(void)hintRefreshOfType:(long long)arg1 ;
-(void)attachSink:(id)arg1 ;
-(int)mapType;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(id)oneEventKit;
-(void)setMapType:(int)arg1 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)loadStorageFromFile:(id)arg1 ;
-(id)oneUser;
-(id)oneContacts;
-(id)oneVirtualGarage;
-(id)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 ;
-(id)manager;
-(id)oneNetworkRequester;
-(id)onePortrait;
-(id)oneRoutine;
-(BOOL)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 callback:(/*^block*/id)arg5 onQueue:(id)arg6 ;
-(id)oneInsights;
-(id)oneMapsSync;
-(id)oneFlightUpdater;
-(id)oneFavorites;
-(id)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 ;
@end

