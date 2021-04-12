/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsStrategy.h>

@class MapsSuggestionsManager, NSMutableSet, NSMutableArray, NSString;

@interface MapsSuggestionsSimpleStrategy : NSObject <MapsSuggestionsStrategy> {

	NSMutableSet* _preFilters;
	NSMutableArray* _improvers;
	NSMutableArray* _dedupers;
	NSMutableSet* _postFilters;
	NSMutableArray* _previousResults;
	MapsSuggestionsManager* _manager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)init;
-(MapsSuggestionsManager *)manager;
-(void)setManager:(MapsSuggestionsManager *)arg1 ;
-(NSString *)uniqueName;
-(void)clearData;
-(id)topSuggestionsWithSourceEntries:(id)arg1 error:(id*)arg2 ;
-(BOOL)preFiltersKept:(id)arg1 ;
-(BOOL)_dedupeByEnrichingEntries:(id)arg1 withEntry:(id)arg2 ;
-(BOOL)postFiltersKept:(id)arg1 ;
-(BOOL)_entry:(id)arg1 existsInStorage:(id)arg2 ;
-(id)_filteredPreviousResultsCrosscheckingStorage:(id)arg1 ;
-(BOOL)_improveEntry:(id)arg1 ;
-(id)_filtersForprocessingType:(long long)arg1 ;
-(void)_addFilter:(id)arg1 processingType:(long long)arg2 ;
-(void)addPreFilter:(id)arg1 ;
-(void)addPostFilter:(id)arg1 ;
-(void)removeFilter:(id)arg1 ;
-(void)removeAllFilters;
-(void)addImprover:(id)arg1 ;
-(void)removeAllImprovers;
-(void)addDeduper:(id)arg1 ;
-(void)removeAllDedupers;
@end

