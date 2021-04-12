/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsStrategy, MapsSuggestionsLocationUpdater, MapsSuggestionsNetworkRequester, MapsSuggestionsRoutineRequester, MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor;
@class NSMutableArray, NSMutableSet, NSMutableDictionary, MapsSuggestionsRoutine, MapsSuggestionsContacts, NSString;

@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject> {

	BOOL _hasTracker;
	id<MapsSuggestionsStrategy> _strategy;
	long long _managerStyle;
	id<MapsSuggestionsLocationUpdater> _locationUpdater;
	NSMutableArray* _sourceClasses;
	NSMutableSet* _includePreFilters;
	NSMutableSet* _includePostFilters;
	NSMutableArray* _includeImprovers;
	NSMutableArray* _includeDedupers;
	NSMutableSet* _excludePreFilters;
	NSMutableSet* _excludePostFilters;
	NSMutableArray* _excludeImprovers;
	NSMutableArray* _excludeDedupers;
	NSMutableDictionary* _titleFormatters;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	id<MapsSuggestionsRoutineRequester> _routineRequester;
	MapsSuggestionsRoutine* _routine;
	MapsSuggestionsContacts* _contacts;
	id<MapsSuggestionsShortcutStorage> _shortcutStorage;
	id<MapsSuggestionsShortcutSuggestor> _shortcutSuggestor;

}

@property (nonatomic,retain) id<MapsSuggestionsStrategy> strategy;                                //@synthesize strategy=_strategy - In the implementation block
@property (assign,nonatomic) long long managerStyle;                                              //@synthesize managerStyle=_managerStyle - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsLocationUpdater> locationUpdater;                  //@synthesize locationUpdater=_locationUpdater - In the implementation block
@property (assign,nonatomic) BOOL hasTracker;                                                     //@synthesize hasTracker=_hasTracker - In the implementation block
@property (nonatomic,retain) NSMutableArray * sourceClasses;                                      //@synthesize sourceClasses=_sourceClasses - In the implementation block
@property (nonatomic,retain) NSMutableSet * includePreFilters;                                    //@synthesize includePreFilters=_includePreFilters - In the implementation block
@property (nonatomic,retain) NSMutableSet * includePostFilters;                                   //@synthesize includePostFilters=_includePostFilters - In the implementation block
@property (nonatomic,retain) NSMutableArray * includeImprovers;                                   //@synthesize includeImprovers=_includeImprovers - In the implementation block
@property (nonatomic,retain) NSMutableArray * includeDedupers;                                    //@synthesize includeDedupers=_includeDedupers - In the implementation block
@property (nonatomic,retain) NSMutableSet * excludePreFilters;                                    //@synthesize excludePreFilters=_excludePreFilters - In the implementation block
@property (nonatomic,retain) NSMutableSet * excludePostFilters;                                   //@synthesize excludePostFilters=_excludePostFilters - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludeImprovers;                                   //@synthesize excludeImprovers=_excludeImprovers - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludeDedupers;                                    //@synthesize excludeDedupers=_excludeDedupers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * titleFormatters;                               //@synthesize titleFormatters=_titleFormatters - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsNetworkRequester> networkRequester;                //@synthesize networkRequester=_networkRequester - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsRoutineRequester> routineRequester;                //@synthesize routineRequester=_routineRequester - In the implementation block
@property (nonatomic,retain) MapsSuggestionsRoutine * routine;                                    //@synthesize routine=_routine - In the implementation block
@property (nonatomic,retain) MapsSuggestionsContacts * contacts;                                  //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsShortcutStorage> shortcutStorage;                  //@synthesize shortcutStorage=_shortcutStorage - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsShortcutSuggestor> shortcutSuggestor;              //@synthesize shortcutSuggestor=_shortcutSuggestor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)forDevice;
+(id)forTests;
+(id)currentEngine;
+(id)_forPhone;
+(id)forEveryone;
+(id)simpleStrategy;
+(id)forSimulator;
-(id)init;
-(MapsSuggestionsContacts *)contacts;
-(id)build;
-(NSString *)uniqueName;
-(id<MapsSuggestionsStrategy>)strategy;
-(void)setStrategy:(id<MapsSuggestionsStrategy>)arg1 ;
-(void)setContacts:(MapsSuggestionsContacts *)arg1 ;
-(MapsSuggestionsRoutine *)routine;
-(void)setRoutine:(MapsSuggestionsRoutine *)arg1 ;
-(void)setNetworkRequester:(id<MapsSuggestionsNetworkRequester>)arg1 ;
-(id<MapsSuggestionsLocationUpdater>)locationUpdater;
-(void)setLocationUpdater:(id<MapsSuggestionsLocationUpdater>)arg1 ;
-(id<MapsSuggestionsNetworkRequester>)networkRequester;
-(id<MapsSuggestionsRoutineRequester>)routineRequester;
-(void)setRoutineRequester:(id<MapsSuggestionsRoutineRequester>)arg1 ;
-(void)setShortcutStorage:(id<MapsSuggestionsShortcutStorage>)arg1 ;
-(void)setShortcutSuggestor:(id<MapsSuggestionsShortcutSuggestor>)arg1 ;
-(void)setSourceClasses:(NSMutableArray *)arg1 ;
-(void)setHasTracker:(BOOL)arg1 ;
-(NSMutableArray *)sourceClasses;
-(NSMutableSet *)includePreFilters;
-(void)setIncludePreFilters:(NSMutableSet *)arg1 ;
-(NSMutableSet *)excludePreFilters;
-(NSMutableSet *)includePostFilters;
-(void)setIncludePostFilters:(NSMutableSet *)arg1 ;
-(NSMutableSet *)excludePostFilters;
-(NSMutableArray *)includeImprovers;
-(void)setIncludeImprovers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludeImprovers;
-(void)setExcludeImprovers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)includeDedupers;
-(void)setIncludeDedupers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludeDedupers;
-(void)setExcludeDedupers:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)titleFormatters;
-(id)buildWithoutStoring;
-(BOOL)hasTracker;
-(long long)managerStyle;
-(id<MapsSuggestionsShortcutStorage>)shortcutStorage;
-(id<MapsSuggestionsShortcutSuggestor>)shortcutSuggestor;
-(void)setManagerStyle:(long long)arg1 ;
-(void)setTitleFormatters:(NSMutableDictionary *)arg1 ;
-(id)withLocationUpdater:(id)arg1 ;
-(id)withoutTracker;
-(id)withFavorites;
-(id)withPreFilters:(id)arg1 ;
-(id)withPostFilters:(id)arg1 ;
-(id)withImprovers:(id)arg1 ;
-(id)withoutImprovers:(id)arg1 ;
-(id)withDedupers:(id)arg1 ;
-(id)withoutDedupers:(id)arg1 ;
-(id)withSourceClasses:(id)arg1 ;
-(id)withTitleFormatter:(id)arg1 forType:(long long)arg2 ;
-(id)withManagerStyle:(long long)arg1 ;
-(void)setExcludePreFilters:(NSMutableSet *)arg1 ;
-(void)setExcludePostFilters:(NSMutableSet *)arg1 ;
@end

