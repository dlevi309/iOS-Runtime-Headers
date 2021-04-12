/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

@class MapsSuggestionsManager;


@protocol MapsSuggestionsStrategy <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager; 
@required
-(MapsSuggestionsManager *)manager;
-(void)setManager:(id)arg1;
-(void)clearData;
-(id)topSuggestionsWithSourceEntries:(id)arg1 error:(id*)arg2;
-(BOOL)preFiltersKept:(id)arg1;
-(BOOL)postFiltersKept:(id)arg1;
-(void)addPreFilter:(id)arg1;
-(void)addPostFilter:(id)arg1;
-(void)removeFilter:(id)arg1;
-(void)removeAllFilters;
-(void)addImprover:(id)arg1;
-(void)removeAllImprovers;
-(void)addDeduper:(id)arg1;
-(void)removeAllDedupers;

@end

