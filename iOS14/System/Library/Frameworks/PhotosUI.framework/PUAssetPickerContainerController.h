/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/PXPhotosViewDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PUAssetPickerSearchSuggestionsSelectionDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PUAssetPickerContainerControllerActionHandler, PUAssetPickerViewControllerActionHandler;
@class PUAssetPickerFilterOptions, NSOrderedSet, NSDictionary, UISegmentedControl, UIBarButtonItem, UIButton, UILabel, PHCachingImageManager, PXCachingCountManager, PXPhotosUIViewController, PXGAnchor, PXAssetsDataSourceManager, PUAssetPickerViewController, PXSearchQueryController, UISearchController, PXSearchComposableDataSource, PUAssetPickerSearchSuggestionsHeaderView, PUAlbumsGadgetViewController, NSHashTable, PXLoadingStatusManager, PXSelectionCoordinator, UIViewController, PUPhotoPickerResizeTaskDescriptorViewModel, PUSessionInfo, NSString;

@interface PUAssetPickerContainerController : UIViewController <UISearchResultsUpdating, UISearchBarDelegate, PXPhotosViewDelegate, PXScrollViewControllerObserver, PUAssetPickerSearchSuggestionsSelectionDelegate, PXChangeObserver> {

	BOOL _allowsMultipleSelection;
	BOOL _allowSafeAreaChangeAnchor;
	unsigned long long _viewOptions;
	PUAssetPickerFilterOptions* _filterOptions;
	NSOrderedSet* _selectedAssets;
	NSDictionary* _downloadProgress;
	id<PUAssetPickerContainerControllerActionHandler> _containerControllerActionHandler;
	id<PUAssetPickerViewControllerActionHandler> _viewControllerActionHandler;
	UISegmentedControl* _navigationBarSegmentedControl;
	long long _previousNavigationBarSegmentedControlSelectedIndex;
	UIBarButtonItem* _navigationBarCancelButton;
	UIBarButtonItem* _navigationBarAddButton;
	UIButton* _toolbarSelectedItemsButton;
	UILabel* _fileSizeLabel;
	UIBarButtonItem* _toolbarSelectedItemsFileSizeStackView;
	PHCachingImageManager* _cachingImageManager;
	PXCachingCountManager* _cachingCountManager;
	PXPhotosUIViewController* _photosViewController;
	PXGAnchor* _pinToTopAnchor;
	PXAssetsDataSourceManager* _photosDataSourceManager;
	PUAssetPickerViewController* _allAssetsViewController;
	PXSearchQueryController* _queryController;
	UISearchController* _searchController;
	PXSearchComposableDataSource* _searchSuggestionsCollectionViewDataSource;
	PUAssetPickerSearchSuggestionsHeaderView* _searchSuggestionsHeaderView;
	PUAlbumsGadgetViewController* _allAlbumsGadgetViewController;
	PUAssetPickerViewController* _allAlbumsViewController;
	NSHashTable* _pushedAssetPickerViewControllers;
	PXLoadingStatusManager* _loadingStatusManager;
	PXSelectionCoordinator* _selectionCoordinator;
	UIViewController* _unavailableViewController;
	PUPhotoPickerResizeTaskDescriptorViewModel* _resizeTaskDescriptorViewModel;
	PUSessionInfo* _sessionInfo;

}

@property (nonatomic,readonly) unsigned long long viewOptions;                                                                         //@synthesize viewOptions=_viewOptions - In the implementation block
@property (nonatomic,readonly) BOOL allowsMultipleSelection;                                                                           //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,retain) PUAssetPickerFilterOptions * filterOptions;                                                               //@synthesize filterOptions=_filterOptions - In the implementation block
@property (nonatomic,copy) NSOrderedSet * selectedAssets;                                                                              //@synthesize selectedAssets=_selectedAssets - In the implementation block
@property (nonatomic,copy) NSDictionary * downloadProgress;                                                                            //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,__weak,readonly) id<PUAssetPickerContainerControllerActionHandler> containerControllerActionHandler;              //@synthesize containerControllerActionHandler=_containerControllerActionHandler - In the implementation block
@property (nonatomic,__weak,readonly) id<PUAssetPickerViewControllerActionHandler> viewControllerActionHandler;                        //@synthesize viewControllerActionHandler=_viewControllerActionHandler - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * navigationBarSegmentedControl;                                                     //@synthesize navigationBarSegmentedControl=_navigationBarSegmentedControl - In the implementation block
@property (assign,nonatomic) long long previousNavigationBarSegmentedControlSelectedIndex;                                             //@synthesize previousNavigationBarSegmentedControlSelectedIndex=_previousNavigationBarSegmentedControlSelectedIndex - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * navigationBarCancelButton;                                                            //@synthesize navigationBarCancelButton=_navigationBarCancelButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * navigationBarAddButton;                                                               //@synthesize navigationBarAddButton=_navigationBarAddButton - In the implementation block
@property (nonatomic,readonly) UIButton * toolbarSelectedItemsButton;                                                                  //@synthesize toolbarSelectedItemsButton=_toolbarSelectedItemsButton - In the implementation block
@property (nonatomic,readonly) UILabel * fileSizeLabel;                                                                                //@synthesize fileSizeLabel=_fileSizeLabel - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * toolbarSelectedItemsFileSizeStackView;                                                //@synthesize toolbarSelectedItemsFileSizeStackView=_toolbarSelectedItemsFileSizeStackView - In the implementation block
@property (nonatomic,readonly) PHCachingImageManager * cachingImageManager;                                                            //@synthesize cachingImageManager=_cachingImageManager - In the implementation block
@property (nonatomic,readonly) PXCachingCountManager * cachingCountManager;                                                            //@synthesize cachingCountManager=_cachingCountManager - In the implementation block
@property (nonatomic,readonly) PXPhotosUIViewController * photosViewController;                                                        //@synthesize photosViewController=_photosViewController - In the implementation block
@property (nonatomic,retain) PXGAnchor * pinToTopAnchor;                                                                               //@synthesize pinToTopAnchor=_pinToTopAnchor - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * photosDataSourceManager;                                                    //@synthesize photosDataSourceManager=_photosDataSourceManager - In the implementation block
@property (nonatomic,readonly) PUAssetPickerViewController * allAssetsViewController;                                                  //@synthesize allAssetsViewController=_allAssetsViewController - In the implementation block
@property (nonatomic,readonly) PXSearchQueryController * queryController;                                                              //@synthesize queryController=_queryController - In the implementation block
@property (nonatomic,readonly) UISearchController * searchController;                                                                  //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,readonly) PXSearchComposableDataSource * searchSuggestionsCollectionViewDataSource;                               //@synthesize searchSuggestionsCollectionViewDataSource=_searchSuggestionsCollectionViewDataSource - In the implementation block
@property (nonatomic,readonly) PUAssetPickerSearchSuggestionsHeaderView * searchSuggestionsHeaderView;                                 //@synthesize searchSuggestionsHeaderView=_searchSuggestionsHeaderView - In the implementation block
@property (nonatomic,readonly) PUAlbumsGadgetViewController * allAlbumsGadgetViewController;                                           //@synthesize allAlbumsGadgetViewController=_allAlbumsGadgetViewController - In the implementation block
@property (nonatomic,readonly) PUAssetPickerViewController * allAlbumsViewController;                                                  //@synthesize allAlbumsViewController=_allAlbumsViewController - In the implementation block
@property (nonatomic,readonly) NSHashTable * pushedAssetPickerViewControllers;                                                         //@synthesize pushedAssetPickerViewControllers=_pushedAssetPickerViewControllers - In the implementation block
@property (nonatomic,readonly) PXLoadingStatusManager * loadingStatusManager;                                                          //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
@property (nonatomic,readonly) PXSelectionCoordinator * selectionCoordinator;                                                          //@synthesize selectionCoordinator=_selectionCoordinator - In the implementation block
@property (nonatomic,readonly) UIViewController * unavailableViewController;                                                           //@synthesize unavailableViewController=_unavailableViewController - In the implementation block
@property (assign,nonatomic) BOOL allowSafeAreaChangeAnchor;                                                                           //@synthesize allowSafeAreaChangeAnchor=_allowSafeAreaChangeAnchor - In the implementation block
@property (nonatomic,retain) PUPhotoPickerResizeTaskDescriptorViewModel * resizeTaskDescriptorViewModel;                               //@synthesize resizeTaskDescriptorViewModel=_resizeTaskDescriptorViewModel - In the implementation block
@property (nonatomic,readonly) PUSessionInfo * sessionInfo;                                                                            //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_useGadgetsAlbumsTab;
+(BOOL)_usePXPhotosView;
+(void)updateToolbarSelectedItemsButton:(id)arg1 selectedAssets:(id)arg2 ;
+(BOOL)_hideSearchBarWhenScrolling;
+(id)_setupSearchQueryControllerWithSuggestionsSectionProvider:(id)arg1 photosDataSourceManager:(id)arg2 suggestionsHeaderView:(id)arg3 photosViewController:(id)arg4 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(PXLoadingStatusManager *)loadingStatusManager;
-(BOOL)allowsMultipleSelection;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(PXPhotosUIViewController *)photosViewController;
-(UISearchController *)searchController;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(void)didSelectSuggestionAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PHCachingImageManager *)cachingImageManager;
-(void)setFilterOptions:(PUAssetPickerFilterOptions *)arg1 ;
-(PUAssetPickerFilterOptions *)filterOptions;
-(NSDictionary *)downloadProgress;
-(void)ppt_prepareForSearchTest:(/*^block*/id)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewDidLoad;
-(BOOL)_isInPopover;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setDownloadProgress:(NSDictionary *)arg1 ;
-(PUPhotoPickerResizeTaskDescriptorViewModel *)resizeTaskDescriptorViewModel;
-(PUSessionInfo *)sessionInfo;
-(id)contentScrollView;
-(unsigned long long)viewOptions;
-(BOOL)photosViewController:(id)arg1 didPickAssetReference:(id)arg2 ;
-(id)photosViewController:(id)arg1 animationForProposedAnimation:(id)arg2 ;
-(id)headerViewForPhotosViewController:(id)arg1 ;
-(void)switchFromViewController:(id)arg1 ;
-(void)_updateNavigationBarButtonItemsForSelectedAssets:(id)arg1 ;
-(void)switchToViewController:(id)arg1 ;
-(void)handleNavigationBarSegmentedControl:(id)arg1 ;
-(void)handleNavigationBarCancelButton:(id)arg1 ;
-(unsigned long long)_searchSuggestionLimit;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)handleNavigationBarAddButton:(id)arg1 ;
-(void)handleToolbarSelectedItemsButton:(id)arg1 ;
-(id)_createSearchController;
-(id)_setupCollectionViewLayoutWithSectionProviders:(id)arg1 ;
-(id)_sectionLayoutForSection:(long long)arg1 environment:(id)arg2 ;
-(void)_updateSearchFieldWithSuggestion:(id)arg1 ;
-(id<PUAssetPickerContainerControllerActionHandler>)containerControllerActionHandler;
-(id<PUAssetPickerViewControllerActionHandler>)viewControllerActionHandler;
-(UISegmentedControl *)navigationBarSegmentedControl;
-(long long)previousNavigationBarSegmentedControlSelectedIndex;
-(void)setPreviousNavigationBarSegmentedControlSelectedIndex:(long long)arg1 ;
-(UILabel *)fileSizeLabel;
-(NSOrderedSet *)selectedAssets;
-(UIBarButtonItem *)navigationBarCancelButton;
-(UIBarButtonItem *)navigationBarAddButton;
-(UIButton *)toolbarSelectedItemsButton;
-(UIBarButtonItem *)toolbarSelectedItemsFileSizeStackView;
-(PXCachingCountManager *)cachingCountManager;
-(PXGAnchor *)pinToTopAnchor;
-(void)setPinToTopAnchor:(PXGAnchor *)arg1 ;
-(PXAssetsDataSourceManager *)photosDataSourceManager;
-(PXSearchQueryController *)queryController;
-(PUAssetPickerViewController *)allAssetsViewController;
-(PXSearchComposableDataSource *)searchSuggestionsCollectionViewDataSource;
-(PUAssetPickerSearchSuggestionsHeaderView *)searchSuggestionsHeaderView;
-(PUAlbumsGadgetViewController *)allAlbumsGadgetViewController;
-(PUAssetPickerViewController *)allAlbumsViewController;
-(NSHashTable *)pushedAssetPickerViewControllers;
-(UIViewController *)unavailableViewController;
-(BOOL)allowSafeAreaChangeAnchor;
-(void)setAllowSafeAreaChangeAnchor:(BOOL)arg1 ;
-(void)ppt_switchToAlbumsTab;
-(void)setSelectedAssets:(NSOrderedSet *)arg1 ;
-(id)px_gridPresentation;
-(PXSelectionCoordinator *)selectionCoordinator;
-(void)selectedAssetsDidChange:(id)arg1 ;
-(void)downloadProgressDidChange:(id)arg1 changedAssetIdentifier:(id)arg2 ;
-(void)presentAssetPickerViewControllerWithSectionDataItems:(id)arg1 title:(id)arg2 ;
-(void)configurePromptTextForLimitedLibraryMode:(BOOL)arg1 selectionLimit:(long long)arg2 ;
-(id)initWithViewOptions:(unsigned long long)arg1 filterOptions:(id)arg2 resizeTaskDescriptorViewModel:(id)arg3 selectedAssets:(id)arg4 selectionCoordinator:(id)arg5 loadingStatusManager:(id)arg6 downloadProgress:(id)arg7 containerControllerActionHandler:(id)arg8 viewControllerActionHandler:(id)arg9 ;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setResizeTaskDescriptorViewModel:(PUPhotoPickerResizeTaskDescriptorViewModel *)arg1 ;
@end

