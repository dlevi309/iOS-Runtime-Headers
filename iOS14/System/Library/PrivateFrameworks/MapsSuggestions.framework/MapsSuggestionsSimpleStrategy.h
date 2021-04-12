/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)uniqueName;
-(void)removeAllImprovers;
-(void)setManager:(MapsSuggestionsManager *)arg1 ;
-(void)removeAllFilters;
-(id)topSuggestionsWithSourceEntries:(id)arg1 error:(id*)arg2 ;
-(BOOL)preFiltersKept:(id)arg1 ;
-(void)addDeduper:(id)arg1 ;
-(void)addPostFilter:(id)arg1 ;
-(void)clearData;
-(void)removeAllDedupers;
-(MapsSuggestionsManager *)manager;
-(BOOL)postFiltersKept:(id)arg1 ;
-(void)removeFilter:(id)arg1 ;
-(void)addPreFilter:(id)arg1 ;
-(void)addImprover:(id)arg1 ;
@end

