/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class NSMutableDictionary, NSArray;

@interface ICSectionedSearchResults : NSObject {

	BOOL _disableAutomaticUpdates;
	NSMutableDictionary* _searchResultsBySection;

}

@property (nonatomic,retain) NSMutableDictionary * searchResultsBySection;              //@synthesize searchResultsBySection=_searchResultsBySection - In the implementation block
@property (nonatomic,readonly) NSArray * allSearchResults; 
@property (assign,nonatomic) BOOL disableAutomaticUpdates;                              //@synthesize disableAutomaticUpdates=_disableAutomaticUpdates - In the implementation block
+(id)newSearchResultsBySection;
-(void)clear;
-(id)init;
-(id)description;
-(BOOL)hasSearchResults;
-(void)dealloc;
-(id)indexPathOfObject:(id)arg1 ;
-(void)setSearchResultsBySection:(NSMutableDictionary *)arg1 ;
-(void)objectsDidChange:(id)arg1 ;
-(void)noteWillBeUndeletedOrUntrashed:(id)arg1 ;
-(void)noteWillBeDeletedOrTrashed:(id)arg1 ;
-(NSMutableDictionary *)searchResultsBySection;
-(BOOL)disableAutomaticUpdates;
-(unsigned long long)removeSearchResultsWithIdentifiers:(id)arg1 forHiding:(BOOL)arg2 ;
-(id)searchResultSectionForSectionIndex:(unsigned long long)arg1 ;
-(void)addSearchResults:(id)arg1 toSection:(unsigned long long)arg2 ;
-(BOOL)removeSearchResultWithIdentifier:(id)arg1 forHiding:(BOOL)arg2 ;
-(id)searchResultsInSection:(unsigned long long)arg1 ;
-(NSArray *)allSearchResults;
-(void)setSearchResults:(id)arg1 forSection:(unsigned long long)arg2 ;
-(id)searchResultAtRow:(long long)arg1 section:(unsigned long long)arg2 ;
-(BOOL)removeSearchResultWithIdentifier:(id)arg1 fromSection:(unsigned long long)arg2 forHiding:(BOOL)arg3 ;
-(BOOL)passesVisibilityTesting:(id)arg1 forSearchResult:(id)arg2 ;
-(unsigned long long)sectionForSearchResult:(id)arg1 ;
-(id)searchResultsBySectionForSearchResults:(id)arg1 passingVisibilityTesting:(id)arg2 ;
-(unsigned long long)addSearchResultsBySection:(id)arg1 ;
-(BOOL)hideSearchResultsForIdentifier:(id)arg1 ;
-(id)searchResultWithObject:(id)arg1 ;
-(id)indexPathOfSearchResult:(id)arg1 ;
-(void)addSearchResult:(id)arg1 toSection:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)countForSection:(unsigned long long)arg1 ;
-(id)searchResultObjectsInSection:(unsigned long long)arg1 ;
-(id)removeSearchResultAtRow:(long long)arg1 section:(unsigned long long)arg2 ;
-(unsigned long long)addSearchResults:(id)arg1 removingFoundIdentifiers:(id)arg2 passingVisibilityTesting:(id)arg3 ;
-(void)filterSearchResultsUsingVisiblityTesting:(id)arg1 ;
-(BOOL)hideSearchResultsForObjects:(id)arg1 ;
-(BOOL)replaceSearchResultObject:(id)arg1 withObject:(id)arg2 ;
-(void)updateForSortTypeChange;
-(void)setDisableAutomaticUpdates:(BOOL)arg1 ;
@end

