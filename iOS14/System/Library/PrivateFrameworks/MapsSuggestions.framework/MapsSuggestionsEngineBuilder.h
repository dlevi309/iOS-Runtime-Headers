/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsStrategy, MapsSuggestionsLocationUpdater, MapsSuggestionsFullResourceDepot;
@class NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;

@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject> {

	BOOL _hasTracker;
	id<MapsSuggestionsStrategy> _strategy;
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
	id<MapsSuggestionsFullResourceDepot> _resourceDepot;

}

@property (nonatomic,retain) id<MapsSuggestionsStrategy> strategy;                            //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsLocationUpdater> locationUpdater;              //@synthesize locationUpdater=_locationUpdater - In the implementation block
@property (assign,nonatomic) BOOL hasTracker;                                                 //@synthesize hasTracker=_hasTracker - In the implementation block
@property (nonatomic,retain) NSMutableArray * sourceClasses;                                  //@synthesize sourceClasses=_sourceClasses - In the implementation block
@property (nonatomic,retain) NSMutableSet * includePreFilters;                                //@synthesize includePreFilters=_includePreFilters - In the implementation block
@property (nonatomic,retain) NSMutableSet * includePostFilters;                               //@synthesize includePostFilters=_includePostFilters - In the implementation block
@property (nonatomic,retain) NSMutableArray * includeImprovers;                               //@synthesize includeImprovers=_includeImprovers - In the implementation block
@property (nonatomic,retain) NSMutableArray * includeDedupers;                                //@synthesize includeDedupers=_includeDedupers - In the implementation block
@property (nonatomic,retain) NSMutableSet * excludePreFilters;                                //@synthesize excludePreFilters=_excludePreFilters - In the implementation block
@property (nonatomic,retain) NSMutableSet * excludePostFilters;                               //@synthesize excludePostFilters=_excludePostFilters - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludeImprovers;                               //@synthesize excludeImprovers=_excludeImprovers - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludeDedupers;                                //@synthesize excludeDedupers=_excludeDedupers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * titleFormatters;                           //@synthesize titleFormatters=_titleFormatters - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsFullResourceDepot> resourceDepot;              //@synthesize resourceDepot=_resourceDepot - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)forDevice;
+(id)simpleStrategy;
-(id<MapsSuggestionsLocationUpdater>)locationUpdater;
-(void)setStrategy:(id<MapsSuggestionsStrategy>)arg1 ;
-(id<MapsSuggestionsStrategy>)strategy;
-(id)withResourceDepot:(id)arg1 ;
-(id)build;
-(id)init;
-(void)setLocationUpdater:(id<MapsSuggestionsLocationUpdater>)arg1 ;
-(NSString *)uniqueName;
-(NSMutableSet *)excludePostFilters;
-(void)setExcludeDedupers:(NSMutableArray *)arg1 ;
-(id<MapsSuggestionsFullResourceDepot>)resourceDepot;
-(NSMutableArray *)includeDedupers;
-(id)withSourceClasses:(id)arg1 ;
-(id)withTitleFormatter:(id)arg1 forType:(long long)arg2 ;
-(NSMutableSet *)includePreFilters;
-(id)withoutTracker;
-(NSMutableArray *)includeImprovers;
-(NSMutableSet *)includePostFilters;
-(void)setExcludeImprovers:(NSMutableArray *)arg1 ;
-(NSMutableSet *)excludePreFilters;
-(void)setTitleFormatters:(NSMutableDictionary *)arg1 ;
-(id)withImprovers:(id)arg1 ;
-(void)setSourceClasses:(NSMutableArray *)arg1 ;
-(void)setResourceDepot:(id<MapsSuggestionsFullResourceDepot>)arg1 ;
-(void)setExcludePreFilters:(NSMutableSet *)arg1 ;
-(NSMutableArray *)excludeDedupers;
-(void)setIncludePostFilters:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)titleFormatters;
-(id)withLocationUpdater:(id)arg1 ;
-(id)withFavorites;
-(void)setHasTracker:(BOOL)arg1 ;
-(id)withDedupers:(id)arg1 ;
-(id)withPostFilters:(id)arg1 ;
-(void)setIncludeDedupers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sourceClasses;
-(void)setIncludeImprovers:(NSMutableArray *)arg1 ;
-(BOOL)hasTracker;
-(void)setExcludePostFilters:(NSMutableSet *)arg1 ;
-(NSMutableArray *)excludeImprovers;
-(void)setIncludePreFilters:(NSMutableSet *)arg1 ;
-(id)withPreFilters:(id)arg1 ;
@end

