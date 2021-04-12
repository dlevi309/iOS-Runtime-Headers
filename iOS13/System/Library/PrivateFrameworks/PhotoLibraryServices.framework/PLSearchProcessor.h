/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PSIDatabase;

@interface PLSearchProcessor : NSObject {

	PSIDatabase* _searchIndex;

}

@property (nonatomic,readonly) PSIDatabase * searchIndex;              //@synthesize searchIndex=_searchIndex - In the implementation block
+(id)searchProcessorLog;
+(id)_scoreByCategoryMask;
-(id)initWithDatabase:(id)arg1 ;
-(PSIDatabase *)searchIndex;
-(void)performQuery:(id)arg1 withResultsHandler:(/*^block*/id)arg2 ;
-(id)searchResultSectionsForQuery:(id)arg1 withAssetResults:(id)arg2 collectionResults:(id)arg3 combineAssetSections:(BOOL)arg4 ;
-(id)updatedSearchSections:(id)arg1 withTopCollectionResults:(id)arg2 ;
-(id)completionSuggestionsForQuery:(id)arg1 withSearchSections:(id)arg2 numberOfSuggestions:(unsigned long long)arg3 ;
-(id)_alphabeticalSortDescriptors;
-(id)_dateSortDescriptors;
-(id)_numberOfAssetsSortDescriptors;
-(id)_sortDescriptorsForCategoryMask:(unsigned long long)arg1 ;
-(id)_searchResultsByCategoryMasksForSearchResults:(id)arg1 ;
-(id)_combinedFilenameSearchResultsFromSearchResults:(id)arg1 inQuery:(id)arg2 ;
-(id)_completionFilenameResultsForFilenameResults:(id)arg1 ;
-(void)_extractSearchResultsFromGroupResults:(id)arg1 withQuery:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(BOOL)_categoryMaskIsCombinable:(unsigned long long)arg1 ;
-(BOOL)_shouldOmitSectionForCategoryMask:(unsigned long long)arg1 ;
@end

