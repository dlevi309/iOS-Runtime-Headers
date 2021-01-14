/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXSearchResultsLayoutDataSource;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXSearchResultsSectionedDataSourceManager, NSArray, PXSearchTopAssetsResult;

@interface PXSearchResultsViewModel : NSObject {

	id<PXSearchResultsLayoutDataSource> _delegate;
	unsigned long long _configurationType;
	PXSearchResultsSectionedDataSourceManager* _dataSourceManager;

}

@property (assign,nonatomic) unsigned long long configurationType;                                       //@synthesize configurationType=_configurationType - In the implementation block
@property (nonatomic,retain) PXSearchResultsSectionedDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) NSArray * attachmentURLs; 
@property (nonatomic,readonly) NSArray * wordEmbeddingSubstitutions; 
@property (nonatomic,readonly) NSArray * suggestions; 
@property (assign,nonatomic,__weak) id<PXSearchResultsLayoutDataSource> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXSearchTopAssetsResult * topAssetsSearchResult; 
-(NSArray *)suggestions;
-(id<PXSearchResultsLayoutDataSource>)delegate;
-(unsigned long long)configurationType;
-(void)setConfigurationType:(unsigned long long)arg1 ;
-(long long)numberOfSections;
-(void)setDataSourceManager:(PXSearchResultsSectionedDataSourceManager *)arg1 ;
-(void)setDelegate:(id<PXSearchResultsLayoutDataSource>)arg1 ;
-(PXSearchResultsSectionedDataSourceManager *)dataSourceManager;
-(long long)numberOfVisibleSearchResultsInSection:(long long)arg1 ;
-(long long)numberOfSearchResultsInSection:(long long)arg1 ;
-(id)allSearchResultsForSection:(long long)arg1 ;
-(NSArray *)wordEmbeddingSubstitutions;
-(id)suggestionItemForIndexPath:(id)arg1 ;
-(PXSearchTopAssetsResult *)topAssetsSearchResult;
-(void)fetchImageForPerson:(id)arg1 targetSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)searchResultDataForIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)wordEmbeddingForIndexPath:(id)arg1 ;
-(long long)startingSectionNumberForType:(unsigned long long)arg1 ;
-(NSArray *)attachmentURLs;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(id)searchResultAtIndexPath:(id)arg1 ;
-(unsigned long long)rowTypeForIndexPath:(id)arg1 ;
-(BOOL)hasDisplayableSuggestions;
-(BOOL)shouldShowTableFooterView;
-(id)titleForHeaderButtonInSection:(long long)arg1 ;
-(BOOL)topAssetsExistForSection:(long long)arg1 ;
-(BOOL)sectionIsExpandable:(long long)arg1 ;
-(BOOL)shouldDisplayHeaderViewForSection:(long long)arg1 ;
-(double)heightForRowType:(unsigned long long)arg1 info:(id)arg2 ;
-(id)collapseSection:(long long)arg1 ;
-(id)expandSection:(long long)arg1 ;
-(BOOL)sectionIsExpanded:(long long)arg1 ;
-(id)initWithSectionedDataSourceManager:(id)arg1 configurationType:(unsigned long long)arg2 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(unsigned long long)sectionTypeForSection:(long long)arg1 ;
-(id)initWithSearchSectionedDataSource:(id)arg1 configurationType:(unsigned long long)arg2 ;
-(id)topAssetAtIndexPath:(id)arg1 ;
-(double)calculatedRowHeightForTopAssets;
-(double)numberOfTopAssetRows;
-(id)_sugestionForIndexPath:(id)arg1 ;
-(BOOL)hasNoResults;
-(BOOL)_resultsAreWordEmbeddingsOnly;
-(id)_selectedWordEmbeddingTextAtRow:(long long)arg1 ;
-(BOOL)_sectionIsTopAssetsSection:(long long)arg1 ;
-(BOOL)isValidSection:(long long)arg1 ;
-(unsigned long long)_displayableSuggestionCount;
-(id)_adjustedIndexPathForIndexPath:(id)arg1 ;
-(long long)_adjustedSectionForSection:(long long)arg1 ;
@end

