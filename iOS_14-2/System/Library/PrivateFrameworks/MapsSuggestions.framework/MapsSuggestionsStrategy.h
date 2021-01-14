/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

@class MapsSuggestionsManager;


@protocol MapsSuggestionsStrategy <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager; 
@required
-(void)removeAllImprovers;
-(void)setManager:(id)arg1;
-(void)removeAllFilters;
-(id)topSuggestionsWithSourceEntries:(id)arg1 error:(id*)arg2;
-(BOOL)preFiltersKept:(id)arg1;
-(void)addDeduper:(id)arg1;
-(void)addPostFilter:(id)arg1;
-(void)clearData;
-(void)removeAllDedupers;
-(MapsSuggestionsManager *)manager;
-(BOOL)postFiltersKept:(id)arg1;
-(void)removeFilter:(id)arg1;
-(void)addPreFilter:(id)arg1;
-(void)addImprover:(id)arg1;

@end

