/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue;
@class MapsSuggestionsManager, MapsSuggestionsShortcutManager, MapsSuggestionsUser, NSObject, GEOAutomobileOptions, NSString;

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject> {

	MapsSuggestionsManager* _entryManager;
	MapsSuggestionsShortcutManager* _shortcutManager;
	MapsSuggestionsUser* _user;
	NSObject*<OS_dispatch_queue> _optionsSerialQueue;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;

}

@property (assign,nonatomic) int mapType;                                           //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)defaultCachePath;
-(id)user;
-(void)reset;
-(id)manager;
-(NSString *)uniqueName;
-(id)strategy;
-(void)setMapType:(int)arg1 ;
-(int)mapType;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(id)routine;
-(void)hintRefreshOfType:(long long)arg1 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(void)attachSink:(id)arg1 ;
-(BOOL)detachSink:(id)arg1 ;
-(BOOL)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(void)addAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(BOOL)saveStorageToFile:(id)arg1 ;
-(BOOL)loadStorageFromFile:(id)arg1 ;
-(BOOL)loadStorageFromFile:(id)arg1 callback:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(id)fakeSource;
-(void)setFakeSource:(id)arg1 ;
-(id)initWithEntryManager:(id)arg1 shortcutManager:(id)arg2 ;
-(id)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 ;
-(BOOL)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 callback:(/*^block*/id)arg5 onQueue:(id)arg6 ;
-(id)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 ;
-(id)shortcutManager;
-(void)startDemoMode;
@end

