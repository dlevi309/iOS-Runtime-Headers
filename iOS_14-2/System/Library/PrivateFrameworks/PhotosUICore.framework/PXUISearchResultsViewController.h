/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXSearchTapToRadarSectionProviderDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>

@class UICollectionView, PXSearchComposableDataSource, PXSearchQueryController, PXSearchIndexManager, PXSearchQuery, PXSearchResultsOneUpViewModel, UIScrollView, NSString, UISearchController;

@interface PXUISearchResultsViewController : UIViewController <PXOneUpPresentationDelegate, PXSearchTapToRadarSectionProviderDelegate, UICollectionViewDelegate, UIScrollViewDelegate, UISearchBarDelegate, UISearchResultsUpdating> {

	UICollectionView* _collectionView;
	PXSearchComposableDataSource* _dataSource;
	PXSearchQueryController* _queryController;
	PXSearchIndexManager* _searchIndexManager;
	PXSearchQuery* _currentSearchQuery;
	PXSearchResultsOneUpViewModel* _oneUpViewModel;

}

@property (nonatomic,readonly) UIScrollView * ppt_scrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) PXSearchComposableDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXSearchQueryController * queryController;                   //@synthesize queryController=_queryController - In the implementation block
@property (nonatomic,retain) PXSearchIndexManager * searchIndexManager;                   //@synthesize searchIndexManager=_searchIndexManager - In the implementation block
@property (nonatomic,copy) PXSearchQuery * currentSearchQuery;                            //@synthesize currentSearchQuery=_currentSearchQuery - In the implementation block
@property (nonatomic,retain) PXSearchResultsOneUpViewModel * oneUpViewModel;              //@synthesize oneUpViewModel=_oneUpViewModel - In the implementation block
@property (nonatomic,readonly) UISearchController * searchController; 
-(id)px_gridPresentation;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)didSelectTapToRadar;
-(UISearchController *)searchController;
-(void)_configureQueryControllerWithResultsSectionProvider:(id)arg1 suggestionsSectionProvider:(id)arg2 queryStatusSectionProvider:(id)arg3 tapToRadarSectionProvider:(id)arg4 ;
-(void)_configureCollectionViewWithSectionProviders:(id)arg1 ;
-(void)_configureDataSourceForCollectionView:(id)arg1 sectionProviders:(id)arg2 ;
-(id)_collectionViewLayoutWithProviders:(id)arg1 ;
-(long long)_contentInsetsReferenceForTraitCollection:(id)arg1 ;
-(void)setQueryController:(PXSearchQueryController *)arg1 ;
-(void)_didSelectAssetsSeeAllButtonForSection:(id)arg1 allAssetResultUUIDs:(id)arg2 title:(id)arg3 ;
-(void)_didSelectCollectionsSeeAllButtonForSection:(id)arg1 sectionProvider:(id)arg2 searchResultsHeaderView:(id)arg3 ;
-(void)_didSelectItemIdentifier:(id)arg1 inSuggestionsSectionProvider:(id)arg2 ;
-(void)_didSelectItemIdentifier:(id)arg1 inResultsSectionProvider:(id)arg2 ;
-(void)setSearchIndexManager:(PXSearchIndexManager *)arg1 ;
-(id)init;
-(void)setCurrentSearchQuery:(PXSearchQuery *)arg1 ;
-(PXSearchQuery *)currentSearchQuery;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_didSelectAlbumSearchResult:(id)arg1 ;
-(void)_didSelectDetailCollectionSearchResult:(id)arg1 ;
-(id)_emptyPhotosViewControllerForSearchResult:(id)arg1 ;
-(void)didSelectSeeAllForAssetUUIDs:(id)arg1 title:(id)arg2 ;
-(void)didSelectAssetSearchResult:(id)arg1 ;
-(void)didSelectAssetAggregationSearchResult:(id)arg1 ;
-(void)didSelectCollectionSearchResult:(id)arg1 ;
-(void)didSelectPersonSearchResult:(id)arg1 ;
-(UICollectionView *)collectionView;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(PXSearchComposableDataSource *)dataSource;
-(PXSearchIndexManager *)searchIndexManager;
-(void)setDataSource:(PXSearchComposableDataSource *)arg1 ;
-(void)viewDidLoad;
-(id)_radarRoutes;
-(id)_radarRoutesDescription;
-(id)_radarInfoForRadarRoute:(id)arg1 searchQuery:(id)arg2 ;
-(id)_titleForRadarRoute:(id)arg1 searchQuery:(id)arg2 ;
-(id)_templateForRadarRoute:(id)arg1 ;
-(id)_keywordForRadarRoute:(id)arg1 ;
-(void)_didSelectTapToRadar:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)ppt_expandAllSections;
-(PXSearchResultsOneUpViewModel *)oneUpViewModel;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(void)setOneUpViewModel:(PXSearchResultsOneUpViewModel *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(unsigned long long)_searchSuggestionLimit;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PXSearchQueryController *)queryController;
-(UIScrollView *)ppt_scrollView;
-(id)_ppt_resultsSectionProvider;
-(void)showOneUpForAssetSearchResult:(id)arg1 ;
-(id)_searchResultsSectionProvider;
@end

